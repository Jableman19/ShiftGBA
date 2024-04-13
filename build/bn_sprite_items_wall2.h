#ifndef BN_SPRITE_ITEMS_WALL2_H
#define BN_SPRITE_ITEMS_WALL2_H

#include "bn_sprite_item.h"

//{{BLOCK(wall2_bn_gfx)

//======================================================================
//
//	wall2_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-04-12, 20:53:36
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WALL2_BN_GFX_H
#define GRIT_WALL2_BN_GFX_H

#define wall2_bn_gfxTilesLen 2048
extern const bn::tile wall2_bn_gfxTiles[64];

#define wall2_bn_gfxPalLen 32
extern const bn::color wall2_bn_gfxPal[16];

#endif // GRIT_WALL2_BN_GFX_H

//}}BLOCK(wall2_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item wall2(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(wall2_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(wall2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

