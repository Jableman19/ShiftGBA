#ifndef BN_SPRITE_ITEMS_PSPRITE_H
#define BN_SPRITE_ITEMS_PSPRITE_H

#include "bn_sprite_item.h"

//{{BLOCK(psprite_bn_gfx)

//======================================================================
//
//	psprite_bn_gfx, 32x256@4, 
//	+ palette 16 entries, not compressed
//	+ 128 tiles not compressed
//	Total size: 32 + 4096 = 4128
//
//	Time-stamp: 2024-04-10, 13:18:54
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PSPRITE_BN_GFX_H
#define GRIT_PSPRITE_BN_GFX_H

#define psprite_bn_gfxTilesLen 4096
extern const bn::tile psprite_bn_gfxTiles[128];

#define psprite_bn_gfxPalLen 32
extern const bn::color psprite_bn_gfxPal[16];

#endif // GRIT_PSPRITE_BN_GFX_H

//}}BLOCK(psprite_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item psprite(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(psprite_bn_gfxTiles, 128), bpp_mode::BPP_4, compression_type::NONE, 8), 
            sprite_palette_item(span<const color>(psprite_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

