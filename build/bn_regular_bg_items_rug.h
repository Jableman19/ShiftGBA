#ifndef BN_REGULAR_BG_ITEMS_RUG_H
#define BN_REGULAR_BG_ITEMS_RUG_H

#include "bn_regular_bg_item.h"

//{{BLOCK(rug_bn_gfx)

//======================================================================
//
//	rug_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 50 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 1600 + 2048 = 3680
//
//	Time-stamp: 2024-04-12, 18:43:21
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_RUG_BN_GFX_H
#define GRIT_RUG_BN_GFX_H

#define rug_bn_gfxTilesLen 1600
extern const bn::tile rug_bn_gfxTiles[50];

#define rug_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell rug_bn_gfxMap[1024];

#define rug_bn_gfxPalLen 32
extern const bn::color rug_bn_gfxPal[16];

#endif // GRIT_RUG_BN_GFX_H

//}}BLOCK(rug_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item rug(
            regular_bg_tiles_item(span<const tile>(rug_bn_gfxTiles, 50), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(rug_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(rug_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

