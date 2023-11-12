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
#include "levels/bob/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
TERRAIN(col_bitfs_1_0xe025e48),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-1600,-2729,-3366,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1407,-2893,807,0,0,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,1486,3966,-2574,0,-90,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(122,4715,-3265,2846,0,107,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-2513,1620,815,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-248,-2740,-4617,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,133,-2789,1224,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4528,-2857,782,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-199,156,2679,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1569,154,2331,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3764,3098,-392,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4212,3181,3587,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2925,-2740,-4710,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(22,-1425,-2906,1491,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(144,-852,-2381,524,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-1961,-2381,555,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1094,4512,-2113,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1111,4512,-3094,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,2044,4512,-2080,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,2041,4512,-3094,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(220,-1788,-2299,-1008,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,3004,-2299,396,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,1956,-2591,-376,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-773,-2299,-186,0,0,0,0x10000, bhvFlyGuy,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,33,1,10,0),
WARP_NODE(12,9,1,11,0),
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
