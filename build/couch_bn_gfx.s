
@{{BLOCK(couch_bn_gfx)

@=======================================================================
@
@	couch_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-11, 14:15:46
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global couch_bn_gfxTiles		@ 256 unsigned chars
	.hidden couch_bn_gfxTiles
couch_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x11111110,0x66456641,0x66456641,0x11111111
	.word 0x11100000,0x16100000,0x16100000,0x16100000,0x15111111,0x14156645,0x16156645,0x16111111
	.word 0x46556451,0x46556451,0x11111110,0x36636610,0x36636610,0x35535510,0x24424410,0x36636610
	.word 0x15154655,0x15154655,0x16111111,0x16166366,0x14166366,0x15155355,0x16144244,0x16166366
	.word 0x36636610,0x35535510,0x24424410,0x36636610,0x36636610,0x35535510,0x11111110,0x45665461
	.word 0x15166366,0x14155355,0x16144244,0x16166366,0x11166366,0x15155355,0x15111111,0x16164566
	.word 0x45665461,0x11111111,0x55645561,0x55645561,0x11111110,0x54554551,0x64664661,0x11111110
	.word 0x14164566,0x15111111,0x15165546,0x16165546,0x11111111,0x15545545,0x16646646,0x01111111

	.section .rodata
	.align	2
	.global couch_bn_gfxPal		@ 32 unsigned chars
	.hidden couch_bn_gfxPal
couch_bn_gfxPal:
	.hword 0x117E,0x0848,0x0082,0x0C6D,0x04C5,0x1090,0x0507,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(couch_bn_gfx)
