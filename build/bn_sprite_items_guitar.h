#ifndef BN_SPRITE_ITEMS_GUITAR_H
#define BN_SPRITE_ITEMS_GUITAR_H

#include "bn_sprite_item.h"

//{{BLOCK(guitar_bn_gfx)

//======================================================================
//
//	guitar_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-04-12, 20:38:31
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_GUITAR_BN_GFX_H
#define GRIT_GUITAR_BN_GFX_H

#define guitar_bn_gfxTilesLen 256
extern const bn::tile guitar_bn_gfxTiles[8];

#define guitar_bn_gfxPalLen 32
extern const bn::color guitar_bn_gfxPal[16];

#endif // GRIT_GUITAR_BN_GFX_H

//}}BLOCK(guitar_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item guitar(sprite_shape_size(sprite_shape::TALL, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(guitar_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(guitar_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

