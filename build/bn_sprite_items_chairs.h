#ifndef BN_SPRITE_ITEMS_CHAIRS_H
#define BN_SPRITE_ITEMS_CHAIRS_H

#include "bn_sprite_item.h"

//{{BLOCK(chairs_bn_gfx)

//======================================================================
//
//	chairs_bn_gfx, 32x16@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-04-11, 16:32:10
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CHAIRS_BN_GFX_H
#define GRIT_CHAIRS_BN_GFX_H

#define chairs_bn_gfxTilesLen 256
extern const bn::tile chairs_bn_gfxTiles[8];

#define chairs_bn_gfxPalLen 32
extern const bn::color chairs_bn_gfxPal[16];

#endif // GRIT_CHAIRS_BN_GFX_H

//}}BLOCK(chairs_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item chairs(sprite_shape_size(sprite_shape::WIDE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(chairs_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(chairs_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

