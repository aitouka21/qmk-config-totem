#include QMK_KEYBOARD_H
#include <stdio.h>
#include "totem.h"

#define SPC_SFT LSFT_T(KC_SPC)
#define SPC_LY1 LT(1, KC_SPC)
#define SLSHLY3 LT(3, KC_SLSH)

enum combos {
  AS,
  DF,
  JK,
  QW
};

const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[] = {
  [AS] = COMBO(as_combo, LCTL(KC_ESC)),
  [DF] = COMBO(df_combo, LCTL(KC_ESC)),
  [JK] = COMBO(jk_combo, KC_TAB),
  [QW] = COMBO(qw_combo, KC_TAB),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  
             KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_J,     KC_L,     KC_ENT,    
   _______,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,      KC_N,     KC_M,     KC_COMM,  KC_DOT,   SLSHLY3,  KC_BSPC,
                                 KC_LGUI,  KC_LALT,  SPC_SFT,   SPC_LY1,  MO(2),    _______
  ),


  [1] = LAYOUT(
             KC_P1,    KC_P2,    KC_P3,    KC_P4,    KC_P5,     KC_P6,    KC_P7,    KC_P8,    KC_P9,    KC_P0,  
             KC_GRV,   KC_LBRC,  KC_RBRC,  KC_BSLS,  _______,   _______,  KC_MINS,  KC_EQL,   KC_SCLN,  KC_QUOT,    
   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  
                                 KC_LGUI,  KC_LALT,  SPC_SFT,   SPC_LY1,  MO(2),    _______
  ),


  [2] = LAYOUT(
             KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,   KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,
             KC_TILD,  KC_LCBR,  KC_RCBR,  KC_PIPE,  _______,   _______,  KC_UNDS,  KC_PLUS,  KC_COLN,  KC_DQUO,    
   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  
                                 KC_LGUI,  KC_LALT,  SPC_SFT,   SPC_LY1,  MO(2),    _______
  ),


  [3] = LAYOUT(
             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,  KC_LPRN,  KC_RPRN,
             _______,  _______,  _______,  _______,  _______,   KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  _______,    
   _______,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,   _______,  _______,  _______,  _______,  _______,  KC_DEL,  
                                 KC_LGUI,  KC_LALT,  SPC_SFT,   SPC_LY1,  MO(2),    _______
  ),
};

