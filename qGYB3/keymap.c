#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_ESCAPE,      MT(MOD_LCTL, KC_LEFT_GUI),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),ALL_T(KC_G),                                    ALL_T(KC_H),    MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LGUI, KC_QUOTE),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           LT(6,KC_C),     LT(5,KC_V),     MEH_T(KC_B),                                    MEH_T(KC_N),    KC_M,           KC_F24,         TD(DANCE_0),    TD(DANCE_1),    KC_TRANSPARENT, 
                                                    LT(1,KC_SPACE), LT(2,KC_ENTER),                                 LT(4,KC_BSPC),  LT(3,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_NONUS_HASH,  KC_NUBS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_2),    KC_UNDS,        KC_MINUS,       KC_PLUS,        KC_EQUAL,                                       KC_LBRC,        KC_LPRN,        KC_RPRN,        KC_RBRC,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CAPS,        CW_TOGG,        KC_APPLICATION, KC_TAB,         KC_PIPE,                                        KC_SLASH,       KC_LCBR,        KC_RCBR,        KC_BSLS,        KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LGUI(LCTL(LSFT(KC_SPACE)))),LGUI(KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_HYPR,                                        KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,MEH_T(KC_AUDIO_MUTE),                                LALT(LGUI(KC_LEFT)),LCTL(LSFT(KC_LBRC)),LCTL(LSFT(KC_RBRC)),LALT(LCTL(KC_RIGHT)),KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_LBRC),  LCTL(KC_RBRC)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_NO,                                          KC_NO,          KC_MS_WH_UP,    LALT(LCTL(LSFT(KC_SPACE))),KC_MS_WH_DOWN,  KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_MS_WH_LEFT,  KC_NO,          KC_MS_WH_RIGHT, KC_NO,          KC_TRANSPARENT, 
                                                    LGUI(KC_TAB),   LALT(KC_TAB),                                   KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LALT(KC_LBRC),  LGUI(KC_UP),    LALT(KC_RBRC),  LGUI(LCTL(KC_F11)),                                KC_NO,          RGB_VAI,        RGB_VAD,        KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RIGHT), LALT(KC_L),                                     KC_F23,         TO(7),          TO(0),          TO(0),          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_F16,         TD(DANCE_3),    LCTL(KC_DOWN),  LGUI(LSFT(KC_RIGHT)),                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_TRANSPARENT, 
                                                    LALT(LCTL(LSFT(KC_ENTER))),LALT(LGUI(LCTL(LSFT(KC_ENTER)))),                                KC_TRANSPARENT, KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_PLUS,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,          KC_NO,                                          KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_SPACE,       KC_NO,          
    KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        KC_TRANSPARENT, KC_NO,                                          KC_MINUS,       KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_NO,          
                                                    MT(MOD_LSFT, KC_ENTER),KC_COMMA,                                       KC_KP_DOT,      KC_0
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_CIRC,        KC_NO,          ST_MACRO_0,     KC_DLR,                                         KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_B),     LCTL(KC_U),     KC_TRANSPARENT, LCTL(KC_D),     LCTL(KC_F),                                     KC_F10,         TD(DANCE_4),    KC_F2,          KC_F3,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_DELETE,                                      KC_DELETE,      KC_SCRL
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_R,           KC_Q,           KC_W,           KC_E,           KC_TAB,         KC_ESCAPE,      
    MO(8),          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_F,           KC_A,           KC_S,           KC_D,           KC_LEFT_SHIFT,  MO(8),          
    MO(9),          KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_V,           KC_Z,           KC_X,           KC_C,           KC_LEFT_CTRL,   MO(9),          
                                                    KC_LEFT_ALT,    KC_SPACE,                                       KC_SPACE,       KC_LEFT_ALT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_5,           KC_4,           KC_3,           KC_2,           KC_1,           TO(0),          
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,                                           KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_LEFT_ALT,    KC_SPACE,                                       KC_SPACE,       KC_LEFT_ALT
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,                                           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           
    KC_NO,          KC_G,           KC_H,           KC_J,           KC_K,           KC_L,                                           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,                                         KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, 
                                                    KC_LEFT_ALT,    KC_SPACE,                                       KC_SPACE,       KC_LEFT_ALT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {194,255,255}, {194,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {161,255,255}, {161,255,255}, {161,255,255}, {161,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {25,255,255}, {25,255,255}, {0,0,0}, {126,255,255}, {84,255,255}, {84,255,255}, {126,255,255}, {43,255,255}, {0,0,0}, {43,255,255}, {194,255,255}, {194,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {21,255,255}, {21,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,61,255}, {194,61,255}, {194,61,255}, {0,0,0}, {0,0,0}, {78,255,255}, {78,255,255}, {78,255,255}, {78,255,255}, {161,255,255}, {0,0,0}, {194,61,255}, {0,0,255}, {194,61,255}, {0,0,255}, {194,69,125}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {78,255,255}, {161,255,255}, {194,61,255}, {161,255,255}, {0,0,0}, {0,0,0}, {78,255,255}, {194,61,255}, {194,61,255}, {194,61,255}, {0,0,0}, {0,0,0}, {78,255,255}, {43,255,255}, {43,255,255}, {78,255,255}, {0,0,0}, {0,0,0}, {78,255,255}, {78,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {78,255,255}, {194,61,255}, {78,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {194,61,255}, {194,61,255}, {194,61,255}, {0,0,0}, {0,0,0}, {79,255,255}, {79,255,255}, {79,255,255}, {79,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {25,255,255}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {78,255,255}, {78,255,255}, {78,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {0,0,0}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,161}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {161,255,255}, {194,255,255}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {84,255,255}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {161,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {43,255,255}, {0,0,0}, {43,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {43,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {43,255,255}, {0,0,0}, {194,255,255}, {0,0,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {194,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {194,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,255,255} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {192,255,255}, {192,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {192,255,255}, {171,255,255}, {122,255,255}, {79,255,255}, {39,255,255}, {0,255,255}, {192,255,255}, {171,255,255}, {122,255,255}, {79,255,255}, {39,255,255}, {0,255,255}, {192,255,255}, {171,255,255}, {122,255,255}, {79,255,255}, {39,255,255}, {0,255,255}, {192,255,255}, {192,255,255} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,255}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {192,255,255}, {171,255,255}, {122,255,255}, {79,255,255}, {39,255,255}, {0,255,255}, {192,255,255}, {171,255,255}, {122,255,255}, {79,255,255}, {39,255,255}, {0,255,255}, {192,255,255}, {171,255,255}, {122,255,255}, {79,255,255}, {39,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {0,255,255} },

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
    case 1:
      set_layer_color(1);
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
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_LSFT(SS_TAP(X_MINUS)));
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

static tap dance_state[5];

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
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case SINGLE_HOLD: register_code16(KC_SCLN); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); register_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case SINGLE_HOLD: unregister_code16(KC_SCLN); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(KC_COLN); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_COLN); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); register_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_UP));
        tap_code16(LCTL(KC_UP));
        tap_code16(LCTL(KC_UP));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_UP));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_UP)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_UP)); register_code16(LCTL(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_UP)); register_code16(LCTL(KC_UP));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_UP)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_UP)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_TAP: register_code16(KC_SPACE); register_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[4].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};
