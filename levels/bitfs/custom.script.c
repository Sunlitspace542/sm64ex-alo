#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x1f21700),
TERRAIN(col_bitfs_1_0xe038e08),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-4688,-554,5691,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,3159,-40,1927,0,0,0,0xe0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-459,1003,5398,0,180,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-486,-1320,5502,0,0,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-1233,-899,5502,0,90,0,0xc0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(137,4457,1667,-854,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1499,-677,3709,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,-4575,3854,-850,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,7066,-951,-6347,0,0,0,0x2000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,7020,-184,-5553,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,2632,-104,-3273,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3816,0,-5561,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,4169,1406,-5641,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3639,-371,-2595,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(215,-2167,-1064,5299,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,351,417,1942,0,0,0,0x0, bhv1Up,64),
OBJECT_WITH_ACTS(215,-1260,1159,6299,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1341,-856,607,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5981,-1201,-5074,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1187,-937,2425,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-125,3021,1093,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4457,2056,-854,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-2345,-1354,3137,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(207,7489,-1423,-521,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(220,-788,-572,-1469,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(129,7383,-1605,-1816,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6563,-1461,-1816,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5459,-1275,-1570,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4142,-1275,-1570,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2739,-1461,-1634,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,4457,2396,-854,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,4993,-1357,-4319,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(217,4870,685,-1873,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,4870,990,-1620,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,4870,990,-2120,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,5120,990,-1873,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,4620,990,-1873,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(201,4870,1305,-1873,0,0,0,0x8c0000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-1344,2686,3057,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(220,-5126,-573,5652,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-3956,-521,5526,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,823,-729,4298,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4454,-521,4245,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(207,5030,-115,5845,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-1153,-1406,2687,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1153,-885,2064,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,5243,-181,6341,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,515,-1461,5515,0,90,0,0x10000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,-4955,2686,2830,0,0,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(220,-1515,-780,-1567,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(129,1623,-1461,-1634,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(122,2018,2530,2586,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(137,4814,3572,5915,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,4870,469,-1873,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(220,-294,-786,3658,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,-1064,-1197,-1530,90,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(145,-1288,-1250,6292,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-1294,-1250,4731,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,317,-1302,4719,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(0,317,-1302,6295,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(0,4332,-1302,4303,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,6180,-1410,-5705,0,1,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(129,4896,-1428,4684,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(223,4728,2686,4890,0,0,0,0x0, bhvChuckya,159),
OBJECT_WITH_ACTS(223,3422,2686,3964,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,2409,2686,1120,0,0,0,0x0, bhvChuckya,223),
OBJECT_WITH_ACTS(180,2377,2738,1109,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4447,2686,3915,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,331,3229,3223,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(120,-509,2790,3090,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(220,3984,3021,3886,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,4511,-1324,4238,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,-3796,-625,4534,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(144,-5447,-1354,4927,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5469,-1354,6354,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-4010,-1354,4896,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-4021,-1354,6332,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(206,-330,-833,3972,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1400,-885,5291,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-673,-833,-1994,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1475,-729,-1780,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(145,-3714,3229,-475,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-5449,3229,-482,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(217,-2814,-1510,-461,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-2814,-1099,-461,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(124,-3736,-1461,5703,0,-90,0,0x510000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1228,-1461,5513,0,90,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,351,417,1942,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,33,1,10,0),
WARP_NODE(11,19,1,11,0),
WARP_NODE(12,19,1,12,0),
WARP_NODE(13,19,1,14,0),
WARP_NODE(14,19,1,13,0),
WARP_NODE(240,31,1,240,0),
WARP_NODE(241,31,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
