#include "stjony.h"

// combos
// enum combos {
//     num45_ESC,
//     num56_BSPC,
//     num6eql_ENT
// };

// const uint16_t PROGMEM num45_combo[]  = {KC_4, KC_5, COMBO_END};
// const uint16_t PROGMEM num56_combo[] = {KC_5, KC_6, COMBO_END};
// const uint16_t PROGMEM num6eql_combo[]  = {KC_6, KC_EQL, COMBO_END};

// combo_t key_combos[COMBO_COUNT] = {
//     [num45_ESC] = COMBO(num45_combo, KC_ESC),
//     [num56_BSPC] = COMBO(num56_combo, KC_BSPC),
//     [num6eql_ENT] = COMBO(num6eql_combo, KC_ENT)
// };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_stjony(
    KC_Q,         KC_W,         KC_E,              KC_R,            KC_T,   KC_Y,            KC_U,             KC_I,            KC_O,           KC_P,
    KC_A,         LALT_T(KC_S), LCTL_T(KC_D),      LSFT_T(KC_F),    KC_G,   KC_H,            LSFT_T(KC_J),     LCTL_T(KC_K),    LALT_T(KC_L),   LGUI_T(KC_QUOT),
    KC_Z,         ALGR_T(KC_X), KC_C,              KC_V,            KC_B,   KC_N,            KC_M,             KC_COMM,         ALGR_T(KC_DOT), KC_SLSH,
    U_NP,         U_NP,         LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), KC_TAB, LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL), U_NP,           U_NP
  ),
[NAV] = LAYOUT_stjony(
    U_NA,    U_NA,    U_NA,     U_NA,     U_NA,     U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL,  KC_LSFT,  U_NA,     KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    DF(NAV), KC_ALGR, U_NA,     U_NA,     U_NA,     KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    DF(BASE), DF(BASE), DF(BASE), KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
),
[MEDIA] = LAYOUT_stjony(
    U_NA,      U_NA,    U_NA,     U_NA,     U_NA,     RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI,   KC_LALT, KC_LCTL,  KC_LSFT,  U_NA,     U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    DF(MEDIA), KC_ALGR, U_NA,     U_NA,     U_NA,     U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,      U_NP,    DF(BASE), DF(BASE), DF(BASE), KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_stjony(
    KC_LBRC, KC_7, KC_8,   KC_9, KC_RBRC, U_NA,     U_NA,     U_NA,     U_NA,    U_NA,
    KC_SCLN, KC_4, KC_5,   KC_6, KC_EQL,  U_NA,     KC_LSFT,  KC_LCTL,  KC_LALT, KC_LGUI,
    KC_GRV,  KC_1, KC_2,   KC_3, KC_BSLS, U_NA,     U_NA,     U_NA,     KC_ALGR, DF(NUM),
    U_NP,    U_NP, KC_DOT, KC_0, KC_MINS, DF(BASE), DF(BASE), DF(BASE), U_NP,    U_NP
  ),
  [SYM] = LAYOUT_stjony(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,     U_NA,     U_NA,     U_NA,    U_NA,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,     KC_LSFT,  KC_LCTL,  KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,     U_NA,     U_NA,     KC_ALGR, DF(SYM),
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, DF(BASE), DF(BASE), DF(BASE), U_NP,    U_NP
  ),
  [FUN] = LAYOUT_stjony(
    KC_F12, KC_F7, KC_F8,  KC_F9,  KC_PSCR, U_NA,     U_NA,     U_NA,     U_NA,    U_NA,
    KC_F11, KC_F4, KC_F5,  KC_F6,  KC_SLCK, U_NA,     KC_LSFT,  KC_LCTL,  KC_LALT, KC_LGUI,
    KC_F10, KC_F1, KC_F2,  KC_F3,  KC_PAUS, U_NA,     U_NA,     U_NA,     KC_ALGR, DF(FUN),
    U_NP,   U_NP,  KC_APP, KC_SPC, KC_TAB,  DF(BASE), DF(BASE), DF(BASE), U_NP,    U_NP
  )
};