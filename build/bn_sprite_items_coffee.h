#ifndef BN_SPRITE_ITEMS_COFFEE_H
#define BN_SPRITE_ITEMS_COFFEE_H

#include "bn_sprite_item.h"

//{{BLOCK(coffee_bn_gfx)

//======================================================================
//
//	coffee_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-04-11, 16:05:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_COFFEE_BN_GFX_H
#define GRIT_COFFEE_BN_GFX_H

#define coffee_bn_gfxTilesLen 256
extern const bn::tile coffee_bn_gfxTiles[8];

#define coffee_bn_gfxPalLen 32
extern const bn::color coffee_bn_gfxPal[16];

#endif // GRIT_COFFEE_BN_GFX_H

//}}BLOCK(coffee_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item coffee(sprite_shape_size(sprite_shape::TALL, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(coffee_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(coffee_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

