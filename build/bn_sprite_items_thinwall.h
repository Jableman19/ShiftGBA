#ifndef BN_SPRITE_ITEMS_THINWALL_H
#define BN_SPRITE_ITEMS_THINWALL_H

#include "bn_sprite_item.h"

//{{BLOCK(thinwall_bn_gfx)

//======================================================================
//
//	thinwall_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-04-12, 15:14:09
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_THINWALL_BN_GFX_H
#define GRIT_THINWALL_BN_GFX_H

#define thinwall_bn_gfxTilesLen 2048
extern const bn::tile thinwall_bn_gfxTiles[64];

#define thinwall_bn_gfxPalLen 32
extern const bn::color thinwall_bn_gfxPal[16];

#endif // GRIT_THINWALL_BN_GFX_H

//}}BLOCK(thinwall_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item thinwall(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(thinwall_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(thinwall_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

