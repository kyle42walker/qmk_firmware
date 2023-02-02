#include QMK_KEYBOARD_H
// #include "g/keymap_combo.h"

enum custom_keycodes {
  PRNS = SAFE_RANGE,                // ()
  CBRS,                             // {}
  BRCS,                             // []
  LTGT,                             // <>
  MIC_OFF,                          // SLCK + PAUS
};

enum combos {
  WF_ALT,           // W + F        -> ALT
  UY_ALT,           // U + Y        -> ALT
  ZX_GUI,           // Z + X        -> GUI
  D_S_GUI,          // dot + slsh   -> GUI
  XC_SFT,           // X + C        -> SFT
  C_D_CTL,          // comm + dot   -> CTL

  QW_ESC,           // Q + F        -> ESC
  // E_B_ESC,          // E + bspc     -> ESC
  Y_QT_CP,          // Y + quot     -> CAPS
  // L_BS_CP,          // L + bspc     -> CAPS
  // T_S_TAB,          // T + spc      -> TAB
  TG_TAB,           // T + G        -> TAB
  // N_B_ENT,          // N + bspc     -> ENT
  MN_ENT,           // M + N        -> ENT
  // S_B_DEL,          // spc + bspc   -> DEL
  H_B_DEL,          // H + bspc     -> DEL

  // FP_LPRN,          // F + P        -> (
  // PB_RPRN,          // P + B        -> )
  // FB_PRNS,          // F + B        -> ()
  // LU_LCBR,          // L + U        -> {
  // JL_RCBR,          // J + L        -> }
  // JU_CBRS,          // J + U        -> {}
  // CD_LBRC,          // C + D        -> [
  // DV_RBRC,          // D + V        -> ]
  // CV_BRCS,          // C + V        -> []
  // H_C_LT,           // H + comm     -> <
  // KH_GT,            // K + H        -> >
  // K_C_ANG,          // K + comm     -> <>
  // PB_PRNS,          // P + B        -> ()
  // JL_CBRS,          // J + L        -> {}
  // DV_BRCS,          // D + V        -> []
  // KH_LTGT,          // K + H        -> <>

  // I_B_COL,          // I + bspc     -> COLN
  // O_B_SCL,          // O + bspc     -> SCLN
  // S_B_BSL,          // slsh + bspc  -> BSLS
  // D_B_PIP,          // dot + bspc   -> PIPE
};

const uint16_t PROGMEM wf_combo[]       = {KC_W, KC_F, COMBO_END};      // ALT
const uint16_t PROGMEM uy_combo[]       = {KC_U, KC_Y, COMBO_END};      // ALT
const uint16_t PROGMEM zx_combo[]       = {KC_Z, KC_X, COMBO_END};      // GUI
const uint16_t PROGMEM dot_slsh_combo[] = {KC_DOT, KC_SLSH, COMBO_END}; // GUI
const uint16_t PROGMEM xc_combo[]       = {KC_X, KC_C, COMBO_END};      // SFT
const uint16_t PROGMEM comm_dot_combo[] = {KC_COMM, KC_DOT, COMBO_END}; // CTL

const uint16_t PROGMEM qw_combo[]       = {KC_Q, KC_W, COMBO_END};      // ESC
// const uint16_t PROGMEM e_bspc_combo[]   = {KC_E, KC_BSPC, COMBO_END};   // ESC
const uint16_t PROGMEM y_quot_combo[]   = {KC_Y, KC_QUOT, COMBO_END};   // CAPS
// const uint16_t PROGMEM l_bspc_combo[]   = {KC_L, KC_BSPC, COMBO_END};   // CAPS
// const uint16_t PROGMEM t_spc_combo[]    = {KC_T, KC_SPC, COMBO_END};    // TAB
const uint16_t PROGMEM tg_combo[]       = {KC_T, KC_G, COMBO_END};      // TAB
// const uint16_t PROGMEM n_bspc_combo[]   = {KC_N, KC_BSPC, COMBO_END};   // ENT
const uint16_t PROGMEM mn_combo[]       = {KC_M, KC_N, COMBO_END};      // ENT
// const uint16_t PROGMEM spc_bspc_combo[] = {KC_SPC, KC_BSPC, COMBO_END}; // DEL
// const uint16_t PROGMEM h_bspc_combo[]   = {KC_H, KC_BSPC, COMBO_END};   // DEL

