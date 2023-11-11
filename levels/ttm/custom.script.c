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
#include "levels/ttm/header.h"
extern u8 _ttm_segment_ESegmentRomStart[]; 
extern u8 _ttm_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ttm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ttm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttm_1_[] = {
AREA(1,Geo_ttm_1_0x2c41700),
TERRAIN(col_ttm_1_0xe018ef0),
SET_BACKGROUND_MUSIC(0,48),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,3127,-1898,2891,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-1498,3351,1041,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-1702,-4394,-1892,0,-153,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2791,4566,2640,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2092,-3190,1147,0,-151,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1830,-1979,250,0,-24,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(24,1381,-3906,2149,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,1507,-3906,1462,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,2310,-3802,1089,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,2107,-3802,140,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,2214,-3802,-719,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,1051,-3802,126,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-407,-3802,-447,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-1345,-3802,-656,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,270,-3802,334,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(129,3349,-3021,-818,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,1180,2389,3327,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,3284,-2813,-1018,0,-2,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3090,-3490,-905,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3286,-2604,-679,-5,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,2357,-3385,2507,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,3159,-2448,-1129,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,3292,-3375,-1043,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(137,3238,-2448,-937,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2929,-833,422,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,3107,-856,1415,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,831,1146,-3463,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1372,833,-2224,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1158,1250,-1047,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-405,-573,790,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3620,3447,2163,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-392,1094,366,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(84,864,729,-3668,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,1000,729,-2441,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-686,729,-4382,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-1389,729,-3468,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-18,729,-2231,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(0,2381,973,141,0,0,-50,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,872,-1988,-3403,-92,-5,-4,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3230,-856,2635,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-353,468,489,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3023,468,190,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(101,2966,-2031,1662,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-338,-1012,-778,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,1009,-1979,2216,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-402,-2031,-122,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,1776,-2083,470,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(0,-172,468,-3755,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,840,468,-2947,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-1535,573,1354,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-1096,-1979,-3540,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,771,-1979,-4021,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(206,-284,677,-344,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,326,677,940,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1198,677,2767,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2270,677,402,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1693,677,2693,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1695,677,741,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(124,-368,468,-1473,0,-26,0,0x210000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
