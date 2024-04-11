#ifndef BN_SPRITE_ITEMS_COUCH_H
#define BN_SPRITE_ITEMS_COUCH_H

#include "bn_sprite_item.h"

//{{BLOCK(couch_bn_gfx)

//======================================================================
//
//	couch_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-04-11, 14:15:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_COUCH_BN_GFX_H
#define GRIT_COUCH_BN_GFX_H

#define couch_bn_gfxTilesLen 256
extern const bn::tile couch_bn_gfxTiles[8];

#define couch_bn_gfxPalLen 32
extern const bn::color couch_bn_gfxPal[16];

#endif // GRIT_COUCH_BN_GFX_H

//}}BLOCK(couch_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item couch(sprite_shape_size(sprite_shape::TALL, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(couch_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(couch_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

