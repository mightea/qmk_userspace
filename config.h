#pragma once

/* Select hand configuration */
#define SPLIT_USB_DETECT

#define ACHORDION_ENABLE
#define CUSTOM_SHIFT_KEYS_ENABLE
#undef CALLUM_MODS_ENABLE

// Configure the global tapping term (default: 200ms)
#undef TAPPING_TERM
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

#define QUICK_TAP_TERM_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

#define ONESHOT_TIMEOUT 5000
#define SPLIT_USB_DETECT

#define USB_SUSPEND_WAKEUP_DELAY 0

// save space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

#ifndef __ASSEMBLER__ // Guard against use with non-C files
#    include "wrappers.h"
#endif