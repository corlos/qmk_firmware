#include "kb.h"

enum custom_keycodes{

	ZERK = SAFE_RANGE, SSDS, 
	NAT_INT, BARR, IMMORT,
	SPEC_WEP, MH_SHIELD, DW,
	
};

#define SHIFT_U LSHIFT(KC_U)
#define SHIFT_G LSHIFT(KC_G)
#define CTRL_Y LCTRL(KC_Y)
#define SHIFT_Y LSHIFT(KC_Y)
#define CTRL_L LCTRL(KC_L)
#define SHIFT_L LSHIFT(KC_L) 






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		BARR, IMMORT, NAT_INT, 
		KC_L, SHIFT_L, SPEC_WEP, 
		
		CTRL_Y, KC_Y, SHIFT_Y 
		KC_J, MH_SHIELD, CTRL_L, 
		
		SSDS, KC_C, DW, 
		ZERK, SHIFT_G, SHIFT_U),

};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		 case ZERK:G
			if (record->event.pressed){
				SEND_STRING(SS_TAP(SS_LSFT("8")) SS_DELAY(50) SS_TAP("E")) 				
				}
				break;
		case SSDS:
			if (record->event.pressed){
				SEND_STRING(SS_TAP(SS_LSFT("8")) SS_DELAY(50) SS_TAP(SS_LALT("8"))
				SS_DELAY(50) SS_TAP(SS_LCTL("8")) SS_DELAY(50) SS_TAP("8"))				
				}
				break;				
		 case NAT_INT:
			if (record->event.pressed){
				SEND_STRING(SS_TAP(SS_LSFT("8")) SS_DELAY(50) SS_TAP(SS_LSFT("P")))
				}
				break;				
		case BARR:
			if (record->event.pressed){
				SEND_STRING(SS_TAP(SS_LSFT("8")) SS_DELAY(50) SS_TAP("P"))
				}
				break;		
		case IMMORT:
			if (record->event.pressed){
				SEND_STRING(SS_TAP(SS_LSFT("8")) SS_DELAY(50) SS_TAP(SS_LCTL("P")))
				}
				break;					
		 case SPEC_WEP:
			if (record->event.pressed){
				SEND_STRING(SS_TAP(SS_LSFT("C")) SS_DELAY(100) SS_TAP(SS_LCTL("C")))
				}
				break;				
		 case MH_SHIELD:
			if (record->event.pressed){
				SEND_STRING(SS_TAP("M") SS_DELAY(50) SS_TAP("X"))
				}
				break;				
		 case DW:
			if (record->event.pressed){
				SEND_STRING(SS_TAP("M") SS_DELAY(50) SS_TAP(SS_LSFT("M")))
				}
				break;				
	}
	return true;
};

}
