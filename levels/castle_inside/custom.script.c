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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(28, castle_door_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
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
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x13c1700),
TERRAIN(col_castle_inside_1_0xe02b780),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,1853,-725,-476,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,1662,-1002,-1096,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(31,323,-980,-1449,0,270,0,0x64000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,324,-980,-1302,0,90,0,0x64000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,-1711,-645,-3832,0,90,0,0x50000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,-1711,-645,-3979,0,-90,0,0x50000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,2783,-598,883,0,180,0,0x5a000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,2636,-598,884,0,0,0,0x5a000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,3997,-804,3221,0,240,0,0x6e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(31,3924,-804,3343,0,60,0,0x6e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(124,468,-976,-1575,0,90,0,0x930000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2561,-619,805,0,180,0,0x940000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1814,-619,-3734,0,-90,0,0x950000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1944,-976,-1402,0,90,0,0x9a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,3779,-798,3341,0,236,0,0x9c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-4174,543,-1593,0,0,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-476,-762,3072,0,0,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,3468,-1069,-3775,0,0,0,0xe0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-866,-772,-3798,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2697,-732,2129,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-479,-976,-1254,0,0,0,0x20000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,4550,-766,3533,0,0,0,0x30000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,1207,-279,-611,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1207,-279,-611,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,27,1,10,0),
WARP_NODE(12,10,1,10,0),
WARP_NODE(13,11,1,10,0),
WARP_NODE(14,36,1,10,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,13,1,10,0),
WARP_NODE(1,14,1,10,0),
WARP_NODE(2,15,1,10,0),
WARP_NODE(3,21,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
