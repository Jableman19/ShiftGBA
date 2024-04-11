
@{{BLOCK(coffee_bn_gfx)

@=======================================================================
@
@	coffee_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-11, 16:05:28
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global coffee_bn_gfxTiles		@ 256 unsigned chars
	.hidden coffee_bn_gfxTiles
coffee_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x55555500,0x55556500,0x55555500,0x55555500
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00555555,0x00565555,0x00555555,0x00555555
	.word 0x55555500,0x55555500,0x55555500,0x55555500,0x55555500,0x55555500,0x55555500,0x55555500
	.word 0x00555555,0x00555555,0x00555555,0x00555555,0x00555555,0x00555555,0x00555555,0x00555555
	.word 0x55555500,0x55555500,0x55555500,0x55555500,0x55555500,0x55555500,0x55555500,0x55555500
	.word 0x00555555,0x00555555,0x00555555,0x00555555,0x00555555,0x00555555,0x00555555,0x00555555
	.word 0x55556500,0x55555500,0x44444400,0x33331300,0x22222200,0x22222200,0x22222200,0x00000000
	.word 0x00565555,0x00555555,0x00444444,0x00333333,0x00222222,0x00222222,0x00222222,0x00000000

	.section .rodata
	.align	2
	.global coffee_bn_gfxPal		@ 32 unsigned chars
	.hidden coffee_bn_gfxPal
coffee_bn_gfxPal:
	.hword 0x11BF,0x0000,0x0CC8,0x10EA,0x152C,0x194E,0x2D6B,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(coffee_bn_gfx)
