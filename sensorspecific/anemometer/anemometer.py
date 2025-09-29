#!/usr/bin/env python3
"""
Wind Speed Sensor Module for Raspberry Pi
Reads wind speed data via Modbus-RTU protocol
"""

import serial
import time

class WindSpeedSensor:
    def __init__(self, port='/dev/ttyUSB0', baudrate=4800, address=0x01):
        """
        Initialize the wind speed sensor
        
        Args:
            port: Serial port (e.g., '/dev/ttyUSB0', '/dev/ttyAMA0')
            baudrate: Communication speed (default 4800 from documentation)
            address: Device address (default 0x01)
        """
        self.port = port
        self.baudrate = baudrate
        self.address = address
        self.ser = None
        
    def connect(self):
        """Open serial connection"""
        try:
            self.ser = serial.Serial(
                port=self.port,
                baudrate=self.baudrate,
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                timeout=1
            )
            return True
        except Exception as e:
            return False
    
    def calculate_crc(self, data):
        """Calculate CRC16 for Modbus-RTU"""
        crc = 0xFFFF
        for byte in data:
            crc ^= byte
            for _ in range(8):
                if crc & 0x0001:
                    crc = (crc >> 1) ^ 0xA001
                else:
                    crc >>= 1
        return crc
    
    def read_wind_speed(self):
        """
        Read wind speed from sensor
        Returns wind speed in m/s or None if error
        """
        if not self.ser or not self.ser.is_open:
            return None
        
        # Build query frame
        query = bytearray([
            self.address,  # Address code
            0x03,          # Function code (read register)
            0x00, 0x00,    # Starting address (0x0000 for wind speed)
            0x00, 0x01     # Register length (read 1 register)
        ])
        
        # Calculate and append CRC
        crc = self.calculate_crc(query)
        query.append(crc & 0xFF)        # CRC low byte
        query.append((crc >> 8) & 0xFF) # CRC high byte
        
        try:
            # Clear input buffer
            self.ser.reset_input_buffer()
            
            # Send query
            self.ser.write(query)
            
            # Read response (should be 7 bytes)
            response = self.ser.read(7)
            
            if len(response) != 7:
                return None
            
            # Verify address and function code
            if response[0] != self.address or response[1] != 0x03:
                return None
            
            # Verify CRC
            received_crc = response[5] | (response[6] << 8)
            calculated_crc = self.calculate_crc(response[:5])
            
            if received_crc != calculated_crc:
                return None
            
            # Extract wind speed (bytes 3-4, big-endian)
            wind_speed_raw = (response[3] << 8) | response[4]
            
            # Convert to actual wind speed (value is 10x actual)
            wind_speed = wind_speed_raw / 10.0
            
            return wind_speed
            
        except Exception as e:
            return None
    
    def close(self):
        """Close serial connection"""
        if self.ser and self.ser.is_open:
            self.ser.close()