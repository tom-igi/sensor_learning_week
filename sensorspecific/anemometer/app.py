#!/usr/bin/env python3
"""
Main application to read and display wind speed data
"""

import time
from anemometer import WindSpeedSensor

def main():
    # Initialize the sensor
    sensor = WindSpeedSensor(port='/dev/ttyUSB0', baudrate=4800, address=0x01)
    
    # Connect to the sensor
    if not sensor.connect():
        print("Failed to connect to sensor")
        return
    
    print("Connected to wind speed sensor")
    print("Reading wind speed every 1 second...")
    print("Press Ctrl+C to stop\n")
    
    try:
        while True:
            # Get wind speed from sensor
            wind_speed = sensor.read_wind_speed()
            
            if wind_speed is not None:
                print(f"Wind Speed: {wind_speed:.1f} m/s")
            else:
                print("Error: Could not read wind speed")
            
            time.sleep(1)
            
    except KeyboardInterrupt:
        print("\nStopping...")
    finally:
        sensor.close()
        print("Sensor connection closed")

if __name__ == "__main__":
    main()