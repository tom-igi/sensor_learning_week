#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

Adafruit_BME280 bme; // I2C

const unsigned long DELAY_TIME_MS = 1000;


void setup() {
    // Communication 1: UART over USB between microcontroller and computer
    Serial.begin(9600);
    while(!Serial);    // time to get serial running

    // Communication 2: I2C between microcontroller and sensor
    unsigned status; 
    status = bme.begin(0x76);
    if (!bme.begin(0x76)) { // May need to change the address (0x76) if the sensor is different
        Serial.println("Could not find a valid BME280 sensor, check wiring!");
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
    float temperature = bme.readTemperature();
    float pressure = bme.readPressure() / 100.0F; // Convert to hPa
    float humidity = bme.readHumidity();

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.print("Pressure: ");
    Serial.print(pressure);
    Serial.println(" hPa");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    // Add a blank line for readability between readings.
    Serial.println();
}