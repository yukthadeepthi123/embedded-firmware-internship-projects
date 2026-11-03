# Non-Blocking LED Blinker

## Overview
This project demonstrates non-blocking LED control using an Arduino Uno. The LED blinking interval is controlled using the `millis()` function instead of the `delay()` function.

## Hardware Requirements
- Arduino Uno
- LED
- Current-limiting resistor
- Jumper wires

## Pin Connections

| Component | Arduino Uno |
|---|---|
| LED anode | Digital pin 8 through resistor |
| LED cathode | GND |

## Working Principle
- Configures digital pin 8 as an output.
- Uses `millis()` to track elapsed time.
- Toggles the LED when the specified interval is reached.
- Avoids blocking program execution with `delay()`.

## Source Code
See `non_blocking_led_blinker.ino` in this folder.

## Tools Used
- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts
- GPIO programming
- Non-blocking programming
- `millis()` function
- Time-based event handling
