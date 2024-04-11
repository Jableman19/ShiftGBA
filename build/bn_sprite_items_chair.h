#ifndef BN_SPRITE_ITEMS_CHAIR_H
#define BN_SPRITE_ITEMS_CHAIR_H

#include "bn_sprite_item.h"

//{{BLOCK(chair_bn_gfx)

//======================================================================
//
//	chair_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-04-11, 13:30:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CHAIR_BN_GFX_H
#define GRIT_CHAIR_BN_GFX_H

#define chair_bn_gfxTilesLen 256
extern const bn::tile chair_bn_gfxTiles[8];

#define chair_bn_gfxPalLen 32
extern const bn::color chair_bn_gfxPal[16];

#endif // GRIT_CHAIR_BN_GFX_H

//}}BLOCK(chair_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item chair(sprite_shape_size(sprite_shape::TALL, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(chair_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(chair_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

