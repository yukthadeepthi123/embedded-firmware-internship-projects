# UART Command-Based LED Controller

## Overview

This project demonstrates UART-based command communication using Arduino Uno. It receives commands through the Serial Monitor and controls an LED based on the received command.

## Hardware Requirements

- Arduino Uno
- LED
- 220Ω resistor
- Jumper wires
- USB cable

## Pin Connections

| Component | Arduino Uno Pin |
|---|---|
| LED | D8 (through 220Ω resistor) |
| LED GND | GND |

## Supported Commands

| Command | Function |
|---|---|
| ON | Turns the LED ON |
| OFF | Turns the LED OFF |
| STATUS | Displays the current LED status |

## Working Principle

- UART communication is initialized at 9600 baud.
- Commands are received through the Serial Monitor.
- Incoming characters are collected in a command buffer.
- Commands are processed when a newline or carriage return is received.
- The command is converted to uppercase for case-insensitive processing.
- The LED is controlled according to the received command.
- The LED status or error message is displayed through Serial Monitor.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts

- UART communication
- Serial data reception
- Command parsing
- String handling
- GPIO output control
- Command validation
