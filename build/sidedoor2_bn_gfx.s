
@{{BLOCK(sidedoor2_bn_gfx)

@=======================================================================
@
@	sidedoor2_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-04-19, 14:55:30
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global sidedoor2_bn_gfxTiles		@ 128 unsigned chars
	.hidden sidedoor2_bn_gfxTiles
sidedoor2_bn_gfxTiles:
	.word 0x11000000,0x33111000,0x13333111,0x11333331,0x11331334,0x31331134,0x33331131,0x43333131
	.word 0x00000001,0x00000013,0x00000013,0x00000013,0x00000013,0x00000013,0x00000013,0x00000013
	.word 0x11333331,0x11331331,0x31331131,0x33331131,0x33333131,0x11333334,0x22111334,0x02222111
	.word 0x00000013,0x00000013,0x00000013,0x00000013,0x00000013,0x00000021,0x00000022,0x00000000

	.section .rodata
	.align	2
	.global sidedoor2_bn_gfxPal		@ 32 unsigned chars
	.hidden sidedoor2_bn_gfxPal
sidedoor2_bn_gfxPal:
	.hword 0x11BF,0x0CA8,0x1D0A,0x192D,0x09D0,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(sidedoor2_bn_gfx)
