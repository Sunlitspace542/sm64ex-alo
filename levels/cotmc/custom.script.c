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
#include "levels/cotmc/header.h"
extern u8 _cotmc_segment_ESegmentRomStart[]; 
extern u8 _cotmc_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_cotmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x2701700),
TERRAIN(col_cotmc_1_0xe01c158),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,1839,151,-2030,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,-5138,4311,3056,0,-180,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(122,-336,5310,-3770,0,-153,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(217,-320,4657,-3820,0,28,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,4941,446,-5430,0,-151,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,3934,959,-3243,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5048,-576,-2381,0,0,0,0x0, bhvRedCoin,64),
OBJECT_WITH_ACTS(215,2332,-365,2303,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3314,-576,5511,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1057,1036,-1950,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4272,1996,440,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2781,2965,4125,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3550,1740,806,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,3937,-365,3160,0,73,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,711,2001,658,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-2918,2861,5248,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-4365,2861,3315,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4367,3251,2875,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4463,3451,2621,0,46,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4733,3850,2356,0,46,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,-5205,4571,3642,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,1364,-680,-1387,0,139,0,0x820000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2437,-524,1929,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2274,1792,837,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1708,-472,-4726,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-1251,-469,-1429,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,1356,1152,-3974,0,84,0,0x240000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,835,2372,3891,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-2116,3174,4032,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(217,4136,417,-2557,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-82,1042,-299,0,22,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-589,4657,-3683,0,28,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-445,4657,-3432,0,28,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-191,4657,-3579,0,28,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(206,-589,-208,-516,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2099,-365,6077,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-2062,1198,-2405,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,464,0,-3558,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,3450,2344,3670,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,3452,2396,4534,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-6202,-260,-4514,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-3911,1302,-2655,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(217,-3784,1354,-910,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(212,-5970,3229,2987,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(215,-5048,-576,-2381,0,0,0,0x0, bhvRedCoin,31),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,28,1,10,0),
WARP_NODE(11,28,1,10,0),
WARP_NODE(12,28,1,10,0),
WARP_NODE(13,28,1,10,0),
WARP_NODE(14,28,1,10,0),
WARP_NODE(240,26,1,31,0),
WARP_NODE(241,26,1,32,0),
WARP_NODE(0,28,1,10,0),
WARP_NODE(1,28,1,10,0),
WARP_NODE(2,28,1,10,0),
WARP_NODE(3,28,1,10,0),
WARP_NODE(4,28,1,10,0),
WARP_NODE(5,28,1,10,0),
WARP_NODE(6,28,1,10,0),
RETURN()
};
