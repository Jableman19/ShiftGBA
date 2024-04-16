#ifndef BN_SPRITE_ITEMS_FLOORMAT_H
#define BN_SPRITE_ITEMS_FLOORMAT_H

#include "bn_sprite_item.h"

//{{BLOCK(floormat_bn_gfx)

//======================================================================
//
//	floormat_bn_gfx, 64x32@4, 
//	+ palette 16 entries, not compressed
//	+ 32 tiles not compressed
//	Total size: 32 + 1024 = 1056
//
//	Time-stamp: 2024-04-12, 23:41:01
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FLOORMAT_BN_GFX_H
#define GRIT_FLOORMAT_BN_GFX_H

#define floormat_bn_gfxTilesLen 1024
extern const bn::tile floormat_bn_gfxTiles[32];

#define floormat_bn_gfxPalLen 32
extern const bn::color floormat_bn_gfxPal[16];

#endif // GRIT_FLOORMAT_BN_GFX_H

//}}BLOCK(floormat_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item floormat(sprite_shape_size(sprite_shape::WIDE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(floormat_bn_gfxTiles, 32), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(floormat_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

