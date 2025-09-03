## 🌍 Environmental Sensors

@* **BME280** – Temperature, humidity, and barometric pressure sensor.
@* **BME688** – Successor to BME280, with temperature, humidity, pressure, and gas sensing (AI-based air quality).
@* **BMP180** – Barometric pressure and temperature sensor (older, less accurate than BME280).
@* **GY-30 (BH1750)** – Digital light intensity sensor (lux meter).
@* **HW-390** - Soil moisture
@@HW-498 (Analog Temperature Sensor) – Simple NTC/PTC thermistor-based module providing an analog voltage that varies with temperature; used for basic temperature measurement and monitoring.
@@ HW-503 (Digital Temperature Sensor) – Thermistor-based temperature sensor module with a digital output (threshold set via potentiometer); useful for on/off temperature-triggered control.
@HW-507 (DHT11) – Digital temperature and humidity sensor with calibrated output; widely used for basic indoor climate monitoring.
@DS18B20 (Dallas Temperature Sensor) – Digital 1-Wire temperature sensor providing precise temperature readings; commonly used in microcontroller projects for temperature monitoring.
@@HW-486 (Photoresistor / Light Sensor Module) – Detects ambient light intensity and outputs an analog or digital signal; commonly used for light-sensitive projects like automatic lighting or light measurement.
HW-506 (DS18B20 Temperature Sensor Module) – Digital 1-Wire temperature sensor module; provides precise temperature readings for IoT and microcontroller projects.

---

## 🧪 Gas & Air Quality Sensors

@* **MICS6814** – Multi-gas sensor (CO, NO₂, NH₃).
@* **COZIR-AX-5000** – High-performance CO₂ sensor (NDIR-based).
@@HW-491 (Infrared Flame Sensor Module) – Detects flames by sensing IR light (760–1100 nm); adjustable sensitivity, analog/digital outputs, commonly used in fire detection and safety monitoring projects.

---

## 📷 Imaging & Vision

@* **ESP32-CAM** – ESP32 microcontroller with built-in camera module for image capture and streaming.

---

## 📡 Distance & Proximity Sensors

@* **HC-SR04** – Ultrasonic distance sensor, popular in robotics.
@* **JSN-SR04T-V3.0** – Waterproof ultrasonic distance sensor.
@* **LV-MaxSonar-EZ** – High-quality ultrasonic distance sensor with better noise filtering.
@* **VL53L1X** – Time-of-flight (ToF) laser distance sensor.
@@ HW-511 (TCRT5000 Line Tracking Sensor) – Infrared reflective sensor module used for line tracking in robotics (detects black/white contrast on surfaces).
@@IRDA (Infrared Obstacle Sensor) – Emits infrared light and detects reflections from nearby objects; adjustable transmitter strength and receiver sensitivity, commonly used for obstacle detection in robotics.
@@HW-487 (Light Blocking / Optical Sensor) – U-shaped optical sensor that detects objects breaking the light beam, outputting a digital high signal when blocked; commonly used for object detection or counting.
@@HW-493 (Laser Diode Module) – Low-power red laser module emitting a focused beam; can be used for basic signaling, alignment, or obstacle detection when combined with a photodetector.
HW-489 (Infrared Transmitting Sensor Module) – Emits infrared light for communication or obstacle detection; can be paired with an IR receiver for sensing or remote control applications.


---

## 🎮 Motion & Position Sensors

@@* **MPU-9250/6500** – 9-axis (accelerometer, gyroscope, magnetometer) or 6-axis (gyro + accel) IMU.
@@* **HW-504**
@@* HW-499 (KY-027 Magic Light Cup) – Pair of modules with LED and mercury tilt switch; tilting simulates “pouring” light from one module to another, useful for motion/tilt demonstrations.
@@HW-509 (Linear Hall Sensor) – Analog Hall effect sensor that outputs a voltage proportional to magnetic field strength; used for position, proximity, or current sensing.
@@HW-484 (Reed Switch Module) – Magnetic switch that closes or opens in the presence of a magnet; used for position sensing, door/window monitoring, and magnetic triggers.
@@HW-497 (KY-021 Magnetic Reed Switch Module) – Normally open magnetic switch that closes in the presence of a magnet, providing a digital output for position or proximity detection.
HW-040 (Rotary Encoder) – Rotary input device that outputs pulses corresponding to rotation direction and amount; often includes a push button for reset, used for position tracking or user input.
@@ HW-500 (Tap / Knock Sensor Module) – Detects taps or knocks and outputs a digital signal; can function as a momentary switch for triggering actions in electronics projects.
@@HW-501 (KY-020 Tilt Switch Module) – Tilt-activated switch that closes when tilted, providing a digital signal; commonly used for orientation or motion detection in electronics projects.
@@HW-513 (Shock / Vibration Sensor Module) – Detects vibrations or shocks and outputs a digital signal when triggered; used for impact detection, security, or motion sensing projects.
HW-495 (Hall Magnetic Module) – Detects magnetic fields and outputs a digital signal; used for position, proximity, or current sensing applications.
HW-492 (Analog Hall Sensor) – Analog Hall effect sensor that outputs a voltage proportional to magnetic field strength; used for position, proximity, or current sensing.
HW-505 (Mercury Tilt Switch Module) – Tilt-activated switch containing mercury; closes or opens a circuit depending on orientation, used for motion detection or orientation sensing.

