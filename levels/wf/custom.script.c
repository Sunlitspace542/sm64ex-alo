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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/ccm/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ccmSegmentRomStart, _ccmSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),
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
LOAD_MODEL_FROM_GEO(39, cabin_door_geo),
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2381700),
TERRAIN(col_wf_1_0xe021dc8),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,5157,-609,-6669,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,2884,-1190,-4361,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,-6415,-1259,6376,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,320,1942,-1080,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(144,4508,-66,-642,0,90,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(201,288,-3045,3148,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,-6037,9069,5520,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,2038,659,-6326,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(124,4787,-1042,-6738,0,86,0,0x30000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,-3608,-2348,-2212,0,121,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(87,-4434,-1171,3971,0,0,0,0x0, bhvBigBully,31),
OBJECT_WITH_ACTS(116,-2750,-1248,5083,0,0,0,0x0, bhvMoneybagHidden,31),
OBJECT_WITH_ACTS(100,3174,-1156,-6160,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(100,195,-1156,-5817,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(137,-3755,5981,-517,0,31,0,0x2080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,38,661,2756,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,396,661,3686,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,922,661,4387,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1424,1118,-6161,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,2455,-1480,-7705,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4515,-1094,6694,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4483,2149,106,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3023,450,2792,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1687,433,730,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,533,3296,-1651,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3087,1971,-2702,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3620,-2434,543,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(100,412,-3020,2413,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(100,2584,613,-6405,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(100,-589,-3020,3088,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(100,3996,270,-905,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(140,1103,1971,-1776,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,552,2353,-1404,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,552,2015,-1404,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-70,1971,-1422,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-70,2353,-1422,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,245,2493,-1412,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(122,-6122,4966,-398,0,90,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,922,270,4260,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1435,737,-6318,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3947,5566,-534,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5161,-980,-6880,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-296,3726,-1985,0,0,0,0x110000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,240,0),
WARP_NODE(0,31,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
