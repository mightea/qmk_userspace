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

#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define OLED_FONT_H "oled/oledfont.c"

// save space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

// Key definitions
#define CLS_FUN  G(KC_F12)
#define FND_USE  A(KC_F7)
#define RENAME   S(KC_F6)
#define BRK_PT   G(KC_F8)
#define DBG_OVR  KC_F8
#define DBG_IN   KC_F7
#define DBG_OUT  S(KC_F8)
#define DBG_RES  A(G(KC_R))
#define DBG_EVL  A(KC_F8)

// Bluetooth placeholders
#define BT_SEL0  XXXXXXX
#define BT_SEL1  XXXXXXX
#define BT_SEL2  XXXXXXX
#define BT_SEL3  XXXXXXX
#define BT_CLR   XXXXXXX
#define OUT_TOG  XXXXXXX
#define EP_TOG   XXXXXXX