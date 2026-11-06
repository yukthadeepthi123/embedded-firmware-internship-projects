# I2C Device Scanner

## Overview

This project demonstrates I2C communication using Arduino Uno. It scans the I2C bus to detect connected devices and displays their addresses through the Serial Monitor.

## Hardware Requirements

- Arduino Uno
- I2C-compatible device (for example, an LCD module)
- Jumper wires

## Pin Connections

| Arduino Uno | I2C Device |
|---|---|
| A4 | SDA |
| A5 | SCL |
| 5V | VCC |
| GND | GND |

## Working Principle

- The Wire library is initialized to enable I2C communication.
- The program scans I2C addresses from 1 to 126.
- It checks each address for an acknowledgement.
- Detected device addresses are displayed in hexadecimal format.
- The total number of detected devices is displayed after scanning.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts

- I2C communication
- SDA and SCL signals
- I2C device addressing
- Acknowledgement detection
- Wire library
- Serial Monitor debugging
