# Potentiometer-Based ADC Monitor

## Overview
This project demonstrates analog-to-digital conversion (ADC) using an Arduino Uno and a potentiometer. It reads an analog input and converts the ADC reading into an estimated voltage.

## Hardware Requirements
- Arduino Uno
- Potentiometer
- Jumper wires

## Pin Connections

| Potentiometer | Arduino Uno |
|---|---|
| VCC | 5V |
| SIG | A0 |
| GND | GND |

## Working Principle
- Reads the potentiometer's analog signal using `analogRead(A0)`.
- Converts the 10-bit ADC reading into an estimated voltage.
- Displays the ADC value and voltage through the Serial Monitor.
- Updates the readings every 500 milliseconds.

## ADC Configuration
- ADC resolution: 10-bit
- ADC range: 0–1023
- Reference voltage assumed by the calculation: 5V

## Source Code
See `potentiometer_adc_monitor.ino` in this folder.

## Tools Used
- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts
- Analog input
- ADC conversion
- Voltage calculation
- Serial communication
