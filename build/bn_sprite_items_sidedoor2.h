#ifndef BN_SPRITE_ITEMS_SIDEDOOR2_H
#define BN_SPRITE_ITEMS_SIDEDOOR2_H

#include "bn_sprite_item.h"

//{{BLOCK(sidedoor2_bn_gfx)

//======================================================================
//
//	sidedoor2_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2024-04-19, 14:55:30
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SIDEDOOR2_BN_GFX_H
#define GRIT_SIDEDOOR2_BN_GFX_H

#define sidedoor2_bn_gfxTilesLen 128
extern const bn::tile sidedoor2_bn_gfxTiles[4];

#define sidedoor2_bn_gfxPalLen 32
extern const bn::color sidedoor2_bn_gfxPal[16];

#endif // GRIT_SIDEDOOR2_BN_GFX_H

//}}BLOCK(sidedoor2_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item sidedoor2(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(sidedoor2_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(sidedoor2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

