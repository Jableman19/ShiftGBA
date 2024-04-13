#ifndef BN_SPRITE_ITEMS_BLACK_H
#define BN_SPRITE_ITEMS_BLACK_H

#include "bn_sprite_item.h"

//{{BLOCK(black_bn_gfx)

//======================================================================
//
//	black_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-04-12, 12:33:08
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BLACK_BN_GFX_H
#define GRIT_BLACK_BN_GFX_H

#define black_bn_gfxTilesLen 2048
extern const bn::tile black_bn_gfxTiles[64];

#define black_bn_gfxPalLen 32
extern const bn::color black_bn_gfxPal[16];

#endif // GRIT_BLACK_BN_GFX_H

//}}BLOCK(black_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item black(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(black_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(black_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

