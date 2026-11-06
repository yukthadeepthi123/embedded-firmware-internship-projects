# UART Serial Data Monitor

## Overview

This project demonstrates UART serial communication using Arduino Uno. It receives text messages from the Serial Monitor, displays the received messages, and maintains a message counter.

## Hardware Requirements

- Arduino Uno
- USB cable
- Computer with Arduino IDE

## Working Principle

- UART communication is initialized at 9600 baud.
- The Arduino continuously checks for incoming serial data.
- Received messages are read until a newline character is detected.
- Leading and trailing whitespace is removed.
- Each valid message increments the message counter.
- The received message and total message count are displayed in the Serial Monitor.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts

- UART serial communication
- Serial.begin()
- Serial.available()
- Serial.readStringUntil()
- Serial.println()
- Baud rate configuration
- String handling
