#ifndef BN_REGULAR_BG_ITEMS_SHIFT_H
#define BN_REGULAR_BG_ITEMS_SHIFT_H

#include "bn_regular_bg_item.h"

//{{BLOCK(shift_bn_gfx)

//======================================================================
//
//	shift_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 148 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 4736 + 2048 = 6816
//
//	Time-stamp: 2024-04-10, 16:06:44
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SHIFT_BN_GFX_H
#define GRIT_SHIFT_BN_GFX_H

#define shift_bn_gfxTilesLen 4736
extern const bn::tile shift_bn_gfxTiles[148];

#define shift_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell shift_bn_gfxMap[1024];

#define shift_bn_gfxPalLen 32
extern const bn::color shift_bn_gfxPal[16];

#endif // GRIT_SHIFT_BN_GFX_H

//}}BLOCK(shift_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item shift(
            regular_bg_tiles_item(span<const tile>(shift_bn_gfxTiles, 148), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(shift_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(shift_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

