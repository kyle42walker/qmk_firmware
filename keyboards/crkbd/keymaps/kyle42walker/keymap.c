#include QMK_KEYBOARD_H

// // Left-hand home row mods
// #define HOME_A LGUI_T(KC_A)
// #define HOME_R LALT_T(KC_R)
// #define HOME_S LSFT_T(KC_S)
// #define HOME_T LCTL_T(KC_T)

// // Right-hand home row mods
// #define HOME_N LCTL_T(KC_N)
// #define HOME_E LSFT_T(KC_E)
// #define HOME_I LALT_T(KC_I)
// #define HOME_O LGUI_T(KC_O)

// // Mod Tap
// #define SPC_CTL LCTL_T(KC_SPC)
// #define DEL_MEH MEH_T(KC_DEL)

// // Shortcuts
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

// #define APP1 LGUI(KC_1)
// #define APP2 LGUI(KC_2)
// #define APP3 LGUI(KC_3)
// #define APP4 LGUI(KC_4)
// #define APP5 LGUI(KC_5)
// #define APP6 LGUI(KC_6)

// #define T_BACK LALT(KC_LEFT)
// #define T_FRWD LALT(KC_RGHT)
// #define T_LEFT LCTL(LSFT(KC_TAB))
// #define T_RGHT LCTL(KC_TAB)
// #define T_EXIT LCTL(KC_W)
// #define T_NEW LCTL(KC_T)
// #define W_NEW LCTL(KC_N)
// #define W_EXIT LALT(KC_F4)
// #define WI_NEW LCTL(LSFT(KC_N))
// #define ALT_TAB LALT(KC_TAB)

enum combos {
  WF_ALT,           // W + F        -> ALT
  UY_ALT,           // U + Y        -> ALT
  XC_CTL,           // X + C        -> CTL
  C_D_CTL,          // comma + dot  -> CTL
  ZX_GUI,           // Z + X        -> GUI
  D_S_GUI,          // dot + slash  -> GUI
  QW_ESC,           // Q + F        -> ESC
  Y_QT_CP,          // Y + '        -> CAPS
  T_S_TAB,          // T + space    -> TAB
  N_B_ENT,          // N + bkspc    -> ENTER
  FP_PAR,           // F + P        -> (
  CD_BRC,           // C + D        -> [
  LU_CBR,           // L + U        -> {
  H_C_LT,           // H + comma    -> <
};

const uint16_t PROGMEM wf_combo[]       = {KC_W, KC_F, COMBO_END};      // ALT
const uint16_t PROGMEM uy_combo[]       = {KC_U, KC_Y, COMBO_END};      // ALT
const uint16_t PROGMEM xc_combo[]       = {KC_X, KC_C, COMBO_END};      // CTL
const uint16_t PROGMEM comm_dot_combo[] = {KC_COMM, KC_DOT, COMBO_END}; // CTL
const uint16_t PROGMEM zx_combo[]       = {KC_Z, KC_X, COMBO_END};      // GUI
const uint16_t PROGMEM dot_slsh_combo[] = {KC_DOT, KC_SLSH, COMBO_END}; // GUI
const uint16_t PROGMEM qw_combo[]       = {KC_Q, KC_W, COMBO_END};      // ESC
const uint16_t PROGMEM y_quot_combo[]   = {KC_Y, KC_QUOT, COMBO_END};   // CAPS
const uint16_t PROGMEM t_spc_combo[]    = {KC_T, KC_SPC, COMBO_END};    // TAB
const uint16_t PROGMEM n_bspc_combo[]   = {KC_N, KC_BSPC, COMBO_END};   // ENTER
const uint16_t PROGMEM fp_combo[]       = {KC_F, KC_P, COMBO_END};      // (
const uint16_t PROGMEM cd_combo[]       = {KC_C, KC_D, COMBO_END};      // [
const uint16_t PROGMEM lu_combo[]       = {KC_L, KC_U, COMBO_END};      // {
const uint16_t PROGMEM h_comm_combo[]   = {KC_H, KC_COMM, COMBO_END};   // <

combo_t key_combos[COMBO_COUNT] = {
  [WF_ALT]  = COMBO(wf_combo, KC_LALT),
  [UY_ALT]  = COMBO(uy_combo, KC_RALT),
  [XC_CTL]  = COMBO(xc_combo, KC_LCTL),
  [C_D_CTL] = COMBO(comm_dot_combo, KC_RCTL),
  [ZX_GUI]  = COMBO(zx_combo, KC_LGUI),
  [D_S_GUI] = COMBO(dot_slsh_combo, KC_RGUI),
  [QW_ESC]  = COMBO(qw_combo, KC_ESC),
  [Y_QT_CP] = COMBO(y_quot_combo, KC_CAPS),
  [T_S_TAB] = COMBO(t_spc_combo, KC_TAB),
  [N_B_ENT] = COMBO(n_bspc_combo, KC_ENT),
  [FP_PAR]  = COMBO(fp_combo, KC_LPRN),
  [CD_BRC]  = COMBO(cd_combo, KC_LBRC),
  [LU_CBR]  = COMBO(lu_combo, KC_LCBR),
  [H_C_LT]  = COMBO(h_comm_combo, KC_LT),
};

enum layer_number {
  _COLEMAK = 0,
  _LEFT,
  _RIGHT,
  _BOTH
};

#define LEFT MO(_LEFT)
#define RIGHT MO(_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default Layer - Colemak-DHm
  [_COLEMAK] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, KC_CAPS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             LEFT, KC_LSFT,  KC_SPC,    KC_BSPC, KC_LSFT,   RIGHT
                                      //`--------------------------'  `--------------------------'
  ),

  // lNav / Num
  [_LEFT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_PAUS, KC_HOME,   KC_UP,  KC_END, KC_PGUP,                      KC_SLSH,    KC_7,    KC_8,    KC_9, KC_MINS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                      KC_ASTR,    KC_4,    KC_5,    KC_6, KC_PLUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_SLCK, KC_MUTE, KC_VOLD, KC_VOLU,  KC_INS,                         KC_0,    KC_1,    KC_2,    KC_3,  KC_DOT, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // Symbol / rNav
  [_RIGHT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR,    COPY,   PASTE, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_PLUS,  KC_EQL, KC_UNDS, KC_MINS, KC_SCLN,                         UNDO, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_GRV, KC_TILD, KC_PIPE, KC_BSLS, KC_COLN,                         REDO, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // RGB / F-keys / Braces
  [_BOTH] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,  KC_F11,                      KC_BSLS, KC_LPRN, KC_LCBR, KC_LBRC,   KC_LT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,  KC_F12,                      KC_PIPE, KC_RPRN, KC_RCBR, KC_RBRC,   KC_GT, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _LEFT, _RIGHT, _BOTH);
    return state;
}