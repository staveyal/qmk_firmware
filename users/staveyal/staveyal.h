#include QMK_KEYBOARD_H
// Wrappers stolen directry from drashna
#define _________________QWERTY_L1_________________ KC_Q, KC_W, KC_E, KC_R, KC_T
#define _________________QWERTY_L2_________________ KC_A, KC_S, KC_D, KC_F, KC_G
#define _________________QWERTY_L3_________________ KC_Z, KC_X, KC_C, KC_V, KC_B

#define _________________QWERTY_R1_________________ KC_Y, KC_U, KC_I, KC_O, KC_P
#define _________________QWERTY_R2_________________ KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT
#define _________________QWERTY_R3_________________ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define ______________COLEMAK_MOD_DH_L1____________ KC_Q, KC_W, KC_F, KC_P, KC_B
#define ______________COLEMAK_MOD_DH_L2____________ KC_A, KC_R, KC_S, KC_T, KC_G
#define ______________COLEMAK_MOD_DH_L3____________ KC_Z, KC_X, KC_C, KC_D, KC_V

#define ______________COLEMAK_MOD_DH_R1____________ KC_J, KC_L, KC_U, KC_Y, KC_SCLN
#define ______________COLEMAK_MOD_DH_R2____________ KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT
#define ______________COLEMAK_MOD_DH_R3____________ KC_K, KC_H, KC_COMM, KC_DOT, KC_SLASH

#define ________________NUMBER_LEFT________________ KC_1, KC_2, KC_3, KC_4, KC_5
#define ________________NUMBER_RIGHT_______________ KC_6, KC_7, KC_8, KC_9, KC_0
#define _________________FUNC_LEFT_________________ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define _________________FUNC_RIGHT________________ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10

#define ___________________BLANK___________________ _______, _______, _______, _______, _______

#define __THUMB_L__ KC_TAB, KC_BSPC
#define __THUMB_R__ KC_SPC, KC_ENT

#define _________________NUMPAD_1__________________ _______, KC_7, KC_8, KC_9, _______,
#define _________________NUMPAD_2__________________ _______, KC_4, KC_5, KC_6, _______,
#define _________________NUMPAD_3__________________ _______, KC_1, KC_2, KC_3, _______,

enum layers {
    _QWERTY = 0,
    _COLEMAK_DH,
};
