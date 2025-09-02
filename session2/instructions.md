# Session 2

Reference: [Arduino Pico Documentation](https://arduino-pico.readthedocs.io/en/latest/)

---

## 1. Download / Install Arduino IDE
- Download the Arduino IDE: [https://www.arduino.cc/en/software/](https://www.arduino.cc/en/software/)  

---

## 2. Set up for Raspberry Pi Pico
- Follow the instructions to add Pico support via Arduino Boards Manager:  
  [Installing via Arduino Boards Manager](https://arduino-pico.readthedocs.io/en/latest/install.html#installing-via-arduino-boards-manager)

---

## 3. Create Your First Sketch
1. Open Arduino IDE  
2. Go to **Tools → Board → Raspberry Pi Pico**  
3. Use code from ```code/step3.ino``` Open example sketch: **File → Examples → 01.Basics → Blink**

---

## 4. Upload Sketch for the First Time
1. Plug in your Pico **while holding the BOOTSEL button**  
2. Go to **Tools → Port → UF2 Board**  
3. Click the **Upload (→) button**  
4. The onboard LED should start blinking

---

## 5. Upload Sketch Normally (Second Time)
- First-time upload is slightly different; subsequent uploads are standard:  
1. Modify the sketch (e.g., change `delay(1000);` to `delay(200);`)  
2. Go to **Tools → Port → [select Raspberry Pi Pico port]**  
3. Click **Upload (→)**  

## 6. Change Circuit to Flash an External LED

![LED Circuit](circuits/circuit1.jpg)

### Step a: Calculate the Resistor Value
- LEDs require a **current-limiting resistor** to prevent too much current flowing through them, which could **burn out the LED** or **damage the Pico pin**.  
- **LED considerations:**  
  - Voltage ~2 V, current ~10 mA  
  - Pico pins operate at 3.3 V  
  - Calculate appropriate resistor for the LED  

### Step b: Update the Code

- Reference Pico pins: [Raspberry Pi Pico Pinout](https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html)  

- Define a pin to control the LED in your sketch:  
```cpp
const int LEDPin = 0; // corresponds to GP0
````
- See ```code/step6.ino``` if needed

---

### Step c: Wire the Circuit

* Connect the components using the Pico pins you looked up:

  * **LED long leg is positive**

* Upload the sketch, and the LED should blink.

---

## 7. Read Temperature with BME280

1. Install library: **Tools → Manage Libraries → Adafruit BME280**
2. Open ```code/step7.ino``` or example sketch: **File → Examples → Adafruit BME280 Library → bme280test**
3. Edit I2C address if needed (commonly `0x76`)
4. Four pins are required
  - Power
  - Ground
  - SDA
  - SCL  
5. Upload sketch as before
6. Open **Serial Monitor** (top right) and set **baud rate to 9600**

---

## 8. Combine LED Circuit and Temperature Reading

* Modify sketch:

  * If temperature exceeds 28 °C → turn on LED
  * Else → turn LED off
* See ```code/step8.ino``` if needed

---

## 9. Final Improvement: Use a Transistor to Drive the LED

* Use an **NPN transistor** (e.g., BC337)
* This allows the microcontroller to safely switch higher currents

![LED Circuit](circuits/circuit2.jpg)