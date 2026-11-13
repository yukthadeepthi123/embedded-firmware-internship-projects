# Integrated UART + SPI + I2C Monitoring System

## Overview
An ESP32-based embedded monitoring system integrating UART communication, I2C sensor interfacing, and SPI-driven output control.

## Hardware Components
- ESP32 DevKit V1
- MPU6050 Accelerometer and Gyroscope
- 74HC595 Shift Register
- LED
- 220Ω Resistor
- Breadboard and jumper wires

## Communication Interfaces

### UART
- Serial command interface at 115200 baud
- PING, STATUS, SENSOR, LED ON, LED OFF and HELP commands

### I2C
- MPU6050 interfacing at address 0x68
- Reads accelerometer, gyroscope and temperature data

### SPI
- ESP32 SPI MOSI and SCLK control a 74HC595 shift register
- GPIO latch control updates the LED output

## Software and Tools
- Embedded C/C++
- Arduino IDE
- ESP32
- Wokwi Simulator

## Testing and Results
The integrated system was successfully tested in Wokwi simulation.

- UART command responses verified
- MPU6050 sensor data successfully read
- SPI-driven LED ON/OFF control verified

## Project Status
Successfully implemented and tested in Wokwi simulation.

Physical hardware validation of the integrated system is pending.
