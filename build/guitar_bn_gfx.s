
@{{BLOCK(guitar_bn_gfx)

@=======================================================================
@
@	guitar_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-12, 20:38:31
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global guitar_bn_gfxTiles		@ 256 unsigned chars
	.hidden guitar_bn_gfxTiles
guitar_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000520
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000222,0x00005225,0x00000320,0x00003350,0x00003300,0x00033300,0x22033000,0x62033000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002
	.word 0x62330000,0x62332200,0x66226620,0x66666620,0x66666620,0x66666230,0x66662300,0x16662300
	.word 0x00000002,0x00000002,0x00000026,0x00000026,0x00000266,0x00000266,0x00002666,0x00002661
	.word 0x16662300,0x66662300,0x66623300,0x66623400,0x66223400,0x22334400,0x44444000,0x44400000
	.word 0x00002661,0x00002666,0x00000266,0x00004266,0x00004426,0x00004442,0x00000444,0x00000004

	.section .rodata
	.align	2
	.global guitar_bn_gfxPal		@ 32 unsigned chars
	.hidden guitar_bn_gfxPal
guitar_bn_gfxPal:
	.hword 0x01FF,0x14A6,0x0CC9,0x04ED,0x318C,0x09CF,0x3697,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(guitar_bn_gfx)
