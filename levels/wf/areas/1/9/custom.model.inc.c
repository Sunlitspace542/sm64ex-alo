#include "custom.model.inc.h"
Vtx VB_wf_geo_000890_0x70072b0[] = {
{{{ -255, 65, 256 }, 0, { -1308, 338 }, { 0, 231, 124, 255}}},
{{{ 205, -62, 230 }, 0, { 990, 990 }, { 0, 231, 124, 255}}},
{{{ 256, 65, 256 }, 0, { 1246, 338 }, { 0, 231, 124, 255}}},
{{{ 256, 65, 256 }, 0, { -158, 302 }, { 117, 209, 0, 255}}},
{{{ 205, -62, -229 }, 0, { 2268, 990 }, { 117, 209, 0, 255}}},
{{{ 256, 65, -255 }, 0, { 2396, 302 }, { 117, 209, 0, 255}}},
{{{ 205, -62, 230 }, 0, { 0, 990 }, { 117, 209, 0, 255}}},
{{{ 256, 65, -255 }, 0, { -1308, 338 }, { 0, 231, 132, 255}}},
{{{ 205, -62, -229 }, 0, { -1052, 990 }, { 0, 231, 132, 255}}},
{{{ -204, -62, -229 }, 0, { 990, 990 }, { 0, 231, 132, 255}}},
{{{ -255, 65, -255 }, 0, { 1246, 338 }, { 0, 231, 132, 255}}},
{{{ -255, 65, -255 }, 0, { -1562, 0 }, { 139, 209, 0, 255}}},
{{{ -204, -62, 230 }, 0, { 862, 656 }, { 139, 209, 0, 255}}},
{{{ -255, 65, 256 }, 0, { 990, 0 }, { 139, 209, 0, 255}}},
{{{ -204, -62, -229 }, 0, { -1436, 656 }, { 139, 209, 0, 255}}},
};

Vtx VB_wf_geo_000890_0x70073a0[] = {
{{{ 205, -62, 230 }, 0, { -1052, 990 }, { 0, 129, 0, 255}}},
{{{ -204, -62, 230 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
{{{ -204, -62, -229 }, 0, { 990, -1310 }, { 0, 129, 0, 255}}},
{{{ -255, 65, 256 }, 0, { -1308, 338 }, { 0, 231, 124, 255}}},
{{{ -204, -62, 230 }, 0, { -1052, 990 }, { 0, 231, 124, 255}}},
{{{ 205, -62, 230 }, 0, { 990, 990 }, { 0, 231, 124, 255}}},
{{{ 205, -62, -229 }, 0, { -1052, -1310 }, { 0, 129, 0, 255}}},
};

Vtx VB_wf_geo_000890_0x7007410[] = {
{{{ 256, 65, -255 }, 0, { 990, -1566 }, { 0, 127, 0, 255}}},
{{{ -255, 65, 256 }, 0, { -1564, 990 }, { 0, 127, 0, 255}}},
{{{ 256, 65, 256 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -255, 65, -255 }, 0, { -1564, -1566 }, { 0, 127, 0, 255}}},
};

Light_t Light_wf_geo_000890_0x70072a0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000890_0x7007298 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000890_0x7007518[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000890_0x7007450),
gsSPDisplayList(DL_wf_geo_000890_0x70074e0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000890_0x7007450[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000890__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000890_0x70072a0.col, 1),
gsSPLight(&Light_wf_geo_000890_0x7007298.col, 2),
gsSPVertex(VB_wf_geo_000890_0x70072b0, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 14, 12, 0),
gsSPVertex(VB_wf_geo_000890_0x70073a0, 7, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(0, 2, 6, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000890_0x70074e0[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000890__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wf_geo_000890_0x7007410, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