// const uint16_t PROGMEM fp_combo[]       = {KC_F, KC_P, COMBO_END};      // (
// const uint16_t PROGMEM pb_combo[]       = {KC_P, KC_B, COMBO_END};      // )
// const uint16_t PROGMEM fb_combo[]       = {KC_F, KC_B, COMBO_END};      // ()
// const uint16_t PROGMEM lu_combo[]       = {KC_L, KC_U, COMBO_END};      // {
// const uint16_t PROGMEM jl_combo[]       = {KC_J, KC_L, COMBO_END};      // }
// const uint16_t PROGMEM ju_combo[]       = {KC_J, KC_U, COMBO_END};      // {}
// const uint16_t PROGMEM cd_combo[]       = {KC_C, KC_D, COMBO_END};      // [
// const uint16_t PROGMEM dv_combo[]       = {KC_D, KC_V, COMBO_END};      // ]
// const uint16_t PROGMEM cv_combo[]       = {KC_C, KC_V, COMBO_END};      // []
// const uint16_t PROGMEM h_comm_combo[]   = {KC_H, KC_COMM, COMBO_END};   // <
// const uint16_t PROGMEM kh_combo[]       = {KC_K, KC_H, COMBO_END};      // >
// const uint16_t PROGMEM k_comm_combo[]   = {KC_K, KC_COMM, COMBO_END};   // <>
// const uint16_t PROGMEM pb_combo[]       = {KC_P, KC_B, COMBO_END};      // ()
// const uint16_t PROGMEM jl_combo[]       = {KC_J, KC_L, COMBO_END};      // {}
// const uint16_t PROGMEM dv_combo[]       = {KC_D, KC_V, COMBO_END};      // []
// const uint16_t PROGMEM kh_combo[]       = {KC_K, KC_H, COMBO_END};      // <>

// const uint16_t PROGMEM i_bspc_combo[]   = {KC_I, KC_BSPC, COMBO_END};   // :
// const uint16_t PROGMEM o_bspc_combo[]   = {KC_O, KC_BSPC, COMBO_END};   // ;
// const uint16_t PROGMEM slsh_bspc_combo[]= {KC_SLSH, KC_BSPC, COMBO_END};// BSLS
// const uint16_t PROGMEM dot_bspc_combo[] = {KC_DOT, KC_BSPC, COMBO_END}; // PIPE

combo_t key_combos[COMBO_COUNT] = {
  [WF_ALT]  = COMBO(wf_combo, KC_LALT),
  [UY_ALT]  = COMBO(uy_combo, KC_RALT),
  [ZX_GUI]  = COMBO(zx_combo, KC_LGUI),
  [D_S_GUI] = COMBO(dot_slsh_combo, KC_RGUI),
  [XC_SFT]  = COMBO(xc_combo, KC_LSFT),
  [C_D_CTL] = COMBO(comm_dot_combo, KC_RCTL),

  [QW_ESC]  = COMBO(qw_combo, KC_ESC),
  // [E_B_ESC] = COMBO(e_bspc_combo, KC_ESC),
  [Y_QT_CP] = COMBO(y_quot_combo, KC_CAPS),
  // [L_BS_CP] = COMBO(l_bspc_combo, KC_CAPS),
  // [T_S_TAB] = COMBO(t_spc_combo, KC_TAB),
  [TG_TAB]  = COMBO(tg_combo, KC_TAB),
  // [N_B_ENT] = COMBO(n_bspc_combo, KC_ENT),
  [MN_ENT]  = COMBO(mn_combo, KC_ENT),
  // [S_B_DEL] = COMBO(spc_bspc_combo, KC_DEL),
  // [H_B_DEL] = COMBO(h_bspc_combo, KC_DEL),

  // [FP_LPRN] = COMBO(fp_combo, KC_LPRN),
  // [PB_RPRN] = COMBO(pb_combo, KC_RPRN),
  // [FB_PRNS] = COMBO(fb_combo, PRNS),
  // [LU_LCBR] = COMBO(lu_combo, KC_LCBR),
  // [JL_RCBR] = COMBO(jl_combo, KC_RCBR),
  // [JU_CBRS] = COMBO(ju_combo, CBRS),
  // [CD_LBRC] = COMBO(cd_combo, KC_LBRC),
  // [DV_RBRC] = COMBO(dv_combo, KC_RBRC),
  // [CV_BRCS] = COMBO(cv_combo, BRCS),
  // [H_C_LT]  = COMBO(h_comm_combo, KC_LT),
  // [KH_GT]   = COMBO(kh_combo, KC_GT),
  // [K_C_ANG] = COMBO(k_comm_combo, LTGT),
  // [PB_PRNS] = COMBO(pb_combo, PRNS),
  // [JL_CBRS] = COMBO(jl_combo, CBRS),
  // [DV_BRCS] = COMBO(dv_combo, BRCS),
  // [KH_LTGT] = COMBO(kh_combo, LTGT),
    

  // [I_B_COL] = COMBO(i_bspc_combo, KC_COLN),
  // [O_B_SCL] = COMBO(o_bspc_combo, KC_SCLN),
  // [S_B_BSL] = COMBO(slsh_bspc_combo, KC_BSLS),
  // [D_B_PIP] = COMBO(dot_bspc_combo, KC_PIPE),
};

