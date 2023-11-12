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
#include "levels/bitdw/header.h"
extern u8 _bitdw_segment_ESegmentRomStart[]; 
extern u8 _bitdw_segment_ESegmentRomEnd[];
const LevelScript level_bitdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _bitdw_segment_ESegmentRomStart, _bitdw_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bitdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitdw_1_[] = {
AREA(1,Geo_bitdw_1_0x1d61700),
TERRAIN(col_bitdw_1_0xe01dce0),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(0,-4614,-4324,4815,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,456,-4771,-2910,0,-154,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(122,-2956,1679,-3640,0,-153,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,1123,1557,1645,0,107,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(22,-121,1070,-196,0,-151,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,1444,-108,963,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2745,1466,2883,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(100,-382,966,887,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,3307,-4771,3888,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2398,-4771,-974,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(207,-4356,276,-1025,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-3366,276,-997,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3083,607,-937,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2675,842,-910,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2298,842,-948,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1964,842,-936,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1656,842,-848,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(124,84,1070,34,0,0,0,0x20000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,4464,-4771,4621,0,180,0,0x10000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(144,-597,767,2403,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(129,-4759,878,-3988,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,-4866,-4771,5182,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4394,763,5115,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4203,-4326,-3545,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,746,-4581,-4905,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4619,843,-6989,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5550,763,4682,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6155,922,5574,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6940,763,-6023,0,0,0,0x0, bhvRedCoin,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,30,1,10,0),
WARP_NODE(12,17,1,12,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
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
