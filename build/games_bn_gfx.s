
@{{BLOCK(games_bn_gfx)

@=======================================================================
@
@	games_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-04-12, 22:07:10
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global games_bn_gfxTiles		@ 128 unsigned chars
	.hidden games_bn_gfxTiles
games_bn_gfxTiles:
	.word 0x66666600,0x11111660,0x11111160,0x66666640,0x66666660,0x66666666,0x66666666,0x66666666
	.word 0x00666666,0x00641111,0x06411111,0x04666666,0x06666666,0x66666666,0x66666666,0x66666666
	.word 0x66666666,0x66666666,0x11113666,0x22113366,0x22113364,0x22113344,0x11113440,0x44444400
	.word 0x66666666,0x66666666,0x66651122,0x66551211,0x46551211,0x44551211,0x04451122,0x00444444

	.section .rodata
	.align	2
	.global games_bn_gfxPal		@ 32 unsigned chars
	.hidden games_bn_gfxPal
games_bn_gfxPal:
	.hword 0x01FF,0x0C63,0x2108,0x1CF9,0x318C,0x6607,0x7FFF,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(games_bn_gfx)
