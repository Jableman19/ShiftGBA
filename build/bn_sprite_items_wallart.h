#ifndef BN_SPRITE_ITEMS_WALLART_H
#define BN_SPRITE_ITEMS_WALLART_H

#include "bn_sprite_item.h"

//{{BLOCK(wallart_bn_gfx)

//======================================================================
//
//	wallart_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-04-13, 13:15:03
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WALLART_BN_GFX_H
#define GRIT_WALLART_BN_GFX_H

#define wallart_bn_gfxTilesLen 2048
extern const bn::tile wallart_bn_gfxTiles[64];

#define wallart_bn_gfxPalLen 32
extern const bn::color wallart_bn_gfxPal[16];

#endif // GRIT_WALLART_BN_GFX_H

//}}BLOCK(wallart_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item wallart(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(wallart_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(wallart_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

