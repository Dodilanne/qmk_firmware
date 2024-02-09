// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0: Base
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_GRV,
        KC_ESC,  LGUI_T(KC_A),    LALT_T(KC_R),    LCTL_T(KC_S),    LSFT_T(KC_T),    KC_G,                               KC_M, RSFT_T(KC_N),    RCTL_T(KC_E),    RALT_T(KC_I),    RGUI_T(KC_O),    KC_BSPC,
        OSM(MOD_LALT), KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, OSL(5),
                                            MEH_T(KC_BSPC), KC_SPC, OSL(4),           OSL(3),  KC_ENT,  OSM(MOD_LSFT)
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
        KC_TRNS,  KC_MINUS,    KC_7,    KC_8,    KC_9,    KC_PLUS,                          KC_WH_U,    KC_HOME,    KC_END,    G(S(KC_RBRC)),    KC_TRNS,KC_TRNS,
        KC_TRNS, KC_COMM,    KC_4,    KC_5,    KC_6,    KC_PERC,                          KC_LEFT,  KC_DOWN,    KC_UP,    KC_RIGHT, KC_TRNS,KC_TRNS,
        KC_TRNS, KC_DOT,    KC_1,    KC_2,    KC_3,    KC_0,                          KC_WH_D,      KC_PAGE_DOWN, KC_PAGE_UP,  G(S(KC_LBRC)), KC_TRNS,KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,       CW_TOGG,  KC_TRNS,  KC_TRNS
    ),

    // Layer 5: Media
    [5] = LAYOUT_split_3x6_3(
        QK_BOOT,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    LSG(KC_4),    KC_MEDIA_PLAY_PAUSE,    KC_TRNS,                               KC_MEDIA_PREV_TRACK,    KC_KB_VOLUME_DOWN,    KC_KB_VOLUME_UP,    KC_MEDIA_NEXT_TRACK,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_AUDIO_MUTE,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS,  KC_TRNS,  KC_TRNS
    )
};
