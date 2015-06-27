# Arduino I/O Test Program

This program is dedicated to test the I/Os on Arduino board. It generates square waveform on pin 2 to 13 and pin A0 to A5.

| Pin # | Pin Name | Freq.  |
| ----- | -------- | ------ |
| 0     | RxD      | 0      |
| 1     | TxD      | 0      |
| 2     | -        | 20 Hz  |
| 3     | -        | 30 Hz  |
| 4     | -        | 40 Hz  |
| 5     | -        | 50 Hz  |
| 6     | -        | 60 Hz  |
| 7     | -        | 70 Hz  |
| 8     | -        | 80 Hz  |
| 9     | -        | 90 Hz  |
| 10    | -        | 100 Hz |
| 11    | MOSI     | 110 Hz |
| 12    | MISO     | 120 Hz |
| 13    | SCK      | 130 Hz |
| 14    | A0       | 140 Hz |
| 15    | A1       | 150 Hz |
| 16    | A2       | 160 Hz |
| 17    | A3       | 170 Hz |
| 18    | A4/SDA   | 180 Hz |
| 19    | A5/SCL   | 190 Hz |

The frequency accuracy of a waveform is about -0.5% to +1%. The duty cycle of the waveform is 50%. The amplitude of the waveform is 5V.

No waveform is generated from pin 0 and 1. Pin 0 and 1 is running a test called *serial echo*. Any character sent to pin 0 is embraced by a pair of `[]` and feed to pin 1 (e.g. send a `1` via the serial will receive a `[1]`). The baudrate of the serial port is 115200.