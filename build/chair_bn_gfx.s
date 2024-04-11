
@{{BLOCK(chair_bn_gfx)

@=======================================================================
@
@	chair_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-11, 13:30:28
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global chair_bn_gfxTiles		@ 256 unsigned chars
	.hidden chair_bn_gfxTiles
chair_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02000000,0x02500000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x02500000,0x02500000,0x02500000,0x02500000,0x02500000,0x02500000,0x02500000,0x02500000
	.word 0x55555500,0x55555520,0x55555520,0x55555520,0x55555520,0x55555520,0x33333320,0x22222200
	.word 0x02005555,0x02005555,0x02205555,0x02225555,0x00225555,0x00005555,0x00003333,0x00002222
	.word 0x10000000,0x14414000,0x14144400,0x11444440,0x14444440,0x41444440,0x44144400,0x44414000
	.word 0x00000000,0x00004144,0x00044414,0x00444441,0x00444444,0x00444441,0x00044414,0x00004144

	.section .rodata
	.align	2
	.global chair_bn_gfxPal		@ 32 unsigned chars
	.hidden chair_bn_gfxPal
chair_bn_gfxPal:
	.hword 0x117E,0x0000,0x0C85,0x0C6B,0x04A6,0x108F,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(chair_bn_gfx)
