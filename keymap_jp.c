/*
 * HHKB JP Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    /* Layer 0: HHKB JP (custom)
    * ,-----------------------------------------------------------.
    * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9| 10|  -|  =| \ |Bsp|
    * |-----------------------------------------------------------|
    * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  `|  [|     |
    * |------------------------------------------------------` Ent|
    * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  ]|    |
    * |-----------------------------------------------------------|
    * |Shft   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  \| Up|Sft|
    * |-----------------------------------------------------------|
    * |   ||Ctl|Alt|Cmd|   |   Spc   |Bsp|   |   |   ||Lft|Dwn|Rgh|
    * `-----------------------------------------------------------'
    */

    KEYMAP_JP( \
        ESC,  1,   2,    3,    4,   5,   6,   7,    8,    9,    0,    MINS, EQL,  BSLS, BSPC, \
        TAB,  Q,   W,    E,    R,   T,   Y,   U,    I,    O,    P,    GRV,  LBRC,             \
        LCTL, A,   S,    D,    F,   G,   H,   J,    K,    L,    FN2,  QUOT, RBRC, ENT,        \
        LSFT, Z,   X,    C,    V,   B,   N,   M,    COMM, DOT,  SLSH, RO,   UP,   RSFT,       \
        FN0,  FN1, LALT, LGUI, ENT,    SPC,   BSPC, RGUI, RALT, FN0,  LEFT, DOWN, RGHT        \
    ),

    /* Layer 1: HHKB mode (HHKB Fn)
    * ,-----------------------------------------------------------.
    * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
    * |-----------------------------------------------------------|
    * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
    * |------------------------------------------------------`    |
    * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
    * |-----------------------------------------------------------|
    * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
    * |-----------------------------------------------------------|
    * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
    * `-----------------------------------------------------------'
    */

    KEYMAP_JP(
        PWR,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  INS,  DEL, \
        CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, UP,   TRNS,            \
        TRNS, VOLD, VOLU, MUTE, TRNS, TRNS, PAST, PSLS, HOME, PGUP, LEFT, RGHT, TRNS, PENT,      \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PPLS, PMNS, END,  PGDN, DOWN, TRNS, TRNS, TRNS,      \
        TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS       \
    ),

    /* Layer 2: Mouse
    * ,-----------------------------------------------------------.
    * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
    * |-----------------------------------------------------------|
    * |     |   |Mcl|MU |Rcl|   |   |Rcl|WU |Mcl|   |   |   |     |
    * |------------------------------------------------------`    |
    * |      |   |ML |MD |MR |Lcl|Lcl|WL |WD |WR |   |   |   |    |
    * |-----------------------------------------------------------|
    * |       |   |   |   |   |   |   |   |   |   |   |   |   |   |
    * |-----------------------------------------------------------|
    * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
    * `-----------------------------------------------------------'
    */

    KEYMAP_JP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, BTN3, MS_U, BTN2, TRNS, TRNS, BTN2, WH_U, BTN3, TRNS, TRNS, TRNS,             \
        TRNS, TRNS, MS_L, MS_D, MS_R, BTN1, BTN1, WH_L, WH_D, WH_R, TRNS, TRNS, TRNS, TRNS,       \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
        TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS        \
    ),

    /* Layer 3: Mouse
    * ,-----------------------------------------------------------.
    * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
    * |-----------------------------------------------------------|
    * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
    * |------------------------------------------------------`    |
    * |      |   |   |   |   |   |   |   |   |   |   |   |   |    |
    * |-----------------------------------------------------------|
    * |       |   |   |   |   |   |   |   |   |   |   |   |   |   |
    * |-----------------------------------------------------------|
    * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
    * `-----------------------------------------------------------'
    */

    // KEYMAP_JP(
    //     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    //     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,             \
    //     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
    //     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
    //     TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS        \
    // ),
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TAP_KEY(1, KC_GRV),   // ` ~
    [1] = ACTION_MODS_KEY(MOD_LCTL, KC_GRV), // ` ~
    [2] = ACTION_LAYER_TAP_KEY(2, KC_SCLN),  // ;
};
