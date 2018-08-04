/*
 * HHKB JP Layout
 */
#include "unimap_trans.h"


#define AC_L0       ACTION_LAYER_TAP_KEY(1, KC_GRV)
#define AC_L1       ACTION_LAYER_MOMENTARY(1)
#define AC_GRV2     ACTION_MODS_KEY(MOD_LCTL, KC_GRV)
#define AC_ENT2     ACTION_LAYER_TAP_KEY(2, KC_ENT)
#define AC_BSPC2    ACTION_LAYER_TAP_KEY(2, KC_BSPC)
#define AC_SCLN2    ACTION_LAYER_TAP_KEY(2, KC_SCLN)
#define AC_QUOT2    ACTION_MODS_KEY(MOD_RGUI, KC_QUOT)
#define AC_SLSH2    ACTION_MODS_KEY(MOD_RCTL, KC_SLSH)
#define AC_BSLS2    ACTION_MODS_KEY(MOD_RSFT, KC_BSLS)


#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    [0] = UNIMAP_JP(
        ESC,  1,    2,    3,    4,    5,   6,  7,     8,    9,    0,     MINS,  EQL,  BSLS, BSPC,
        TAB,  Q,    W,    E,    R,    T,   Y,  U,     I,    O,    P,     GRV,   LBRC,
        LCTL, A,    S,    D,    F,    G,   H,  J,     K,    L,    SCLN2, QUOT2, RBRC,       ENT,
        LSFT, Z,    X,    C,    V,    B,   N,  M,     COMM, DOT,  SLSH2, BSLS2, UP,   RSFT,
        L0,   GRV2, LGUI, LALT, ENT2,   SPC,   BSPC2, RGUI, RALT, L1,    LEFT,  DOWN, RGHT
    ),

    [1] = UNIMAP_JP(
        PWR,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  INS,  DEL,
        CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, UP,   TRNS,
        TRNS, VOLD, VOLU, MUTE, TRNS, TRNS, PAST, PSLS, HOME, PGUP, LEFT, RGHT, TRNS,       PENT,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PPLS, PMNS, END,  PGDN, DOWN, TRNS, PGUP, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,     TRNS,   TRNS, TRNS, TRNS, TRNS, HOME, PGDN, END
    ),

    [2] = UNIMAP_JP(
        TRNS, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  TRNS,  TRNS,
        TRNS, TRNS, BTN3, MS_U, BTN2, TRNS, TRNS, BTN2, WH_U, BTN3, TRNS, TRNS, TRNS,
        TRNS, TRNS, MS_L, MS_D, MS_R, BTN1, BTN1, WH_L, WH_D, WH_R, TRNS, TRNS, TRNS,        TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS
    ),
};
