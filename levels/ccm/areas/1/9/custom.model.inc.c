#include "custom.model.inc.h"
Vtx VB_ccm_geo_0004BC_0x700fb90[] = {
{{{ -123, -613, 238 }, 0, { 0, 990 }, { 143, 0, 56, 255}}},
{{{ -283, 666, -85 }, 0, { 690, 138 }, { 143, 0, 56, 255}}},
{{{ -283, -613, -85 }, 0, { 690, 990 }, { 143, 0, 56, 255}}},
{{{ 201, -613, 78 }, 0, { 690, 990 }, { 56, 0, 113, 255}}},
{{{ 201, 666, 78 }, 0, { 690, -288 }, { 56, 0, 113, 255}}},
{{{ -123, 666, 238 }, 0, { 0, -288 }, { 56, 0, 113, 255}}},
{{{ -123, -613, 238 }, 0, { 0, 990 }, { 56, 0, 113, 255}}},
{{{ 41, -613, -246 }, 0, { 690, 990 }, { 113, 0, 200, 255}}},
{{{ 41, 666, -246 }, 0, { 690, 138 }, { 113, 0, 200, 255}}},
{{{ 201, 666, 78 }, 0, { 0, 138 }, { 113, 0, 200, 255}}},
{{{ 201, -613, 78 }, 0, { 0, 990 }, { 113, 0, 200, 255}}},
{{{ -283, -613, -85 }, 0, { 690, 1244 }, { 200, 0, 143, 255}}},
{{{ 41, 666, -246 }, 0, { 0, 0 }, { 200, 0, 143, 255}}},
{{{ 41, -613, -246 }, 0, { 0, 1244 }, { 200, 0, 143, 255}}},
{{{ -283, 666, -85 }, 0, { 690, 0 }, { 200, 0, 143, 255}}},
{{{ -123, 666, 238 }, 0, { 0, 138 }, { 143, 0, 56, 255}}},
};

Light_t Light_ccm_geo_0004BC_0x700fb80 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ccm_geo_0004BC_0x700fb78 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ccm_geo_0004BC_0x700fd08[] = {
gsDPPipeSync(),
gsDPSetEnvColor(255, 255, 255, 90),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ccm_geo_0004BC_0x700fc90),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

Gfx DL_ccm_geo_0004BC_0x700fc90[] = {
gsDPSetTextureImage(0, 2, 1, ccm_geo_0004BC__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ccm_geo_0004BC_0x700fb80.col, 1),
gsSPLight(&Light_ccm_geo_0004BC_0x700fb78.col, 2),
gsSPVertex(VB_ccm_geo_0004BC_0x700fb90, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};

