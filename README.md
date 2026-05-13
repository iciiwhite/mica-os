# Mica OS – Feature Phone Operating System

[![License](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/platform-ARM%20Cortex--M3-orange)]()
![Build](https://img.shields.io/badge/build-makefile-green)
[![GitHub repo](https://img.shields.io/badge/GitHub-iciiwhite%2Fmica--os-lightgrey)](https://github.com/iciiwhite/mica-os)

**Mica OS** is a from‑scratch, minimal, real‑time operating system for button‑based feature phones. It is designed for E‑ink displays, physical keyboards, and ultra‑low power consumption. The entire system is written in C and Assembly, and is fully self‑contained.

**Author:** Icii White  
**Repository:** [github.com/iciiwhite/mica-os](https://github.com/iciiwhite/mica-os)

---

## Table of Contents

1. [Features](#features)  
2. [Hardware Requirements](#hardware-requirements)  
3. [Project Structure](#project-structure)  
4. [Prerequisites](#prerequisites)  
5. [Building the Firmware](#building-the-firmware)  
6. [Flashing to Hardware](#flashing-to-hardware)  
7. [First Boot and Usage](#first-boot-and-usage)  
8. [Customisation](#customisation)  
9. [Troubleshooting](#troubleshooting)  
10. [License](#license)

---

## Features

- Full duplex voice calling and SMS over GSM (via external modem)
- Encrypted mesh radio messaging (no cell tower required)
- Built‑in applications: dialer, SMS, camera, FM radio, calculator, torch, file manager, media player, image viewer, notes, settings, weather, fitness tracker, calendar, alarm, voice recorder, stopwatch, world clock, unit converter, and more
- E‑ink display (200×200, 1‑bit) with fast partial refresh
- Capacitive touch slider on physical keypad
- FAT32 file system with SD card support
- USB‑C OTG (external keyboard/mouse)
- Bluetooth file transfer and headset profile
- Ultra‑low power: weeks of standby on a single charge
- Boot time under one second

---

## Hardware Requirements

The reference hardware platform is a custom ARM Cortex‑M3 board with the following components:

| Component          | Specification                                   |
|--------------------|-------------------------------------------------|
| Microcontroller    | STM32F103 or similar (72 MHz, 64 KB RAM, 512 KB Flash) |
| Display            | E‑ink 200×200, SPI interface                   |
| Keypad             | 4×4 matrix with capacitive slider (optional)   |
| Storage            | microSD card (SPI mode)                         |
| Audio              | DAC + amplifier for speaker and microphone     |
| Radio (cellular)   | SIM800 or Quectel M66 (UART)                    |
| Mesh radio         | nRF24L01+ or LoRa module                        |
| FM radio           | RDA5807 or TEA5767 (I2C)                        |
| Camera             | OV7670 (parallel or SPI)                        |
| Sensors            | Accelerometer (MPU6050), light, proximity       |
| Power              | Li‑ion battery with fuel gauge, USB charging    |
| Bootloader         | Custom, stored in first 16 KB of Flash          |

If you are using a different board, adjust the pin definitions in `config/boards/mica_board.h`.

---

## Project Structure

```

mica_phone_os/
├── boot/                     – Bootloader (Assembly)
├── kernel/                   – Core kernel (task, IPC, memory, power, scheduler)
├── drivers/                  – Hardware drivers (display, keypad, SD, USB, audio, etc.)
├── fs/                       – FAT32 and virtual file system
├── gui/                      – Windowing system, widgets, fonts, themes
├── apps/                     – All user applications
├── libs/                     – Codecs, network protocols, math, string, UI toolkit
├── build/                    – Makefiles, linker scripts, configs
├── assets/                   – Images, GIFs, fonts, sounds, themes
├── tests/                    – Unit and integration tests
├── docs/                     – Specifications and API notes
└── config/                   – Board definitions and default settings

```

A detailed file listing is available in the repository under `docs/file_list.txt`.

---

## Prerequisites

Install the following tools on your development machine:

- `arm-none-eabi-gcc` (version 10 or later)
- `arm-none-eabi-ld`
- `arm-none-eabi-objcopy`
- `make`
- `python3` (for asset generation scripts)
- `Pillow` (Python imaging library, `pip install Pillow`)
- `git`

## 0n Ubuntu/Debian:
```bash
sudo apt install gcc-arm-none-eabi binutils-arm-none-eabi make python3-pip
pip3 install Pillow
```

## On macOS:

```bash
brew install arm-none-eabi-gcc make python3
pip3 install Pillow
```

---

## Building the Firmware

1. Clone the repository
   ```bash
   git clone https://github.com/iciiwhite/mica-os.git
   cd mica-os
   ```
2.Compile the firmware
   ```bash
   cd build
   make
   ```
   The output files are mica.elf (debug symbol file) and mica.bin (raw binary to flash).

---

Flashing to Hardware

Step 1 – Choose your flashing method

Programmer Target chip Command example
ST-Link (SWD) STM32 series st-flash write mica.bin 0x8000000
USB DFU STM32 with DFU boot dfu-util -D mica.bin -a 0
Serial (UART) Any with bootloader lpc21isp mica.bin /dev/ttyUSB0 115200
SPI flash tool Dedicated flash chip flashrom -p linux_spi:dev=/dev/spidev0.0 -w mica.bin
SD card (FAT) Boot from SD Copy mica.bin to root of SD, rename to mica.bin

For the reference STM32F103 board using ST‑Link:

```bash
st-flash --reset write build/mica.bin 0x8000000
```

Step 2 – Verify the flash

After flashing, reset the board. The E‑ink display should show the boot logo, then the main menu.

Step 3 – First time configuration

· Connect a GSM antenna and SIM card.
· Insert a FAT32 formatted microSD card.
· The system will automatically mount storage and create default folders (/photos/, /music/, /settings/).

---

First Boot and Usage

· Navigation: Use the physical keypad (rows 1‑4, columns 1‑4).
  · Up (row 1, col 2)  – previous item
  · Down (row 2, col 2) – next item
  · OK  (row 3, col 3) – select
  · Back (row 4, col 1) – go back / power menu
· Making a call: Open the Dialer app, enter the number, press OK.
· Sending an SMS: Open SMS, write message, send to a contact.
· Mesh messaging: Enable mesh radio in Settings → Network → Mesh. Any nearby Mica phone will automatically relay messages.
· Camera: Press the dedicated camera button (keypad row 1, col 1) to capture and save JPEGs to SD card.

All applications are accessible from the main menu (launcher).

---

Customisation

Changing the boot logo

Replace assets/images/boot_logo/logo.raw and logo2.raw with your own 200×200, 1‑bit packed raw images (5000 bytes each). Run prepare_assets.py to convert from PNG.

Adding ringtones

Place .wav files in assets/sounds/ringtones/. They will appear in Settings → Sound → Ringtone.

Modifying the font

Replace assets/fonts/font.bin, 8x16.bin, 12x24.bin with your own bitmap font data. Use generate_fonts.py to create a basic font from a character set.

Changing the theme

Edit assets/themes/default/theme.txt or create a new folder and select it from Settings → Display → Theme.

Adding new applications

1. Create a new subfolder under apps/ with your app’s *.c and *.h.
2. Register the app in apps/launcher/launcher.c by adding its name to the items[] array and a case in the switch.
3. Rebuild the firmware.

---

Troubleshooting

Problem Likely cause and solution
No display after flash Check E‑ink SPI connections and power. Verify eink_init() in drivers/display/eink/eink_driver.c.
Keypad not responding Run keypad_scan() manually in debug build. Confirm row/col pins in mica_board.h.
SD card not mounted Ensure card is FAT32. Check SPI bus and chip select. Use fat32_mount() return value.
GSM module does not register network Antenna connected? SIM inserted? Power cycle the module (see drivers/gsm/gsm.c).
Mesh radio no communication Both devices must be on the same channel and encryption key. Adjust in mesh_proto.c.
Compilation errors – missing headers Run all four Python generation scripts again. Verify folder structure.
Binary too large for flash Reduce features, compile with -Os, or use a microcontroller with more flash.

For detailed debugging, connect a serial console (UART, 115200 baud) – the kernel prints early boot messages.

---

License

Mica OS is released under the GNU General Public License v3.0.
You may use, modify, and distribute the software freely, provided that any derivative work is also open source under the GPLv3.

Executable (binary) images that run on hardware may be sold, but the corresponding source code must be made available to the buyers under the same license.

Full license text is in the [LICENSE file](LICENSE) in the repository.

---

Software by [Icii White](https://iciiwhite.github.io)

Last updated: 2025-05-13
