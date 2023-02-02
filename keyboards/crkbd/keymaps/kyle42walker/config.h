#pragma once

#define MASTER_LEFT             // Hand configuration
#define USE_SERIAL_PD2          // Connection type between boards
#define FORCE_NKRO              // Enable 256-key rollover (default is 6-key)
#define DYNAMIC_KEYMAP_LAYER_COUNT 4    // Number of layers defined on the board

#define COMBO_COUNT 10          // Number of combos defined
#define COMBO_TERM 50           // Timeout time (ms) for registering combos
#define COMBO_ONLY_FROM_LAYER 0 // Combos are defined only for base layer but still apply to all other layers in the same positions

#define TAPPING_TERM 200        // Time (ms) when a tap action becomes a hold action
// #define HOLD_ON_OTHER_KEY_PRESS         // Trigger hold action for mod tap and layer tap keys as soon as a second key is pressed down
// #define IGNORE_MOD_TAP_INTERRUPT        // Decreases the delay to trigger HOLD_ON_OTHER_KEY_PRESS behavior for mod tap keys
#define TAPPING_FORCE_HOLD      // Allows held modifiers to be used shortly after a tap (Default behavior is to repeat the key taps)

// #define NO_DEBUG             // Disable debugging
// #define NO_PRINT             // Disable printing/debugging using hid_listen
// #define NO_ACTION_TAPPING    // Disable tap dance and other tapping features (Disables momentary layer switch MO)
#define NO_ACTION_ONESHOT       // Disable one-shot modifiers
#define NO_ACTION_MACRO         // Disable old style macro handling with MACRO() and action_get_macro
