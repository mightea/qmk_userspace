#pragma once

/* Select hand configuration */
#define SPLIT_USB_DETECT

#define ACHORDION_ENABLE
#define CUSTOM_SHIFT_KEYS_ENABLE
#undef CALLUM_MODS_ENABLE

#undef TAPPING_TERM
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

#define QUICK_TAP_TERM_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY

#define ONESHOT_TIMEOUT 5000
#define SPLIT_USB_DETECT

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 9

#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 110

// save space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

#ifndef __ASSEMBLER__ // Guard against use with non-C files
#    include "wrappers.h"
#endif