#pragma once

// default but used in macros
#define TAPPING_TERM 200

// makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn’t hit the TAPPING_TERM
#define PERMISSIVE_HOLD

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Redefine debounce time
#ifdef DEBOUNCE
#undef DEBOUNCE
#endif
#define DEBOUNCE 20