enum layer_number {
  _COLEMAK = 0,
  _LEFT,
  _RIGHT,
  _BOTH
};

// #define L_ESC LT(_LEFT, KC_ESC)
// #define R_DEL LT(_RIGHT, KC_DEL)
// #define CTL_TAB MT(MOD_LCTL, KC_TAB)
// #define SFT_ENT MT(MOD_LSFT, KC_ENT)

#define L_SPC LT(_LEFT, KC_SPC)
#define R_BSPC LT(_RIGHT, KC_BSPC)
#define CTL_TAB MT(MOD_LCTL, KC_TAB)
#define SFT_DEL MT(MOD_LSFT, KC_DEL)

/* 6th columns
 KC_ESC  ...  KC_CAPS
 KC_TAB  ...   KC_ENT
KC_LCTL  ...   KC_DEL
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default Layer - Colemak-DHm
  [_COLEMAK] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, CTL_TAB,   L_SPC,     R_BSPC, SFT_DEL, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // braces / numPad
  [_LEFT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,  KC_INS, KC_PAUS, KC_SLCK, KC_PSCR,  KC_ESC,                      KC_SLSH,    KC_7,    KC_8,    KC_9, KC_MINS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_LT, KC_LBRC, KC_LCBR, KC_LPRN, KC_BSPC,                      KC_ASTR,    KC_4,    KC_5,    KC_6, KC_PLUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_GT, KC_RBRC, KC_RCBR, KC_RPRN,  KC_DEL,                         KC_0,    KC_1,    KC_2,    KC_3,  KC_DOT, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // symbol / rNav
  [_RIGHT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_MUTE, MIC_OFF, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_PLUS,  KC_EQL, KC_UNDS, KC_MINS, KC_SCLN,                      KC_VOLU, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_GRV, KC_TILD, KC_PIPE, KC_BSLS, KC_COLN,                      KC_VOLD, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // fKeys / numRow / braces
  [_BOTH] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_LT, KC_LBRC, KC_LCBR, KC_LPRN,  KC_F11,                       KC_F12, KC_RPRN, KC_RCBR, KC_RBRC,   KC_GT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

// Pressing L_ESC and R_DEL together enters BOTH layer
layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _LEFT, _RIGHT, _BOTH);
    return state;
}

// Define custom keycode behavior
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // ()
    case PRNS:
      if (record->event.pressed) {
        // When pressed
        SEND_STRING("()"SS_TAP(X_LEFT));
      } else {
        // When released
      }
      return false; // Skip all further processing of this key
    
    // {}
    case CBRS:
      if (record->event.pressed) {
        // When pressed
        SEND_STRING("{}"SS_TAP(X_LEFT));
      } else {
        // When released
      }
      return false; // Skip all further processing of this key
    
    // []
    case BRCS:
      if (record->event.pressed) {
        // When pressed
        SEND_STRING("[]"SS_TAP(X_LEFT));
      } else {
        // When released
      }
      return false; // Skip all further processing of this key
    
    // <>
    case LTGT:
      if (record->event.pressed) {
        // When pressed
        SEND_STRING("<>"SS_TAP(X_LEFT));
      } else {
        // When released
      }
      return false; // Skip all further processing of this key
    
    // Keybind to mute microphone in discord
    case MIC_OFF:
      if (record->event.pressed) {
        // When pressed
        SEND_STRING(SS_DOWN(X_SLCK) SS_DOWN(X_PAUS) SS_UP(X_SLCK) SS_UP(X_PAUS));
      } else {
        // When released
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}
