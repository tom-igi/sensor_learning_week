#include <Wire.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp; // I2C

const unsigned long DELAY_TIME_MS = 1000;


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
}


void loop() { 
  // Call the function to read and print sensor values
  printSensorValues();

  delay(DELAY_TIME_MS);
}


void printSensorValues() {
  // Read all sensor values at once to keep them synchronized.
  float temperature = bmp.readTemperature();
  float pressure = bmp.readPressure() / 100.0F; // Convert to hPa

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.println(" hPa");

  // Add a blank line for readability between readings.
  Serial.println();
}