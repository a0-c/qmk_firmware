#ifndef IPAD_H
#define IPAD_H

#include "matrix.h"
#include "keymap_common.h"
#ifdef BACKLIGHT_ENABLE
	#include "backlight.h"
#endif
#ifdef RGBLIGHT_ENABLE
  #include "rgblight.h"
#endif
#include <stddef.h>
#ifdef MIDI_ENABLE
	#include <keymap_midi.h>
#endif

#define IPAD( \
	k00, k01, k02, k03, \
	k04, k05, k06, k07  \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07 } \
}



void matrix_init_user(void);
void matrix_scan_user(void);

#endif
