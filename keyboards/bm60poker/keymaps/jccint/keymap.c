#include QMK_KEYBOARD_H

#define FN_SPACE LT(function, KC_SPACE)

enum layers {
    base,
    game,
    cuphead,
    function,
    config,
    numpad,
    arrows
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [base] = LAYOUT_60_ansi(
        KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL,   KC_LGUI,   KC_LALT,                       FN_SPACE,                     KC_RALT, MO(config), TT(numpad), TT(arrows)
    ),
    [game] = LAYOUT_60_ansi(
        KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL,   KC_H,   KC_LALT,                           KC_SPACE,                         KC_RALT, MO(config), MO(function), TT(arrows)
    ),
    [cuphead] = LAYOUT_60_ansi(
        KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,      KC_Q,    KC_UP,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS,       KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_F,    KC_G,    KC_H,    KC_Z,    KC_X,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL,   KC_H,   KC_LALT,                           KC_SPACE,                         KC_RALT, MO(config), MO(function), TT(arrows)
    ),
    [function] = LAYOUT_60_ansi(
        _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______,     _______, A(KC_LEFT), KC_PGUP, A(KC_RGHT),  KC_INS, C(G(KC_LEFT)), KC_HOME,   KC_UP,  KC_END, C(G(KC_RIGHT)), _______, _______, _______,
        _______,       C(KC_A),   C(KC_S),  KC_PGDN,  C(KC_F), _______, C(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, _______,
        _______,            C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______, _______, _______,
        _______,   _______,   _______,                          _______,                          XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX
    ),
    [config] = LAYOUT_60_ansi(
        RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, KC_PSCR,
        XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT, G(KC_PSCR),
        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,
        XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        DF(base), DF(game), DF(cuphead),                      KC_SLEP,                      XXXXXXX,   _______,   XXXXXXX,   XXXXXXX
    ),
    [numpad] = LAYOUT_60_ansi(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
        XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NLCK,  KC_P7,   KC_P8,   KC_P9, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_P4,   KC_P5,   KC_P6, XXXXXXX, XXXXXXX, KC_PENT,
        XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_P1,   KC_P1,   KC_P2,   KC_P3, XXXXXXX, XXXXXXX,
        XXXXXXX,   XXXXXXX,   XXXXXXX,                             KC_P0,                           XXXXXXX,   XXXXXXX,   _______,   XXXXXXX
    ),
    [arrows] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,            _______, _______, _______, _______, _______, _______, _______, _______, _______,   KC_UP, _______,
        _______,   _______,   _______,                           _______,                           KC_LEFT,   KC_DOWN,   KC_RGHT,   _______
    )
};

#ifdef RGBLIGHT_LAYERS
const rgblight_segment_t PROGMEM game_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Spacebar
    {56, 1, HSV_RED}
);

const rgblight_segment_t PROGMEM cuphead_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Spacebar
    {56, 1, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM config_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Config keys
    {10, 3, HSV_WHITE}, // Volume keys
    {24, 3, HSV_WHITE}, // Playback keys
    {54, 1, HSV_RED}, // Game layer
    {55, 1, HSV_ORANGE} // Cuphead layer
);

const rgblight_segment_t PROGMEM numpad_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Numlock indicator
    {20, 1, HSV_RED},
    // Numpad keys
    {21, 3, HSV_WHITE},
    {35, 3, HSV_WHITE},
    {47, 4, HSV_WHITE},
    {56, 1, HSV_WHITE}
);

const rgblight_segment_t PROGMEM arrows_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Spacebar
    {56, 1, HSV_SPRINGGREEN},
    // Arrow keys
    {51, 1, HSV_WHITE},
    {57, 3, HSV_WHITE}
);

const rgblight_segment_t PROGMEM capslock_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {0, 1, HSV_WHITE},
    {14, 1, HSV_WHITE},
    {28, 1, HSV_WHITE},
    {41, 1, HSV_WHITE},
    {53, 3, HSV_WHITE},
    // Right side
    {13, 1, HSV_WHITE},
    {27, 1, HSV_WHITE},
    {40, 1, HSV_WHITE},
    {52, 1, HSV_WHITE},
    {57, 4, HSV_WHITE}
);

const rgblight_segment_t PROGMEM numlock_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Numlock indicator
    {20, 1, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM light_layers[] = RGBLIGHT_LAYERS_LIST(
    game_light_layer,
    cuphead_light_layer,
    config_light_layer,
    numpad_light_layer,
    arrows_light_layer,
    capslock_light_layer,
    numlock_light_layer
);

void keyboard_post_init_user(void) {
    // Initialize lighting layers
    rgblight_layers = light_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    // Indicate current default layer with lighting layers
    rgblight_set_layer_state(0, layer_state_cmp(state, game));
    rgblight_set_layer_state(1, layer_state_cmp(state, cuphead));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Indicate currently active layers with lighting layers
    rgblight_set_layer_state(2, layer_state_cmp(state, config));
    rgblight_set_layer_state(3, layer_state_cmp(state, numpad));
    rgblight_set_layer_state(4, layer_state_cmp(state, arrows));
    return state;
}

bool led_update_user(led_t usb_led) {
    // Indicate capslock and numlock with lighting layers
    rgblight_set_layer_state(5, usb_led.caps_lock);
    rgblight_set_layer_state(6, layer_state_is(numpad) && usb_led.num_lock);
    return true;
}
#endif

#ifdef TAPPING_FORCE_HOLD_PER_KEY
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    // Use TAPPING_FORCE_HOLD only for FN_SPACE to avoid breaking other keycodes
    return keycode == FN_SPACE;
}
#endif
