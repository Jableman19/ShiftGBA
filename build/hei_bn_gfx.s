
@{{BLOCK(hei_bn_gfx)

@=======================================================================
@
@	hei_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-04-11, 22:49:57
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global hei_bn_gfxTiles		@ 128 unsigned chars
	.hidden hei_bn_gfxTiles
hei_bn_gfxTiles:
	.word 0x00000044,0x00004444,0x00044344,0x44443340,0x44444400,0x42244000,0x45244000,0x44444000
	.word 0x44000000,0x44440000,0x44344000,0x34334444,0x03444444,0x00344224,0x00044254,0x00044444
	.word 0x24443000,0x44430000,0x44300000,0x33400000,0x44440000,0x44434000,0x44333000,0x01313100
	.word 0x00034442,0x00003454,0x00000344,0x00000433,0x00004444,0x00043444,0x00033344,0x00131310

	.section .rodata
	.align	2
	.global hei_bn_gfxPal		@ 32 unsigned chars
	.hidden hei_bn_gfxPal
hei_bn_gfxPal:
	.hword 0x11BF,0x0000,0x0CA9,0x2A57,0x3AFA,0x7FFF,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(hei_bn_gfx)
