# Kiiboom Cybrix 16 — QMK Starter (4×4 keys, 3 encoders, VIA + Macros, No RGB)

This matches your hardware: **16 keys in a 4×4 grid** + **three encoders**.
- VIA + Macros enabled
- RGB disabled for reliability/size
- VID/PID: 0x5343 / 0x0080

> You may need to change the STM32 **pin names** in `config.h` to match the PCB.
> After first success, you can add RGB later if you want.

## Build
1) Copy `keyboards/kiiboom/cybrix16` into your QMK checkout.
2) Run: `qmk compile -kb kiiboom/cybrix16 -km via`
3) Flash with QMK Toolbox.
4) Open VIA and (if needed) load the provided VIA JSON (4x4, no RGB). Macros tab should appear.

## If some keys/encoders don't work
Update these in `config.h` to your real pins:
- `MATRIX_ROW_PINS`
- `MATRIX_COL_PINS`
- `ENCODERS_PAD_A`, `ENCODERS_PAD_B`
