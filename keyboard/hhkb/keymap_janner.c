/* 
 * Janner; HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Fn0  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,             \
                LALT,FN0,          SPC,                RGUI,RALT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |Prv|Pau|Nxt|Fn2|Fn3|   |   |Psc|Slk|Pus|PgU|   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|Fn4|Fn5|Lft|Dwn|Up |Rgt|Hom|End|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |Fn6|   |  +|  -|*  |/  |PgD|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */ 
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,MPRV,MPLY,MNXT,FN2,FN3 ,TRNS,TRNS,PSCR,SLCK,PAUS, PGUP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,FN4 ,FN5 ,LEFT,DOWN,UP  ,RGHT,HOME,END,PENT,            \
           TRNS,TRNS,TRNS,TRNS,FN6 ,TRNS,PPLS,PMNS,PAST, PSLS,PGDN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_MODS_KEY(MOD_LCTL, KC_WH_D),
    [2] = ACTION_MODS_KEY(MOD_LCTL, KC_WH_U),
    [3] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_UP),
    [4] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_LEFT),
    [5] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_RGHT),
    [6] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_DOWN),
};
