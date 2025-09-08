## 🌍 Environmental Sensors

### Temperature, Humidity & Pressure
* **Temperature, humidity, and barometric pressure** — BME280 sensor.
* **Temperature, humidity, pressure, and gas sensing** — BME688 (AI-based air quality, successor to BME280).
* **Analog temperature** — HW-498 (Simple NTC/PTC thermistor-based module providing an analog voltage that varies with temperature; used for basic temperature measurement and monitoring).
* **Digital temperature with threshold** — HW-503 (Thermistor-based temperature sensor module with digital output, threshold set via potentiometer; useful for on/off temperature-triggered control).
* **Digital temperature and humidity** — HW-507 (DHT11) (calibrated output; widely used for basic indoor climate monitoring).
* **Precise digital temperature** — DS18B20 (Dallas Temperature Sensor) (1-Wire temperature sensor providing precise temperature readings; commonly used in microcontroller projects).
* **Precise digital temperature** — HW-506 (DS18B20 Temperature Sensor Module) (1-Wire temperature sensor module; provides precise temperature readings for IoT and microcontroller projects).
* **Barometric pressure and temperature** — BMP180 (older, less accurate than BME280).


### Light & Optical
* **Digital light intensity** — GY-30 (BH1750) (lux meter).
* **Ambient light intensity** — HW-486 (Photoresistor / Light Sensor Module) (detects ambient light intensity and outputs analog or digital signal; commonly used for light-sensitive projects like automatic lighting or light measurement).

### Soil & Moisture
* **Soil moisture** — HW-504 (soil moisture sensor).

---

## 🧪 Gas & Air Quality Sensors

* **Multi-gas detection** — MICS6814 (CO, NO₂, NH₃).
* **High-performance CO₂ sensing** — COZIR-AX-5000 (NDIR-based).
* **Infrared flame detection** — HW-491 (detects flames by sensing IR light 760–1100 nm; adjustable sensitivity, analog/digital outputs, commonly used in fire detection and safety monitoring projects).

---

## 📡 Distance & Proximity Sensors

### Ultrasonic Distance
* **Ultrasonic distance** — HC-SR04 (popular in robotics).
* **Waterproof ultrasonic distance** — JSN-SR04T-V3.0.
* **High-quality ultrasonic distance** — LV-MaxSonar-EZ (with better noise filtering).

### Laser & Time-of-Flight
* **Time-of-flight laser distance** — VL53L1X (ToF laser distance sensor).
* **Laser beam emission** — HW-493 (Low-power red laser module emitting focused beam; can be used for basic signaling, alignment, or obstacle detection when combined with a photodetector).

### Infrared & Optical Detection
* **Line tracking detection** — HW-511 (TCRT5000) (infrared reflective sensor module used for line tracking in robotics, detects black/white contrast on surfaces).
* **Infrared obstacle detection** — IRDA (emits infrared light and detects reflections from nearby objects; adjustable transmitter strength and receiver sensitivity, commonly used for obstacle detection in robotics).
* **Light beam interruption** — HW-487 (U-shaped optical sensor that detects objects breaking the light beam, outputting digital high signal when blocked; commonly used for object detection or counting).
* **Infrared light transmission** — HW-489 (emits infrared light for communication or obstacle detection; can be paired with an IR receiver for sensing or remote control applications).

---

## 🎮 Motion & Position Sensors

### Inertial Measurement
* **9-axis motion sensing** — MPU-9250 / MPU-6500 (accelerometer, gyroscope, magnetometer).

### Tilt & Orientation
* **Tilt demonstration** — HW-499 (KY-027 Magic Light Cup) (pair of modules with LED and mercury tilt switch; tilting simulates "pouring" light from one module to another, useful for motion/tilt demonstrations).
* **Tilt switch activation** — HW-501 (KY-020 Tilt Switch Module) (tilt-activated switch that closes when tilted, providing digital signal; commonly used for orientation or motion detection).
* **Mercury tilt switching** — HW-505 (Mercury Tilt Switch Module) (tilt-activated switch containing mercury; closes or opens circuit depending on orientation, used for motion detection or orientation sensing).

### Magnetic Field Detection
* **Linear magnetic field strength** — HW-509 (Linear Hall Sensor) (analog Hall effect sensor that outputs voltage proportional to magnetic field strength; used for position, proximity, or current sensing).
* **Magnetic field presence** — HW-495 (Hall Magnetic Module) (detects magnetic fields and outputs digital signal; used for position, proximity, or current sensing applications).
* **Analog magnetic field strength** — HW-492 (Analog Hall Sensor) (outputs voltage proportional to magnetic field strength; used for position, proximity, or current sensing).
* **Magnetic proximity switching** — HW-484 (Reed Switch Module) (magnetic switch that closes or opens in presence of magnet; used for position sensing, door/window monitoring, and magnetic triggers).
* **Magnetic reed switching** — HW-497 (KY-021 Magnetic Reed Switch Module) (normally open magnetic switch that closes in presence of magnet, providing digital output for position or proximity detection).

