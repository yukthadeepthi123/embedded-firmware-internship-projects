# Interrupt-Based Event Counter

## Overview

This project demonstrates external interrupt handling using Arduino Uno. A push button generates interrupt events, and the program counts valid button presses.

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
- An external interrupt is attached to digital pin D2.
- The FALLING edge triggers the interrupt service routine.
- A 50 ms debounce interval helps filter unwanted repeated triggers.
- The event count is displayed through the Serial Monitor.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts

- External interrupts
- Interrupt Service Routine (ISR)
- FALLING edge detection
- Volatile variables
- Software debouncing
- Serial communication
