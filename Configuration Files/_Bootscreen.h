// Build: BTTE3v3 For The Ender 2 Pro
// Built Date and Time:1-4-2023
// Gorilla Tech Programming Group, LLC
// Look us up on GitHub.com here: https://github.com/GTPGllc
// This conversion requires a BTT-SKR-Mini-E3v3 Motherboard
// You can purchase one at this link: https://www.amazon.com/BIGTREETECH-Upgraded-Motherboard-Integrated-Compatible/dp/B09LH727MT
// DISCLAIMER: Gorilla Tech Programming Group, LLC is NOT paid by Amazon.com for any links it provides in any of it's listings for this Motherboard.
// This conversion requires the purchase of stepper motor cable adapters.  $14.99 + Shipping & Handling
// They can be found at this link: 
// https://www.th3dstudio.com/product/ender-2-pro-stepper-motor-adapter-cable-4-pack/
// or a set of Ender 3 Pro Motor Cables Link: https://www.amazon.com/gp/product/B07SYJQFKR
// DISCLAIMER: Gorilla Tech Programming Group, LLC is NOT paid by TH3DStudios.com for any links it provides in any of it's listings for this adapter set.
//=======================================================================================================================================================

/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details..
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/Ender 2 Pro/BigTreeTech SKR Mini E3 3.0"

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH 128
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[] PROGMEM = {
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011111,B11111111,B10011100,B00000000,B01111000,B00000000,B11111111,B11111100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011111,B11111111,B10011100,B00000000,B01111000,B00000000,B11111111,B11111100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011111,B11111111,B10011100,B00000000,B01111000,B00000000,B11111111,B11111100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11111111,B11111111,B10011111,B11110000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11111111,B11111111,B10011111,B11110000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011000,B00000000,B00011100,B00000000,B01111000,B00000000,B11100000,B00001100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011111,B11111111,B10011111,B11111110,B01111111,B11111100,B11111111,B11111100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B11110000,B00000011,B10011111,B11111111,B10011111,B11111110,B01111111,B11111100,B11111111,B11111100,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000011,B11001111,B00111000,B11111001,B00000100,B11111000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001001,B00100100,B00100001,B10000100,B10001000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001001,B00100100,B00100001,B11000100,B10000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001001,B00100100,B00100001,B01000100,B10000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001001,B00100100,B00100001,B01100100,B10000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001111,B00100100,B00100001,B00100100,B10011000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001001,B00100100,B00100001,B00100100,B10001000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B00000010,B01001001,B00100100,B00100001,B00110100,B10001000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000001,B11110011,B11001001,B00111000,B11111001,B00011100,B11111001,B00100101,B01010101,B01000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111
};
