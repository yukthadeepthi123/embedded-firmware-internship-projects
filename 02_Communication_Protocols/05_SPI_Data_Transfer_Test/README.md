# SPI Data Transfer Test

## Overview

This project demonstrates SPI (Serial Peripheral Interface) communication using Arduino Uno. It performs an SPI loopback test by transmitting a byte and checking whether the same byte is received.

## Hardware Requirements

- Arduino Uno
- Jumper wires

## Pin Connections

| Arduino Uno Pin | Connection |
|---|---|
| D10 (SS/CS) | Chip Select |
| D11 (MOSI) | Connected to D12 (MISO) |
| D12 (MISO) | Connected to D11 (MOSI) |
| D13 (SCK) | SPI Clock |

## Working Principle

- SPI communication is initialized using the SPI library.
- SPI settings are configured for 1 MHz, MSB first, and SPI Mode 0.
- Chip Select is pulled LOW to begin communication.
- The Arduino transmits the test byte 0x55.
- The received byte is compared with the transmitted byte.
- A PASS or FAIL message is displayed through the Serial Monitor.

## Tools Used

- Arduino Uno
- Arduino IDE
- Wokwi Simulator
- SPI Library

## Key Concepts

- SPI communication
- MOSI, MISO, SCK and SS signals
- SPI loopback testing
- SPI clock configuration
- Data transmission and reception
