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
#include "levels/bbh/header.h"
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_16),
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
TERRAIN(col_vcutm_1_0xe02b9f0),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,5499,2346,-5040,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,539,3794,-660,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(221,5498,4912,5565,0,0,0,0x88000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(215,-2889,-3051,2103,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3374,-3639,-4540,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1755,1098,339,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1602,-1103,-1399,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5483,2757,-5089,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-684,3202,4395,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6079,4492,5007,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1428,1020,2797,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,-5215,3357,658,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-4615,3207,1603,0,50,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4107,3207,2023,0,50,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3664,3207,2583,0,50,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3228,3207,3057,0,50,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,1691,424,-1420,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1739,424,-550,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1737,-1287,-567,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1828,-1287,296,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6011,2422,3496,0,54,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6872,2875,4965,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-58,-3360,3291,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-54,-3274,3417,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(220,4687,2627,4679,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4357,3668,-915,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-827,2974,-4251,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,4909,5406,5320,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,4578,2619,-5609,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,4319,2598,-4078,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,5193,5313,5652,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(124,5729,2055,-4888,0,63,0,0xa00000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-309,2844,-4031,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,27,1,240,0),
WARP_NODE(241,27,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
