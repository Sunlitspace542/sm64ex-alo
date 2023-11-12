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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _vcutmSegmentRomStart, _vcutmSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x1e41700),
TERRAIN(col_vcutm_1_0xe048870),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,959,2820,-4961,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-4092,-513,-4747,0,-154,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(85,3580,-997,-809,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(122,-1164,2951,1306,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-5196,2851,1263,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4738,5940,-5258,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-1422,-1146,-2567,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1472,2084,-3738,0,0,0,0x5000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(215,-1551,-730,1154,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5178,-1210,3659,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5450,3357,4818,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5056,-574,719,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,3824,607,-4703,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3476,573,792,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(215,-5451,-571,-6047,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5372,-486,-6101,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1933,1548,748,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-49,3305,4769,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-5269,3815,1224,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-472,4040,4375,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-4044,5234,2642,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-1145,-313,3134,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-2094,-777,1258,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-1194,473,2504,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1198,469,1719,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1198,1042,1198,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(217,-653,-1090,935,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-341,-1090,902,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-126,-1090,1063,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,-1147,1823,2594,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-354,-569,2390,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,5180,-1358,4674,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(180,2529,-1080,1346,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3948,-1215,3611,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2503,5558,165,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(220,4191,-208,1700,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(137,-1722,3624,4297,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(223,-3593,-777,213,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,1772,-1134,4113,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,-4086,2760,1277,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(223,-2093,-600,-2900,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-1179,1615,2563,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,4747,-1248,1364,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-4686,-803,3985,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,447,1829,-4148,0,132,0,0x810000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2092,683,-6116,0,0,0,0x950000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,18,1,10,0),
WARP_NODE(11,18,1,10,0),
WARP_NODE(12,18,1,10,0),
WARP_NODE(13,18,1,10,0),
WARP_NODE(14,18,1,10,0),
WARP_NODE(240,31,1,3,0),
WARP_NODE(241,31,1,2,0),
WARP_NODE(0,18,1,10,0),
WARP_NODE(1,18,1,10,0),
WARP_NODE(2,18,1,10,0),
WARP_NODE(3,18,1,10,0),
WARP_NODE(4,18,1,10,0),
WARP_NODE(5,18,1,10,0),
WARP_NODE(6,18,1,10,0),
RETURN()
};
