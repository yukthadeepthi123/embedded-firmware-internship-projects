# Push Button with Software Debouncing

## Overview

This project demonstrates software debouncing of a push button using Arduino Uno. It detects valid button presses and maintains a button press count.

## Hardware Requirements

- Arduino Uno
- Push button
- Jumper wires

## Pin Connections

| Component | Arduino Uno Pin |
|---|---|
| Push button terminal 1 | GND |
| Push button terminal 2 | D2 |

## Working Principle

- The push button is configured using INPUT_PULLUP.
- The program monitors changes in the button input.
- A 50 ms debounce interval filters out rapid electrical fluctuations.
- Each valid button press increments the counter.
- The count is displayed through the Serial Monitor.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts

- GPIO digital input
- Internal pull-up resistor
- Software debouncing
- millis() timing
- Event counting
- Serial communication
