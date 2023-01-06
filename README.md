# TEST VERSION, as I have no BTT SKR Mini E3v3 to test it on. Please leave feedback in the discussion tab. This conversion uses the Stock LCD Display, not a TFT screen.
## UPDATE 1-5-2023: Fixed the X & Y Min Position
1. OLD: #define X_MIN_POS 0  New: #define X_MIN_POS -20
2. OLD: #define Y_MIN_POS 0  New: #define Y_MIN_POS -5
3. Recompiled Firmware, and uploaded new, updated version today. January 5, 2023
4. I had forgotten to set these. Sorry for the oversight.
## Update 1-6-2023: Tuning Z Offset While Printing
1. Changed #define MIN_SOFTWARE_ENDSTOP_Z to //#define MIN_SOFTWARE_ENDSTOP_Z to allow Z to go into negative for offset.
2. Tuning to a (-) Negative number was not allowed until //#define MIN_SOFTWARE_ENDSTOP_Z was commented out
# Ender-2-Pro-BTT-E3v3 with a STM32G0B1RE_btt Platformio.ini
This is an upgrade for the Ender 2 Pro Only. It does require a New Set of Ender 3 Pro Motor Cables to do the conversion with the BTT SKR Mini E3v3 motherboard.
## Specific Firmware Functionality:
 1. Cleaner Main Information Screen.
 2. Quicker Boot Time.
 3. Cleaner and more detailed Menu System.
 4. Cleaner and better labled Menu System.
 5. No automatic timeout and return to main information screen. (Really anoying when you turn away for a second, and it is back on the Main Information Screen, and you have to start again.)
 6. You must manually scroll and click to return to previous menus and to the Main Information Screen.
 7. Power Loss Recovery. (Off by Default, but can be turned on in the Settings Menu.)
 8. Filament Run Out Sensor. (Off by Default, but can be turned on in the Settings Menu if you decide to add a Filament Run Out Sensor.)
 9. LCD Assisted Manual 4 Corner Bed Leveling. (Paper method at 4 corners over bed screws, leveling by raising and lowering with bed adjustment wheels)
 10. (9)Nine Point LCD Assisted Manual Mesh Bed Leveing. (No need for ABL Probe) Paper method, raising and lower the nozzle with the LCD knob at (9) nine points around the bed to create a mesh, just like an ABL Probe, but none of the waiting, wiring, setup, firmware recompiling, and in my opinion, a simpler way to level the bed.
 11. Long File Names Enabled.
 12. Scrolling of Longer File Names Enabled.
 13. Removal of ABS Preheat, since the Ender 2 Pro cannot print ABS.
 14. Single PLA Preheat. Temps are as follows: Hot-End 205c Bed Temp 65c.
 15. Thermal Runaway Protection Enabled.
 16. No ABL Probe Function is available, and there will not be at this time..
## DISCLAIMER: Gorilla Tech Programming Group,LLC takes no responsibility for monetary loss or damages, injury, or death in the process of doing this motherboard conversion. If you do this conversion, you do so at your own risk, and will not hold Gorilla Tech Programming Group,LLC liable for monetary loss or damages, injuries, or death. Proceed at your own risk!
# Sponsorship for this repository: 
##  Cash App, using the cashtag: $The300lbGorilla
