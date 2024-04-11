#ifndef BN_SPRITE_ITEMS_PLANT_H
#define BN_SPRITE_ITEMS_PLANT_H

#include "bn_sprite_item.h"

//{{BLOCK(plant_bn_gfx)

//======================================================================
//
//	plant_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2024-04-11, 15:19:17
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PLANT_BN_GFX_H
#define GRIT_PLANT_BN_GFX_H

#define plant_bn_gfxTilesLen 128
extern const bn::tile plant_bn_gfxTiles[4];

#define plant_bn_gfxPalLen 32
extern const bn::color plant_bn_gfxPal[16];

#endif // GRIT_PLANT_BN_GFX_H

//}}BLOCK(plant_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item plant(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(plant_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(plant_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

