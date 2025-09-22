#include <Wire.h>
#include <SparkFunTMP102.h>

TMP102 sensor0;

const int buttonPin = 33; // Button connected to GPIO 33

void setup() {
  Serial.begin(115200);
  Wire.begin();

  // Button wired to GND, use internal pull-up
  pinMode(buttonPin, INPUT_PULLUP);

  if(!sensor0.begin()) {
    Serial.println("Cannot connect to TMP102.");
    while(1);
  }

  Serial.println("Connected to TMP102!");

  // TMP102 configuration
  sensor0.setFault(0);
  sensor0.setAlertPolarity(1);
  sensor0.setAlertMode(0);
  sensor0.setConversionRate(2);
  sensor0.setExtendedMode(0);
  sensor0.setHighTempF(85.0);
  sensor0.setLowTempF(84.0);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // With pull-up: pressed = LOW, not pressed = HIGH
  if (buttonState == LOW) {  
    float temperature;

    sensor0.wakeup();
    delay(100);

    temperature = sensor0.readTempC();
    delay(100);

    sensor0.sleep();

    Serial.print("Temperature: ");
    Serial.println(temperature);
  }

  delay(50); // Check every 50ms for button press
}