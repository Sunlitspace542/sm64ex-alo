#ifndef CONFIG_H

#define CONFIG_H

/**
 * @file config.h
 * A catch-all file for configuring various bugfixes and other settings
 * (maybe eventually) in SM64
 */

// Bug Fixes
// --| US Version Nintendo Bug Fixes
/// Fixes bug where obtaining over 999 coins sets the number of lives to 999 (or -25)
#define BUGFIX_MAX_LIVES (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where the Boss music won't fade out after defeating King Bob-omb
#define BUGFIX_KING_BOB_OMB_FADE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug in Bob-Omb Battlefield where entering a warp stops the Koopa race music
#define BUGFIX_KOOPA_RACE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where Piranha Plants do not reset their action state when the
/// player exits their activation radius.
#define BUGFIX_PIRANHA_PLANT_STATE_RESET (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where sleeping Piranha Plants damage players that bump into them
#define BUGFIX_PIRANHA_PLANT_SLEEP_DAMAGE (0 || VERSION_US || VERSION_SH)
/// Fixes bug where it shows a star when you grab a key in bowser battle stages
#define BUGFIX_STAR_BOWSER_KEY (0 || VERSION_US || VERSION_EU || VERSION_SH)

// Misc Changes
// Some Shindou Changes
#define SH_CHANGES (1 || VERSION_SH)
// Extra Z trig in Europe
#define Z_TRIG_EXTRA_ACT (1 || VERSION_EU)
// Skip Intro Cutscene
#define SKIP_PEACH_CUTSCENE 0

// Debug Defines
// Test End Cutscene without beating Bowser 3
#define DEBUG_TEST_ENDCUTSCENE 0
// Test Credits without beating Bowser 3 (Recommended to use with TEST_ENDCUTSCENE)
#define DEBUG_TEST_CREDITS 0

// Screen Size Defines
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// What's the point of having a border if we're not an N64?
#define BORDER_HEIGHT 0 // Never use a border as not-N64

// Disables AA (Improves console performance but causes visible seams between unconnected geometry).
//#define DISABLE_AA

// Disables Dithering patterns (Cleaner image at the cost of color banding)
//#define DISABLE_DITHER

#define exit_course_death 0

#define Always_Start_0xA 0

#endif // CONFIG_H
