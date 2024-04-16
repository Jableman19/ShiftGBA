#ifndef BN_SPRITE_ITEMS_FUTON_H
#define BN_SPRITE_ITEMS_FUTON_H

#include "bn_sprite_item.h"

//{{BLOCK(futon_bn_gfx)

//======================================================================
//
//	futon_bn_gfx, 32x64@4, 
//	+ palette 16 entries, not compressed
//	+ 32 tiles not compressed
//	Total size: 32 + 1024 = 1056
//
//	Time-stamp: 2024-04-12, 23:46:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FUTON_BN_GFX_H
#define GRIT_FUTON_BN_GFX_H

#define futon_bn_gfxTilesLen 1024
extern const bn::tile futon_bn_gfxTiles[32];

#define futon_bn_gfxPalLen 32
extern const bn::color futon_bn_gfxPal[16];

#endif // GRIT_FUTON_BN_GFX_H

//}}BLOCK(futon_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item futon(sprite_shape_size(sprite_shape::TALL, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(futon_bn_gfxTiles, 32), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(futon_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

