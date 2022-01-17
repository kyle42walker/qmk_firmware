#pragma once

//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// #define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_TERM 200
// #define TAPPING_FORCE_HOLD
// // #define PERMISSIVE_HOLD

// #define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
// #define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

#define COMBO_COUNT 14
#define COMBO_TERM 40   // Timeout time (ms) for registering combos
#define COMBO_ONLY_FROM_LAYER 0 // Combos are defined for base layer, but still apply to all other layers in the same positions