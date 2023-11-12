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
#include "levels/sl/header.h"
extern u8 _sl_segment_ESegmentRomStart[]; 
extern u8 _sl_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_sl_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _sl_segment_ESegmentRomStart, _sl_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom25132736_skybox_mio0SegmentRomStart,_SkyboxCustom25132736_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_sl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sl_1_[] = {
AREA(1,Geo_sl_1_0x1741700),
TERRAIN(col_sl_1_0xe05e318),
SET_BACKGROUND_MUSIC(0,30),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_sl_1_),
JUMP_LINK(local_warps_sl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sl_1_[] = {
OBJECT_WITH_ACTS(0,-2075,-2140,-721,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,2257,3605,-6331,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-2906,2753,5564,0,-153,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6117,684,-4533,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6522,-1761,2639,0,-151,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-6368,-2206,2544,0,112,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,-2929,0,6681,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,6513,-3191,-2261,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(207,2533,1629,287,0,0,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(89,3266,441,5520,0,63,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,3912,-101,5548,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,5307,-1298,3922,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-6840,-887,-6103,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(215,4833,-1510,-5958,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4732,-984,5858,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3678,4362,1773,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3596,-1805,-5170,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4078,143,-5099,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4910,-700,-5891,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5376,-1024,3384,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4201,3279,-3598,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,-1340,2363,6307,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2217,1684,1415,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(100,1801,1246,5154,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,1713,1246,6020,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(89,388,1246,5965,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,535,1246,5066,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(124,5125,-1715,6112,0,256,0,0x830000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,3503,3302,-419,0,0,0,0x820000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,4567,2441,-5771,0,324,0,0x810000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2072,-2476,-887,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3836,-623,6634,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6106,273,-4605,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4557,2454,-5864,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4871,-1860,-4814,0,201,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4713,-302,-4715,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,-2878,2579,3666,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-2624,2621,3419,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1782,2842,2582,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-503,2979,1653,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,492,3130,983,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1298,3415,360,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,3391,2283,-4760,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4746,-1290,5349,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5067,-285,-7045,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3486,-1007,-5509,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2889,3302,460,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2720,2224,5587,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3000,-1866,-6358,0,0,0,0x0, bhvGoombaTripletSpawner,31),
RETURN()
};
const LevelScript local_warps_sl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
