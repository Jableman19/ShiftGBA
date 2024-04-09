#ifndef BN_SPRITE_ITEMS_BASIC2_H
#define BN_SPRITE_ITEMS_BASIC2_H

#include "bn_sprite_item.h"

//{{BLOCK(basic2_bn_gfx)

//======================================================================
//
//	basic2_bn_gfx, 32x256@4, 
//	+ palette 16 entries, not compressed
//	+ 128 tiles not compressed
//	Total size: 32 + 4096 = 4128
//
//	Time-stamp: 2024-04-09, 12:45:40
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BASIC2_BN_GFX_H
#define GRIT_BASIC2_BN_GFX_H

#define basic2_bn_gfxTilesLen 4096
extern const bn::tile basic2_bn_gfxTiles[128];

#define basic2_bn_gfxPalLen 32
extern const bn::color basic2_bn_gfxPal[16];

#endif // GRIT_BASIC2_BN_GFX_H

//}}BLOCK(basic2_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item basic2(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(basic2_bn_gfxTiles, 128), bpp_mode::BPP_4, compression_type::NONE, 8), 
            sprite_palette_item(span<const color>(basic2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

