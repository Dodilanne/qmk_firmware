// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0: Base
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSPC,
        OSM(MOD_LALT), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, OSL(5),
                                            OSL(1), MEH_T(KC_SPC), OSL(4),           OSL(3),  KC_ENT,  OSL(2)
    ),

    // Layer 1: Left hand modifiers
    [1] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, OSM(MOD_LGUI),    OSM(MOD_LALT),    OSM(MOD_LCTL),    OSM(MOD_LSFT),    KC_TRNS,                               KC_TRNS,    KC_TRNS,     KC_1,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS,  KC_BSPC,  KC_TRNS
    ),

    // Layer 2: Right hand modifiers
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    OSM(MOD_LSFT),    OSM(MOD_LCTL),    OSM(MOD_LALT),    OSM(MOD_LGUI), KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_ESC, KC_TRNS,               KC_TRNS,  KC_TRNS,  KC_TRNS
    ),

    // Layer 3: Symbols
    [3] = LAYOUT_split_3x6_3(
        KC_TILD,  KC_CIRC,    KC_QUOT,    KC_DQT,    KC_PERC,    KC_TRNS,                      KC_TRNS,    KC_AMPR,    KC_ASTR,     KC_MINUS,    KC_PLUS,    KC_GRV,
        KC_TRNS, KC_EXLM,    KC_AT,    KC_HASH,    KC_DLR,    KC_TRNS,                               KC_TRNS,    KC_LPRN,    KC_LCBR,    KC_RPRN,    KC_RCBR, KC_TRNS,
        KC_TRNS, KC_BSLS,    KC_PIPE,    KC_UNDS,    KC_EQUAL,  KC_TRNS,                            KC_TRNS,    KC_LBRC,    KC_LABK, KC_RBRC,  KC_RABK, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_CAPS,               KC_TRNS,  KC_TRNS,  KC_TRNS
    ),

    // Layer 4: Navigation
    [4] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_MINUS,    KC_7,    KC_8,    KC_9,    KC_PLUS,                          KC_TRNS,    KC_KB_VOLUME_UP,    KC_MEDIA_NEXT_TRACK,    KC_END,    KC_PAGE_UP,KC_TRNS,
        KC_TRNS, KC_COMM,    KC_4,    KC_5,    KC_6,    KC_PERC,                          KC_LEFT,  KC_DOWN,    KC_UP,    KC_RIGHT, KC_MEDIA_PLAY_PAUSE,KC_TRNS,
        KC_TRNS, KC_DOT,    KC_1,    KC_2,    KC_3,    KC_0,                          KC_TRNS,      KC_KB_VOLUME_DOWN, KC_MEDIA_PREV_TRACK,  KC_HOME, KC_PAGE_DOWN,KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,       CW_TOGG,  KC_TRNS,  KC_TRNS
    ),

    // Layer 5: Media
    [5] = LAYOUT_split_3x6_3(
        QK_BOOT,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    LSG(KC_4),    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS,  KC_TRNS,  KC_TRNS
    )
};
