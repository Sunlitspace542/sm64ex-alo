#include "custom.model.inc.h"
Vtx VB_wf_geo_000AE0_0x7009e48[] = {
{{{ 15, 0, 0 }, 0, { 1502, 990 }, { 111, 0, 60, 255}}},
{{{ 8, 2100, 13 }, 0, { 990, -19972 }, { 111, 0, 60, 255}}},
{{{ 8, 0, 13 }, 0, { 990, 990 }, { 111, 0, 60, 255}}},
{{{ -7, 2100, -12 }, 0, { 156, 1020 }, { 0, 127, 0, 255}}},
{{{ -14, 2100, 0 }, 0, { 768, 1020 }, { 0, 127, 0, 255}}},
{{{ -7, 2100, 13 }, 0, { 1076, 490 }, { 0, 127, 0, 255}}},
{{{ 8, 2100, 13 }, 0, { 768, -40 }, { 0, 127, 0, 255}}},
{{{ 15, 2100, 0 }, 0, { 156, -40 }, { 0, 127, 0, 255}}},
{{{ 8, 2100, -12 }, 0, { -150, 490 }, { 0, 127, 0, 255}}},
{{{ 8, 0, 13 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ -7, 2100, 13 }, 0, { 480, -19972 }, { 0, 0, 127, 255}}},
{{{ -7, 0, 13 }, 0, { 480, 990 }, { 0, 0, 127, 255}}},
{{{ -7, 0, 13 }, 0, { 480, 990 }, { 145, 0, 60, 255}}},
{{{ -14, 2100, 0 }, 0, { 0, -19972 }, { 145, 0, 60, 255}}},
{{{ -14, 0, 0 }, 0, { 0, 990 }, { 145, 0, 60, 255}}},
{{{ -7, 2100, 13 }, 0, { 480, -19972 }, { 145, 0, 60, 255}}},
};

Vtx VB_wf_geo_000AE0_0x7009f48[] = {
{{{ 8, 0, 13 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ 8, 2100, 13 }, 0, { 990, -19972 }, { 0, 0, 127, 255}}},
{{{ -7, 2100, 13 }, 0, { 480, -19972 }, { 0, 0, 127, 255}}},
{{{ -14, 0, 0 }, 0, { 3034, 990 }, { 147, 0, 193, 255}}},
{{{ -14, 2100, 0 }, 0, { 3034, -19972 }, { 147, 0, 193, 255}}},
{{{ -7, 2100, -12 }, 0, { 2524, -19972 }, { 147, 0, 193, 255}}},
{{{ 15, 0, 0 }, 0, { 1502, 990 }, { 111, 0, 60, 255}}},
{{{ 15, 2100, 0 }, 0, { 1502, -19972 }, { 111, 0, 60, 255}}},
{{{ 8, 2100, 13 }, 0, { 990, -19972 }, { 111, 0, 60, 255}}},
{{{ 8, 0, -12 }, 0, { 2012, 990 }, { 109, 0, 193, 255}}},
{{{ 15, 2100, 0 }, 0, { 1502, -19972 }, { 109, 0, 193, 255}}},
{{{ 15, 0, 0 }, 0, { 1502, 990 }, { 109, 0, 193, 255}}},
{{{ 8, 2100, -12 }, 0, { 2012, -19972 }, { 109, 0, 193, 255}}},
{{{ -7, 0, -12 }, 0, { 2524, 990 }, { 0, 0, 129, 255}}},
{{{ 8, 2100, -12 }, 0, { 2012, -19972 }, { 0, 0, 129, 255}}},
{{{ 8, 0, -12 }, 0, { 2012, 990 }, { 0, 0, 129, 255}}},
};

Vtx VB_wf_geo_000AE0_0x700a048[] = {
{{{ -7, 0, -12 }, 0, { 2524, 990 }, { 0, 0, 129, 255}}},
{{{ -7, 2100, -12 }, 0, { 2524, -19972 }, { 0, 0, 129, 255}}},
{{{ 8, 2100, -12 }, 0, { 2012, -19972 }, { 0, 0, 129, 255}}},
{{{ -14, 0, 0 }, 0, { 3034, 990 }, { 147, 0, 193, 255}}},
{{{ -7, 2100, -12 }, 0, { 2524, -19972 }, { 147, 0, 193, 255}}},
{{{ -7, 0, -12 }, 0, { 2524, 990 }, { 147, 0, 193, 255}}},
};

Light_t Light_wf_geo_000AE0_0x7009e38 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000AE0_0x7009e30 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000AE0_0x700a170[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000AE0_0x700a0a8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000AE0_0x700a0a8[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000AE0__texture_09007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000AE0_0x7009e38.col, 1),
gsSPLight(&Light_wf_geo_000AE0_0x7009e30.col, 2),
gsSPVertex(VB_wf_geo_000AE0_0x7009e48, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,3, 6, 7, 0),
gsSP2Triangles(3, 7, 8, 0,9, 10, 11, 0),
gsSP2Triangles(12, 13, 14, 0,12, 15, 13, 0),
gsSPVertex(VB_wf_geo_000AE0_0x7009f48, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSP2Triangles(9, 12, 10, 0,13, 14, 15, 0),
gsSPVertex(VB_wf_geo_000AE0_0x700a048, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPEndDisplayList(),
};

