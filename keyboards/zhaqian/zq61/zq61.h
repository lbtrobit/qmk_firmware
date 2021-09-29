#ifndef ZQ61_H
#define ZQ61_H

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,       K213, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310,       K312,       \
	K400, K401, K402,             K405,                   K409, K410,       K412, K413  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  KC_NO, K213 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  KC_NO, K312,  KC_NO }, \
	{ K400,  K401,  K402,  KC_NO, KC_NO, K405,  KC_NO, KC_NO, KC_NO, K409,  K410,  KC_NO, K412,  K413 }  \
}

enum custom_keycodes {
#ifdef RGB_MATRIX_CONTROL_ENABLE
#ifdef VIA_ENABLE
	UGLRGBTog = USER00,		//rgb toggle for underglow rgb light
#else
    UGLRGBTog = SAFE_RANGE,
#endif
	KBLRGBTog,				//rgb toggle for key rgb backlight
#endif
#ifdef UNDERGLOW_RGB_MATRIX_ENABLE
	UGLFIXEDRGBMODF,		//underglow light fixed and only changes rgb effects of backlight
    UGLFIXEDRGBMODR,
#endif
};

#endif