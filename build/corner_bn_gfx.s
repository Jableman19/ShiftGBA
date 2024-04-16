
@{{BLOCK(corner_bn_gfx)

@=======================================================================
@
@	corner_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-13, 00:23:47
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global corner_bn_gfxTiles		@ 256 unsigned chars
	.hidden corner_bn_gfxTiles
corner_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x30000000,0x40000000,0x42000000,0x42000000,0x42000000,0x42000000,0x42000000,0x42000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x30000000,0x33333300,0x22212230
	.word 0x32000000,0x32000000,0x32000000,0x32000000,0x32300000,0x32333333,0x32122212,0x33122212
	.word 0x22212220,0x22212220,0x32212220,0x33333320,0x00003330,0x00003030,0x00030030,0x33300330
	.word 0x03122212,0x03322212,0x00333333,0x00000000,0x00000000,0x00000000,0x00000000,0x33333333
	.word 0x00000300,0x00003300,0x00033000,0x33330000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x33333333,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global corner_bn_gfxPal		@ 32 unsigned chars
	.hidden corner_bn_gfxPal
corner_bn_gfxPal:
	.hword 0x01FF,0x398A,0x45EB,0x2A13,0x3276,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(corner_bn_gfx)
