#include "custom.model.inc.h"
Vtx VB_bits_geo_000658_0x7013ce8[] = {
{{{ -460, 102, -306 }, 0, { 990, -10 }, { 125, 125, 125, 255}}},
{{{ 461, 0, -306 }, 0, { 990, 968 }, { 125, 125, 125, 255}}},
{{{ -460, 0, -306 }, 0, { 990, -10 }, { 125, 125, 125, 255}}},
{{{ 461, 102, -306 }, 0, { 990, 968 }, { 125, 125, 125, 255}}},
{{{ -460, 0, 307 }, 0, { 0, -10 }, { 125, 125, 125, 255}}},
{{{ 461, 0, 307 }, 0, { 0, 968 }, { 125, 125, 125, 255}}},
{{{ 461, 102, 307 }, 0, { 0, 968 }, { 125, 125, 125, 255}}},
{{{ -460, 102, 307 }, 0, { 0, -10 }, { 125, 125, 125, 255}}},
{{{ -460, 0, -306 }, 0, { 990, -10 }, { 85, 85, 85, 255}}},
{{{ 461, 0, 307 }, 0, { 0, 968 }, { 85, 85, 85, 255}}},
{{{ -460, 0, 307 }, 0, { 0, -10 }, { 85, 85, 85, 255}}},
{{{ 461, 0, -306 }, 0, { 990, 968 }, { 85, 85, 85, 255}}},
{{{ 461, 102, -306 }, 0, { 990, 968 }, { 255, 255, 255, 255}}},
{{{ -460, 102, -306 }, 0, { 990, -10 }, { 255, 255, 255, 255}}},
{{{ -460, 102, 307 }, 0, { 0, -10 }, { 255, 255, 255, 255}}},
{{{ 461, 102, 307 }, 0, { 0, 968 }, { 255, 255, 255, 255}}},
};

Vtx VB_bits_geo_000658_0x7013de8[] = {
{{{ -460, 0, 307 }, 0, { 0, -10 }, { 150, 150, 150, 255}}},
{{{ -460, 102, -306 }, 0, { 990, -10 }, { 150, 150, 150, 255}}},
{{{ -460, 0, -306 }, 0, { 990, -10 }, { 150, 150, 150, 255}}},
{{{ -460, 102, 307 }, 0, { 0, -10 }, { 150, 150, 150, 255}}},
{{{ 461, 102, -306 }, 0, { 990, 968 }, { 150, 150, 150, 255}}},
{{{ 461, 0, 307 }, 0, { 0, 968 }, { 150, 150, 150, 255}}},
{{{ 461, 0, -306 }, 0, { 990, 968 }, { 150, 150, 150, 255}}},
{{{ 461, 102, 307 }, 0, { 0, 968 }, { 150, 150, 150, 255}}},
};

Gfx DL_bits_geo_000658_0x7013ef8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bits_geo_000658_0x7013e68),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bits_geo_000658_0x7013e68[] = {
gsDPSetTextureImage(0, 2, 1, bits_geo_000658__texture_07002000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bits_geo_000658_0x7013ce8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPVertex(VB_bits_geo_000658_0x7013de8, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

