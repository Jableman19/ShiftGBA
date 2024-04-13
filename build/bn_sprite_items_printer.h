#ifndef BN_SPRITE_ITEMS_PRINTER_H
#define BN_SPRITE_ITEMS_PRINTER_H

#include "bn_sprite_item.h"

//{{BLOCK(printer_bn_gfx)

//======================================================================
//
//	printer_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2024-04-12, 19:51:40
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PRINTER_BN_GFX_H
#define GRIT_PRINTER_BN_GFX_H

#define printer_bn_gfxTilesLen 512
extern const bn::tile printer_bn_gfxTiles[16];

#define printer_bn_gfxPalLen 32
extern const bn::color printer_bn_gfxPal[16];

#endif // GRIT_PRINTER_BN_GFX_H

//}}BLOCK(printer_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item printer(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(printer_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(printer_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

