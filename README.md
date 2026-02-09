
```markdown
# Servo Motor Example (Uno R4 WiFi)

Overview
- Small Arduino/PlatformIO project that sweeps a servo from 0° to 180° and back while printing the position to Serial.
- Target board: `uno_r4_wifi` (Renesas RA / Arduino framework).

Files
- `src/main.cpp` — example sketch: attaches a Servo to pin 9, sweeps positions and prints them to Serial (9600 baud).
- `platformio.ini` — project configuration and library dependencies.
- `README.md` — this file.

Hardware
- Board: Arduino Uno R4 WiFi (or compatible).
- Servo: standard hobby servo (signal, Vcc, GND).
- Wiring:
  - Servo signal to digital pin 9 (`D9`).
  - Servo Vcc to 5V (or external 5V supply if servo draws significant current).
  - Connect all grounds together (board GND and servo supply GND).
- Power note: use an external power supply for the servo if it draws more than the board can safely provide.

Behavior
- The sketch moves the servo from 0° to 180° in 1° steps, then back from 180° to 0°.
- Each step waits ~15 ms and prints the current position to Serial at 9600 baud.

Dependencies
- Declared in `platformio.ini`:
  - `arduino-libraries/Servo@^1.3.0`
  - `adafruit/DHT sensor library@^1.4.6` (present but not used by this example)
  - `adafruit/Adafruit Unified Sensor@^1.1.15` (present but not used)
- Platform: `renesas-ra`, framework: `arduino`.

Build & Upload (Windows)
- Using PlatformIO CLI:
  - Build and upload: `pio run -e uno_r4_wifi -t upload`
  - Open serial monitor: `pio device monitor -p COM3 -b 9600`
- `platformio.ini` in this project sets `upload_port = COM3` and `monitor_speed = 9600` by default. Adjust the COM port as needed.

Troubleshooting
- No movement: verify signal pin, power, and common ground.
- Erratic movement or resets: use a separate power supply for the servo and ensure grounds are connected.
- Serial output not visible: confirm baud rate (9600) and COM port in your serial monitor.

License
- Default: MIT (replace with your preferred license if required).

Minimal example behavior reference
- See `src/main.cpp` for the servo sweep loop and Serial prints.

```
