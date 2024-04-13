#ifndef BN_SPRITE_ITEMS_SCREEN_H
#define BN_SPRITE_ITEMS_SCREEN_H

#include "bn_sprite_item.h"

//{{BLOCK(screen_bn_gfx)

//======================================================================
//
//	screen_bn_gfx, 32x64@4, 
//	+ palette 16 entries, not compressed
//	+ 32 tiles not compressed
//	Total size: 32 + 1024 = 1056
//
//	Time-stamp: 2024-04-12, 21:45:12
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SCREEN_BN_GFX_H
#define GRIT_SCREEN_BN_GFX_H

#define screen_bn_gfxTilesLen 1024
extern const bn::tile screen_bn_gfxTiles[32];

#define screen_bn_gfxPalLen 32
extern const bn::color screen_bn_gfxPal[16];

#endif // GRIT_SCREEN_BN_GFX_H

//}}BLOCK(screen_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item screen(sprite_shape_size(sprite_shape::TALL, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(screen_bn_gfxTiles, 32), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(screen_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

