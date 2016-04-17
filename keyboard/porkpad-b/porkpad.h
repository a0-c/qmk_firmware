#ifndef PORKPAD_H
#define PORKPAD_H

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

#define NUMBERPAD( \
	k00, k01, k02, k03, \
	k10, k11, k12, k13, \
	k20, k21, k22, k23, \
	k30, k31, k32, k33, \
	k40, k41, k42, k43, \
	k50, k51, k52, k53  \
) \
{ \
	{ k00, k01, k02, k03 }, \
	{ k10, k11, k12, k13 }, \
	{ k20, k21, k22, k23 }, \
	{ k30, k31, k32, k33 }, \
	{ k40, k41, k42, k43 }, \
	{ k50, k51, k52, k53 }  \
}

void matrix_init_user(void);
void matrix_scan_user(void);

#endif
