#ifndef BN_SPRITE_ITEMS_TEXTL_H
#define BN_SPRITE_ITEMS_TEXTL_H

#include "bn_sprite_item.h"

//{{BLOCK(textl_bn_gfx)

//======================================================================
//
//	textl_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-04-12, 15:03:53
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TEXTL_BN_GFX_H
#define GRIT_TEXTL_BN_GFX_H

#define textl_bn_gfxTilesLen 2048
extern const bn::tile textl_bn_gfxTiles[64];

#define textl_bn_gfxPalLen 32
extern const bn::color textl_bn_gfxPal[16];

#endif // GRIT_TEXTL_BN_GFX_H

//}}BLOCK(textl_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item textl(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(textl_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(textl_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

