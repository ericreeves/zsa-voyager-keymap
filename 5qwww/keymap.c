#include QMK_KEYBOARD_H
#include "version.h"
#include "features/achordion.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TG(6),          
    MT(MOD_LALT, KC_TAB),KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_GUI,    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_ALT,   
                                                    MT(MOD_LSFT, KC_SPACE),LT(2,KC_ENTER),                                 LT(3,KC_BSPC),  MT(MOD_RSFT, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           MT(MOD_LALT, KC_D),KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_PSCR,        TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),                                    LSFT(KC_END),   LSFT(KC_PGDN),  LSFT(KC_PAGE_UP),LSFT(KC_HOME),  KC_TRANSPARENT, LALT(LCTL(KC_DELETE)),
    KC_DELETE,      LALT(KC_F4),    LALT(KC_LBRC),  LGUI(KC_UP),    LALT(KC_RBRC),  LGUI(LCTL(KC_F11)),                                KC_END,         KC_PGDN,        KC_PAGE_UP,     KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        LCTL(KC_A),     LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RIGHT), LALT(KC_L),                                     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    LGUI(LSFT(KC_Z)),LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LGUI(LSFT(KC_RIGHT)),                                LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), LALT(KC_X),     LGUI(LCTL(LSFT(KC_B))),
                                                    TD(DANCE_5),    KC_TRANSPARENT,                                 TO(4),          TD(DANCE_6)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),                                   LALT(LGUI(LCTL(KC_1))),LALT(LGUI(LCTL(KC_2))),LALT(LGUI(LCTL(KC_3))),LALT(LGUI(LCTL(KC_4))),LALT(LGUI(LCTL(KC_5))),LALT(LGUI(LCTL(KC_6))),
    KC_TRANSPARENT, KC_GRAVE,       KC_7,           KC_8,           KC_9,           KC_MINUS,                                       KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_4,           KC_5,           KC_6,           KC_UNDS,                                        KC_EQUAL,       KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_L),     
                                                    TD(DANCE_12),   TO(4),                                          KC_TRANSPARENT, TD(DANCE_13)
  ),
  [4] = LAYOUT_voyager(
    LGUI(LSFT(KC_S)),KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    QK_DYNAMIC_TAPPING_TERM_UP,KC_ESCAPE,      KC_MS_ACCEL0,   KC_MS_UP,       KC_MS_ACCEL2,   KC_MS_BTN3,                                     KC_HOME,        KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_END,         KC_F12,         
    QK_DYNAMIC_TAPPING_TERM_DOWN,KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN1,                                     KC_WWW_BACK,    KC_MS_BTN1,     KC_MS_WH_DOWN,  KC_MS_BTN2,     KC_WWW_FORWARD, KC_MS_ACCEL0,   
    QK_DYNAMIC_TAPPING_TERM_PRINT,RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        KC_MS_BTN2,                                     KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_W),     LCTL(KC_TAB),   KC_TRANSPARENT, TO(7),          
                                                    TD(DANCE_14),   TO(0),                                          TO(0),          TD(DANCE_15)
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_Q)))),LALT(LGUI(LCTL(LSFT(KC_W)))),LALT(LGUI(LCTL(LSFT(KC_E)))),LALT(LGUI(LCTL(LSFT(KC_R)))),LALT(LGUI(LCTL(LSFT(KC_T)))),                                LALT(LGUI(LCTL(LSFT(KC_Y)))),LALT(LGUI(LCTL(LSFT(KC_U)))),LALT(LGUI(LCTL(LSFT(KC_I)))),LALT(LGUI(LCTL(LSFT(KC_O)))),LALT(LGUI(LCTL(LSFT(KC_P)))),KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_A)))),LALT(LGUI(LCTL(LSFT(KC_S)))),LALT(LGUI(LCTL(LSFT(KC_D)))),LALT(LGUI(LCTL(LSFT(KC_F)))),LALT(LGUI(LCTL(LSFT(KC_G)))),                                LALT(LGUI(LCTL(LSFT(KC_H)))),LALT(LGUI(LCTL(LSFT(KC_J)))),LALT(LGUI(LCTL(LSFT(KC_K)))),LALT(LGUI(LCTL(LSFT(KC_L)))),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_Z)))),LALT(LGUI(LCTL(LSFT(KC_X)))),LALT(LGUI(LCTL(LSFT(KC_C)))),LALT(LGUI(LCTL(LSFT(KC_V)))),LALT(LGUI(LCTL(LSFT(KC_B)))),                                LALT(LGUI(LCTL(LSFT(KC_N)))),LALT(LGUI(LCTL(LSFT(KC_M)))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          TO(0),                                          TO(0),          TO(0)
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_GUI,    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_LEFT_ALT,    KC_SPACE,                                       KC_ENTER,       KC_SPACE
  ),
  [7] = LAYOUT_voyager(
    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_W),     ST_MACRO_6,     KC_TRANSPARENT, ST_MACRO_7,     LCTL(KC_T),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_LEFT),  KC_LEFT,        KC_TRANSPARENT, KC_RIGHT,       LCTL(KC_RIGHT),                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_8,     ST_MACRO_9,     KC_COMMA,       ST_MACRO_10,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { MT(MOD_LSFT, KC_SPACE), MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo1[] = { LT(2,KC_ENTER), LT(3,KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_A, LT(2,KC_ENTER), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_CAPS),
    COMBO(combo1, TO(4)),
    COMBO(combo2, OSL(5)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_S:
            return g_tapping_term -20;
        case KC_D:
            return g_tapping_term -20;
        case KC_F:
            return g_tapping_term -40;
        case MT(MOD_LSFT, KC_SPACE):
            return g_tapping_term -40;
        case KC_J:
            return g_tapping_term -40;
        case KC_K:
            return g_tapping_term -20;
        case KC_L:
            return g_tapping_term -20;
        case MT(MOD_RSFT, KC_SPACE):
            return g_tapping_term -40;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {215,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {193,157,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {193,157,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {193,157,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {193,157,255}, {193,157,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {81,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {215,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {215,255,255}, {215,255,255}, {215,255,255}, {193,157,255}, {193,157,255}, {193,157,255} },

    [2] = { {0,0,0}, {174,230,255}, {174,230,255}, {174,230,255}, {174,230,255}, {174,230,255}, {172,255,255}, {0,255,255}, {193,157,255}, {193,157,255}, {193,157,255}, {0,0,0}, {172,255,255}, {212,255,255}, {193,157,255}, {193,157,255}, {193,157,255}, {212,255,255}, {0,255,255}, {0,0,0}, {193,157,255}, {193,157,255}, {193,157,255}, {81,255,85}, {0,0,0}, {0,0,0}, {215,255,136}, {215,255,136}, {215,255,136}, {215,255,136}, {0,0,0}, {0,255,255}, {215,255,255}, {214,255,255}, {215,255,255}, {214,255,255}, {0,0,0}, {0,0,0}, {214,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {215,255,136}, {215,255,136}, {215,255,136}, {215,255,136}, {0,255,87}, {81,255,255}, {163,255,255}, {0,0,0} },

    [3] = { {0,255,255}, {216,230,255}, {216,230,255}, {216,230,255}, {216,230,255}, {216,230,255}, {0,255,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,238,255}, {85,255,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,0,0}, {0,255,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,238,255}, {0,0,0}, {0,0,0}, {216,230,255}, {216,230,255}, {216,230,255}, {216,230,255}, {216,230,255}, {216,230,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {216,230,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,238,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,238,255}, {0,238,255}, {0,255,87}, {0,0,0}, {174,230,255} },

    [4] = { {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87}, {0,255,87} },

    [6] = { {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {81,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_0));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_4));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_5));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

void housekeeping_task_user(void) {
  achordion_task();
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[16];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_1))));
        tap_code16(LALT(LCTL(LSFT(KC_1))));
        tap_code16(LALT(LCTL(LSFT(KC_1))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_1))));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_1)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_1))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_1)))); register_code16(LALT(LCTL(LSFT(KC_1))));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_1)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_1))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_1)))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_2))));
        tap_code16(LALT(LCTL(LSFT(KC_2))));
        tap_code16(LALT(LCTL(LSFT(KC_2))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_2))));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_2)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_2))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_2)))); register_code16(LALT(LCTL(LSFT(KC_2))));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_2)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_2))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_2)))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_3))));
        tap_code16(LALT(LCTL(LSFT(KC_3))));
        tap_code16(LALT(LCTL(LSFT(KC_3))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_3))));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_3)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_3))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_3)))); register_code16(LALT(LCTL(LSFT(KC_3))));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_3)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_3))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_3)))); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_4))));
        tap_code16(LALT(LCTL(LSFT(KC_4))));
        tap_code16(LALT(LCTL(LSFT(KC_4))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_4))));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_4)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_4)))); register_code16(LALT(LCTL(LSFT(KC_4))));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_4)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_4)))); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_5))));
        tap_code16(LALT(LCTL(LSFT(KC_5))));
        tap_code16(LALT(LCTL(LSFT(KC_5))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_5))));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_5)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_5))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_5)))); register_code16(LALT(LCTL(LSFT(KC_5))));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_5)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_5))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_5)))); break;
    }
    dance_state[4].step = 0;
}
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
    }
    dance_state[5].step = 0;
}
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_1))));
        tap_code16(LALT(LCTL(LSFT(KC_1))));
        tap_code16(LALT(LCTL(LSFT(KC_1))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_1))));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_1)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_1))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_1)))); register_code16(LALT(LCTL(LSFT(KC_1))));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_1)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_1))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_1)))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_2))));
        tap_code16(LALT(LCTL(LSFT(KC_2))));
        tap_code16(LALT(LCTL(LSFT(KC_2))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_2))));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_2)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_2))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_2)))); register_code16(LALT(LCTL(LSFT(KC_2))));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_2)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_2))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_2)))); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_3))));
        tap_code16(LALT(LCTL(LSFT(KC_3))));
        tap_code16(LALT(LCTL(LSFT(KC_3))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_3))));
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_3)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_3))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_3)))); register_code16(LALT(LCTL(LSFT(KC_3))));
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_3)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_3))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_3)))); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_4))));
        tap_code16(LALT(LCTL(LSFT(KC_4))));
        tap_code16(LALT(LCTL(LSFT(KC_4))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_4))));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_4)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_4)))); register_code16(LALT(LCTL(LSFT(KC_4))));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_4)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_4)))); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_5))));
        tap_code16(LALT(LCTL(LSFT(KC_5))));
        tap_code16(LALT(LCTL(LSFT(KC_5))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_5))));
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_5)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_5))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_5)))); register_code16(LALT(LCTL(LSFT(KC_5))));
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_5)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_5))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_5)))); break;
    }
    dance_state[11].step = 0;
}
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
    }
    dance_state[12].step = 0;
}
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
    }
    dance_state[13].step = 0;
}
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
    }
    dance_state[14].step = 0;
}
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
    }
    dance_state[15].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_15_finished, dance_15_reset),
};
