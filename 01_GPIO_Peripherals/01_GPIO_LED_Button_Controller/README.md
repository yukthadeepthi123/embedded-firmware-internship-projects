# GPIO-Based LED and Button Controller

## Overview
This project demonstrates basic GPIO interfacing using an Arduino Uno. An LED is controlled using a push button connected to a digital input pin.

## Hardware Requirements
- Arduino Uno
- LED
- Current-limiting resistor
- Push button
- Jumper wires

## Pin Connections

| Component | Arduino Uno Pin |
|---|---|
| LED cathode | GND |
| LED anode | Through resistor to D8 |
| Push button terminal 1 | GND |
| Push button terminal 2 | D2 |

## Working Principle
- The LED is configured as an output.
- The push button is configured as an input using `INPUT_PULLUP`.
- When the button is pressed, the input reads LOW and the LED turns ON.
- When the button is released, the input reads HIGH and the LED turns OFF.

## Source Code
See `gpio_led_button_controller.ino` in this folder.

## Tools Used
- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts
- GPIO configuration
- Digital input and output
- Internal pull-up resistor
- Button interfacing
