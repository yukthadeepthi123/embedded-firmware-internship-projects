# I2C MPU6050 Sensor Reader

## Overview

This project demonstrates I2C communication between Arduino Uno and the MPU6050 sensor. It reads accelerometer, gyroscope, and temperature data and displays the sensor readings through the Serial Monitor.

## Hardware Requirements

- Arduino Uno
- MPU6050 sensor module
- Jumper wires
- USB cable

## Working Principle

- The Wire library initializes I2C communication.
- The MPU6050 sensor is initialized using the Adafruit MPU6050 library.
- The accelerometer range is configured to ±8g.
- The gyroscope range is configured to ±500 degrees per second.
- The sensor measures acceleration, angular velocity, and temperature.
- The readings are displayed through the Serial Monitor every 500 milliseconds.

## Tools and Libraries Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator
- Wire Library
- Adafruit MPU6050 Library
- Adafruit Unified Sensor Library

## Key Concepts

- I2C sensor interfacing
- MPU6050 accelerometer
- Gyroscope measurements
- Temperature monitoring
- Sensor initialization
- Real-time serial data monitoring
