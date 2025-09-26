#include <WiFi.h>
#include <HTTPClient.h>
#include <Wire.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp; // I2C

const uint64_t SLEEP_TIME_US = 60ULL * 1000000ULL;

// WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// API key
String apiKeyValue = "PUT_YOUR_API_KEY_HERE";
// Server details
const char* serverName = "http://bespokesensors.com/databases/post-sensor.php";

// Structure to hold measurements
struct Measurements {
  float temperature;
  float humidity;
  float pressure;
  float voltage;
};


void setup() {
  // Communication 1: UART over USB between microcontroller and computer
  Serial.begin(9600);
  while(!Serial);    // time to get serial running

  // Communication 2: I2C between microcontroller and sensor
  unsigned status; 
  status = bmp.begin();
  if (!bmp.begin()) {
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1); // Stop the program if the sensor isn't found.
  }

  // Connect to the WiFi
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  Measurements m = getAndPrintSensorValues();

  postSensorValues(m);

  Serial.println("Going to deep sleep...");
  esp_sleep_enable_timer_wakeup(SLEEP_TIME_US);
  esp_deep_sleep_start();
}


void loop() { 
}


// Function to read and print sensor values
Measurements getAndPrintSensorValues() {
  Measurements m;
  m.temperature = bmp.readTemperature();
  m.pressure    = bmp.readPressure() / 100.0F; // Convert to hPa
  m.humidity    = 0; // Placeholder
  m.voltage     = 0; // Placeholder

  Serial.print("Temperature: ");
  Serial.print(m.temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(m.humidity);
  Serial.println(" %");

  Serial.print("Pressure: ");
  Serial.print(m.pressure);
  Serial.println(" hPa");

  Serial.print("Voltage: ");
  Serial.print(m.voltage);
  Serial.println(" V");
  Serial.println();

  return m;
}


// Function to send sensor values to the server
void postSensorValues(Measurements m) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    String httpRequestData = "api_key=" + apiKeyValue +
                             "&value1=" + String(m.temperature) +
                             "&value2=" + String(m.humidity) +
                             "&value3=" + String(m.pressure) +
                             "&voltage=" + String(m.voltage);

    Serial.print("Sending data: ");
    Serial.println(httpRequestData);

    int httpResponseCode = http.POST(httpRequestData);

    if (httpResponseCode > 0) {
      Serial.print("Server response: ");
      Serial.println(http.getString());
    } else {
      Serial.print("Error code: ");
      Serial.println(httpResponseCode);
    }

    http.end();
  } else {
    Serial.println("WiFi disconnected");
  }
}