### Impact & Vibration
* **Tap/knock detection** — HW-500 (Tap / Knock Sensor Module) (detects taps or knocks and outputs digital signal; can function as momentary switch for triggering actions).
* **Shock/vibration detection** — HW-513 (Shock / Vibration Sensor Module) (detects vibrations or shocks and outputs digital signal when triggered; used for impact detection, security, or motion sensing projects).

### Rotational Position
* **Rotary position encoding** — HW-040 (Rotary Encoder) (rotary input device that outputs pulses corresponding to rotation direction and amount; often includes push button for reset, used for position tracking or user input).

---

## 📺 Displays & Indicators

* **LED matrix display** — LED screen (general LED matrix/screen for displaying text/numbers).
* **Small OLED display** — 0.91" OLED (I²C OLED display, usually 128×32 pixels).
* **RGB color mixing** — HW-478 (SMD RGB LED) (surface-mount RGB LED containing red, green, and blue diodes; allows color mixing for visual indicators and display effects).
* **Two-color indication** — HW-477 (Two-Color Common Cathode RGB LED Module) (LED module with red and green diodes sharing common cathode; allows basic two-color visual indication).
* **RGB color effects** — HW-479 (RGB LED Module) (module containing red, green, and blue LEDs; allows color mixing for visual effects, indicators, and simple displays).
* **Green/red indication** — HW-480 (Two-Color Common Cathode GR LED Module) (LED module with green and red diodes sharing common cathode; used for basic two-color visual indication).
* **Automatic color cycling** — HW-481 (7-Color Flashing LED Module) (pre-programmed LED module that automatically cycles through seven colors; used for visual effects and decorative lighting without additional programming).

---

## ⚡ Power Management / Converters

* **Lithium battery charging** — TP5100 (1S/2S Li-ion charger module).
* **Voltage boost conversion** — 3.7 V → 5 V converter (boost converter, often used for powering 5 V systems from Li-ion batteries).
* **RTC backup power** — CR1220 (coin cell battery, often used for RTC backup).

---

## 📡 RF / Wireless Modules

* **433 MHz RF reception** — MX-RM-5V (superheterodyne RF receiver).
* **433 MHz RF transmission** — FS1000A (RF transmitter module, often paired with MX-RM-5V).
* **Cellular communication** — SIM800L (GSM/GPRS module).
* **Infrared signal reception** — HW-490 (IR Receiver Module) (compatible with IR transmitters or remote controls; used for wireless control of microcontrollers and electronics projects).

---

## 🔊 Sound & Alert Modules

* **High-decibel alarm** — HW-508 (95dB Alarm Buzzer) (3–24 V electronic buzzer capable of continuous or intermittent beep, used for alarms and alerts).
* **Sound detection** — HW-496 (Small Sound Sensor) (compact microphone-based sensor with analog and digital outputs; commonly used for clap detection and sound-activated control).
* **Loud sound detection** — HW-485 (Large Sound Sensor) (larger microphone-based sensor with analog and digital outputs; suitable for detecting louder sounds or for use in sound-activated projects).
* **Active buzzer tone** — HW-512 (KY-012 Active Buzzer Module) (produces single-tone sound when triggered by high signal; used for alarms, notifications, and audio feedback).

---

## 👆 User Input / Switches

* **Tactile button input** — HW-483 (Push Button) (simple tactile push-button switch used for user input or control in electronic circuits).
* **Capacitive touch detection** — HW-494 (Touch Sensor Module) (outputs signal when touched by finger or conductive object; used for touch-activated control).

---

## 🔧 Miscellaneous

### Imaging & Vision
* **Image capture and streaming** — ESP32-CAM (ESP32 microcontroller with built-in camera module).

### Identification / Security
* **RFID tag reading/writing** — RFID-RC522 (13.56 MHz RFID module).

### Motors & Drivers
* **Stepper motor control** — Stepper motor driver (driver module to control stepper motors, exact model needed).

### Biomedical / Physiological
* **Heart rate monitoring** — HW-502 (Heartbeat / Finger Pulse Sensor) (optical sensor that detects pulse rate by measuring blood flow through fingertip; used for heart rate monitoring and health projects).