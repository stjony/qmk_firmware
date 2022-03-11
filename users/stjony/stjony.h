// generated from users/stjony/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#include QMK_KEYBOARD_H

#define U_NP    KC_NO // key is not present
#define U_NA    KC_NO    // present but not available for use
#define U_NU    KC_NO // available but not used
#define U_PST S(KC_INS) // paste
#define U_CPY C(KC_INS) // copy
#define U_CUT S(KC_DEL) // cut
#define U_UND C(KC_Z)   // undo
#define U_RDO C(KC_Y)   // redo

enum layers { BASE, MEDIA, NAV, SYM, NUM, FUN };