---

## 🔑 Identification / Security

@* **RFID-RC522** – RFID module for reading/writing 13.56 MHz tags.

---

## 📺 Displays and indicators

@* **LED screen** – General LED matrix/screen for displaying text/numbers.
@* **0.91” OLED** – Small I²C OLED display, usually 128×32 pixels.
@@HW-478 (SMD RGB LED) – Surface-mount RGB LED containing red, green, and blue diodes; allows color mixing for visual indicators and display effects.
@@HW-477 (Two-Color Common Cathode RGB LED Module) – LED module with red and green diodes sharing a common cathode; allows basic two-color visual indication in electronics projects.
@@HW-479 (RGB LED Module) – Module containing red, green, and blue LEDs; allows color mixing for visual effects, indicators, and simple displays.
HW-480 (Two-Color Common Cathode GR LED Module) – LED module with green and red diodes sharing a common cathode; used for basic two-color visual indication in electronics projects.
HW-481 (7-Color Flashing LED Module) – Pre-programmed LED module that automatically cycles through seven colors; used for visual effects and decorative lighting without additional programming.

---

## ⚡ Power Management / Converters

@* **TP5100** – Lithium battery charger module (1S/2S Li-ion).
@* **3.7 V → 5 V converter** – Boost converter, often used for powering 5 V systems from Li-ion batteries.
@* **CR1220 (likely a timer)** – Probably a coin cell battery used for RTC backup.

---

## ⚙️ Motors & Drivers

@* **Stepper motor driver** – Driver module to control stepper motors (exact model needed).

---

## 📡 RF / Wireless Modules

@* **MX-RM-5V** – 433 MHz superheterodyne RF receiver.
@* **FS1000A** – 433 MHz RF transmitter module (often paired with MX-RM-5V).
@@* **SIM800L**
@@ HW-490 (IR Receiver Module) – Infrared receiver compatible with IR transmitters or remote controls; used for wireless control of microcontrollers and electronics projects.

---

@Category: Sound & Alert Modules
@HW-508 (95dB Alarm Buzzer) – High-decibel electronic buzzer (3–24 V) capable of continuous or intermittent beep, used for alarms and alerts.
@HW-496 (Small Sound Sensor) – Compact microphone-based sensor with analog and digital outputs; commonly used for clap detection and sound-activated control.
HW-485 (Large Sound Sensor) – Larger version of a microphone-based sensor with analog and digital outputs; suitable for detecting louder sounds or for use in sound-activated projects.
HW-512 (KY-012 Active Buzzer Module) – Produces a single-tone sound when triggered by a high signal; used for alarms, notifications, and audio feedback in projects.


Category: User Input / Switches
HW-483 (Push Button) – Simple tactile push-button switch used for user input or control in electronic circuits. 
HW-494 (Touch Sensor Module) – Capacitive touch sensor that outputs a signal when touched by a finger or conductive object; used for touch-activated control.

Category: Biomedical / Physiological Sensors
HW-502 (Heartbeat / Finger Pulse Sensor) – Optical sensor that detects pulse rate by measuring blood flow through a fingertip; used for heart rate monitoring and health projects.

## ❓ Miscellaneous / Breakout Modules (HW-xxx series)

These are generic module numbers, often assigned by Chinese sellers. Without full datasheets it’s hard to be 100% precise, but some are recognizable:

* **HW-390** – Flame sensor (IR photodiode module).
* **HW-504** – Soil moisture sensor.
* **HW-489, HW-499, HW-496, HW-495, HW-501, HW-503, HW-480, HW-477, HW-484, HW-485, HW-483, HW-492, HW-482, HW-491, HW-511, HW-479, HW-508, HW-486, HW-487, HW-478, HW-494** – Likely a mix of breakout boards: Hall sensors, relay modules, sound sensors, vibration, rain detection, tilt, touch, IR receivers, etc. (Would need pictures to pin each one down).

---

## 🚦 Special Module (Unclear ID)

* **A0121AU** – Not immediately identifiable (might be an automotive sensor, magnetic pickup, or camera module – needs confirmation).