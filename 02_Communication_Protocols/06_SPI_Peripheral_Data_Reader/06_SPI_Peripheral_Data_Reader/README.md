# SPI Peripheral Data Reader (74HC165)

## Overview

This project demonstrates reading parallel input data from a 74HC165 8-bit shift register using Arduino Uno. The parallel input states are loaded into the shift register and read serially by the Arduino.

## Hardware Requirements

- Arduino Uno
- 74HC165 8-bit parallel-in serial-out shift register
- Jumper wires

## Pin Connections

| 74HC165 Signal | Arduino Uno Pin |
|---|---|
| PL (Parallel Load) | D10 |
| Q7 (Serial Output) | D12 |
| CP (Clock) | D13 |
| SR (Serial Input) | 5V |

**Note:** The 74HC165 VCC and GND power connections must also be connected correctly before operating the circuit.

## Working Principle

- The parallel load pin is pulled LOW to load the input states.
- The load pin is returned HIGH.
- The Arduino reads eight bits serially using `shiftIn()`.
- Data is read most-significant bit first.
- The received byte is displayed in binary and hexadecimal formats.
- The reading is repeated every second.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator

## Key Concepts

- SPI-related serial data transfer
- Parallel-In Serial-Out (PISO)
- 74HC165 shift register
- Clock signal
- Parallel data loading
- Serial data reading
- Binary and hexadecimal representation
