# Sending Sensor Data to the Cloud with ESP32

This guide explains how to configure your ESP32 to send sensor data to the cloud using Wi-Fi and HTTP requests. We’ll cover setting up the host, updating the ESP32 code, and enabling deep sleep for low-power operation.

---

## 1. Set Up the Host

1. Go to [bespokesensors.com](http://bespokesensors.com).
2. Click **Login**.
3. Select **Register for an account**.
4. Use your **IGI email address** to register.

The sensor endpoint is:

```
http://bespokesensors.com/databases/post-sensor.php
```

The server accepts the following parameters:

* `api_key` → Ask Tom
* `value1` → Temperature
* `value2` → Pressure
* `value3` → Humidity
* `voltage` → Voltage

---

## 2. Update the Code

We’ll use the code from **session 2, step 6** as a starting point and add Wi-Fi and HTTP functionality.

### 2.a Add Wi-Fi Connectivity

Insert this code to connect your ESP32 to Wi-Fi:

```cpp
#include <WiFi.h>
```
```cpp
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";
```
```cpp
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
```

---

### 2.b Send Data with HTTP POST

Add the following code to post data to the server:

```cpp
#include <HTTPClient.h>
```
```cpp
// API key
String apiKeyValue = "PUT_YOUR_API_KEY_HERE";
// Server details
const char* serverName = "http://bespokesensors.com/databases/post-sensor.php";

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
```

---

## 3. Enable Deep Sleep

Normally, your code runs once in `setup()` and then loops continuously in `loop()`. However, after waking up from deep sleep, the ESP32 restarts and runs `setup()` again. This means we can put everything inside `setup()` only.

Here’s the code to enable deep sleep for **60 seconds**:

```cpp
const uint64_t SLEEP_TIME_US = 60ULL * 1000000ULL;

Serial.println("Going to deep sleep...");
esp_sleep_enable_timer_wakeup(SLEEP_TIME_US);
esp_deep_sleep_start();
```

---

## 4. Next Steps

At this point, you have everything you need to:

* Send data from your ESP32 to the cloud
* Use low power mode with Wi-Fi

You can also expand the system by adding:

* **Battery voltage measurement**
* **Over-the-air (OTA) updates**
* **Alternative communication methods** (e.g., Bluetooth, LoRa, MQTT)