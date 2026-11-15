// Selenium keymap for QMK
// https://github.com/OneDeadKey/selenium

/******************************************************************************
 * Layout-specific actions and symbols.
 ******************************************************************************/

// Uncomment one of the following to match the layout installed on your OS:

// #define KB_LAYOUT_QWERTY
// #define KB_LAYOUT_QWERTY_LAFAYETTE
// #define KB_LAYOUT_AZERTY
#define KB_LAYOUT_ERGOL
// #define KB_LAYOUT_ERGLACE
// #define KB_LAYOUT_BEPO
// #define KB_LAYOUT_BEPOLAR
// #define KB_LAYOUT_DVORAK
// #define KB_LAYOUT_COLEMAK
// #define KB_LAYOUT_COLEMAK_DH_ANSI
// #define KB_LAYOUT_COLEMAK_DH_ORTHO

// Uncomment the following line if using a Mac:

// #define MACOS

/******************************************************************************
 * Hold-Taps
 ******************************************************************************/

// Uncomment one of the following lines to pick your preferred hold-tap config:

// #define HT_NONE
// #define HT_THUMB_TAPS
#define HT_HOME_ROW_MODS  // (default behavior)
// #define HT_TWO_THUMB_KEYS

// Uncomment the following line if your keyboard has exactly 4 thumb keys
// (2 per hand, e.g. Ferris/Sweep). This forces HT_TWO_THUMB_KEYS mode.

// #define FOUR_THUMB_KEYS

// Keyboards with a central spacebar (Planck MIT) always use the Arsenik thumb
// keys: Shift/Backspace, Nav/Space, Symbols/Enter, with home-row mods. The
// hold-tap configs above and LEFT_HAND_SPACE don't apply there.

// Timing is key! Keep the default value if unsure.
// This defines how long (in ms) a hold-tap key with the "tap-preferred" flavor
// must be held to be considered as a modifier or layer shift. These hold-taps
// are the ones that may produce text, including the space-bar and home-row-mods.
// Keep this value high if you struggle with home-row-mods.

#define HRM_TAPPING_TERM 300

// This defines how quickly (in ms) you need to press and release a hold-tap
// with the "hold-preferred" flavor for it to be considered a tap. These
// hold-taps include the ones that don't produce text when tapped.
// Keep this value low if you press Enter or Escape by mistake too often.

#define SHORT_TAPPING_TERM 150

// When tapping then holding the same tap-hold, if the delay between the two
// key presses is lower than `QUICK_TAP`, the tap-hold will hold the tap action
// instead of the hold action. Again, keep the default value if unsure.

#define QUICK_TAP 200

// For more information on how hold-taps operate, feel free to read ZMK's docs:
// https://zmk.dev/docs/keymaps/behaviors/hold-tap

/******************************************************************************
 * Other Options
 ******************************************************************************/

// Uncomment the following line to split the num-nav layer in two:
//  - one layer for vim-style navigation (right) and GUI shortcuts (left)
//  - one layer for a full number row + easy access to Shift+Number
//  + Escape under the left thumb (direct access)
// Highly recommended for Vim users, obviously. :-)

#define VIM_NAVIGATION

// Uncomment the following line to enable shift as a pinky HRM.
// Useful for combined shortcuts, but NOT MEANT to type text!

//#define HRM_SHIFT

// [Experimental]
// Uncomment the following line to enable the "mod-hold" behavior on
// non-sticky layer keys. Enabling this means that any modifier held while
// entering the nav/fn/num layers will only be released when returning to
// the base layer. This is useful for:
// - one-handed shortcuts (Alt + Tab, Alt + F4, Ctrl + page-up/down)
// - carrying modifiers to fn-media when using the Thumb-Taps flavor
// - not accidentally dropping Shift when selecting text
// Note: you may have to release and rehold the layer to drop modifiers you
// no longer need.

// #define ENABLE_MOD_HOLDS

// Uncomment the following line to swap Space and Backspace.
// Beware: this increases the typing load of the left thumb.

// #define LEFT_HAND_SPACE

// PERMISSIVE_HOLD can feel like extra comfort for experienced users, but it
// will be an absolute pain if you are learning home-row-mods. It causes
// misfires during fast typing (especially on redirects and uneven finger
// rolls), and tuning it away is a dead end — the Selenium specification
// explicitly rejects this approach. Disabled by default for good reason.
// Do NOT activate this and then conclude that HRMs "don't work well".

// #define PERMISSIVE_HOLD

/******************************************************************************
 * Outer Column Keys (42-key boards only)
 ******************************************************************************/

// On 42-key boards (e.g. Quacken, Corne), these define the 6th column keys on the
// base layer. Ignored on smaller boards where the outer column doesn't exist.
// Uncomment and edit to customize. Defaults match the Selenium specification.

#define OC_TL  KC_RBRC  // KC_TAB
#define OC_TR  KC_LBRC  // KC_BSPC
#define OC_ML  KC_NUHS  // KC_ESC
#define OC_MR  KC_QUOT  // KC_ENT
#define OC_BL  KC_LCTL  // KC_LSFT
#define OC_BR  KC_RCTL  // KC_RSFT

/******************************************************************************
 * Extra Upper Row (boards with a 5th physical row only)
 ******************************************************************************/

// Identical on every layer. Ignored on other boards.
// Uncomment and edit to customize. Defaults to a number row.

#define UR_OL  KC_ESC
#define UR_1   KC_1
#define UR_2   KC_2
#define UR_3   KC_3
#define UR_4   KC_4
#define UR_5   KC_5
#define UR_6   KC_6
#define UR_7   KC_7
#define UR_8   KC_8
#define UR_9   KC_9
#define UR_0   KC_0
#define UR_OR  KC_MINS

#define ODK_EXT_INNER_TL KC_GRV  // KC_MINS
#define ODK_EXT_INNER_TR KC_EQL
#define ODK_EXT_INNER_ML KC_ENT  // KC_LBRC
#define ODK_EXT_INNER_MR KC_BSPC  // KC_RBRC
#define ODK_EXT_INNER_BL KC_TAB// KC_SCLN
#define ODK_EXT_INNER_BR KC_DEL  // KC_QUOT
#define ODK_EXT_BOTTOM_L1 KC_HOME
#define ODK_EXT_BOTTOM_L2 KC_PGDN
#define ODK_EXT_BOTTOM_L3 KC_PGUP
#define ODK_EXT_BOTTOM_L4 KC_END
#define ODK_EXT_BOTTOM_R1 KC_RIGHT
#define ODK_EXT_BOTTOM_R2 KC_UP
#define ODK_EXT_BOTTOM_R3 KC_DOWN
#define ODK_EXT_BOTTOM_R4 KC_LEFT
#define ODK_EXT_THUMB_OUT_TL KC_F14
#define ODK_EXT_THUMB_OUT_ML KC_F15
#define ODK_EXT_THUMB_OUT_BL KC_LGUI
#define ODK_EXT_THUMB_OUT_TR KC_F16
#define ODK_EXT_THUMB_OUT_MR KC_F17
#define ODK_EXT_THUMB_OUT_BR KC_RGUI
#define ODK_EXT_THUMB_3L KC_F13
#define ODK_EXT_THUMB_3R KC_F18
