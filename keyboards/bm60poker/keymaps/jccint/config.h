#pragma once

/***********************************
 *             Features
 ***********************************/

// If defined, GRAVE_ESC will always act as ESC when CTRL is held.
// This is useful for the Windows task manager shortcut (ctrl+shift+esc).
#define GRAVE_ESC_CTRL_OVERRIDE

// Always use NKRO
#define FORCE_NKRO

// Makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn’t hit the TAPPING_TERM
#define PERMISSIVE_HOLD

// Makes it possible to use a dual role key as modifier shortly after having been tapped.
// Breaks any Tap Toggle functionality (TT or the One Shot Tap Toggle).
#define TAPPING_FORCE_HOLD_PER_KEY

/***********************************
 *        Parameters
 ***********************************/

// Number of layers to scan
#define MAX_LAYER 7

// Sets the USB polling rate in milliseconds for the keyboard, mouse, and shared (NKRO/media keys) interfaces
#define USB_POLLING_INTERVAL_MS 1

// Debounce algorithm time parameter
#define DEBOUNCE 50

// How long before a tap becomes a hold, if set above 500, a key tapped during the tapping term will turn it into a hold too
#define TAPPING_TERM 200

// How many taps before triggering the toggle
#define TAPPING_TOGGLE 2

/***********************************
 *            RGB stuff
 ***********************************/

// Disable RGB animations
#undef RGB_MATRIX_KEYPRESSES
#undef RGBLIGHT_ANIMATIONS

// Enable lighting layers
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

// Remove RGB brightness limit
#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 255
