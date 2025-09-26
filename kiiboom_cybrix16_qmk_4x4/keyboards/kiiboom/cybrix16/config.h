#pragma once
#include "config_common.h"

#define VENDOR_ID  0x5343
#define PRODUCT_ID 0x0080
#define DEVICE_VER 0x0001
#define MANUFACTURER Kiiboom
#define PRODUCT     Cybrix 16

/* 4x4 keys */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define DIODE_DIRECTION COL2ROW

/* Placeholder STM32 pins — change to match your PCB */
#define MATRIX_ROW_PINS { B0, B1, B10, B11 }
#define MATRIX_COL_PINS { A0, A1, A2, A3 }

/* Three encoders (index 0..2) — placeholder pins */
#define ENCODERS_PAD_A { B13, B15, A8 }
#define ENCODERS_PAD_B { B14, B3,  A9 }
#define ENCODER_RESOLUTIONS { 4, 4, 4 }

#define DEBOUNCE 5
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* Bootmagic Lite (optional) */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
