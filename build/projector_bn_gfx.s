
@{{BLOCK(projector_bn_gfx)

@=======================================================================
@
@	projector_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-04-12, 21:23:49
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global projector_bn_gfxTiles		@ 128 unsigned chars
	.hidden projector_bn_gfxTiles
projector_bn_gfxTiles:
	.word 0x66666000,0x66466600,0x64646600,0x66466600,0x66666600,0x64646600,0x66666610,0x66666612
	.word 0x06666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0x66666612,0x66666610,0x66666600,0x66666600,0x66666500,0x55555400,0x44444300,0x33333000
	.word 0x66666666,0x66666666,0x66666666,0x66666666,0x56666666,0x45555555,0x34444444,0x03333333

	.section .rodata
	.align	2
	.global projector_bn_gfxPal		@ 32 unsigned chars
	.hidden projector_bn_gfxPal
projector_bn_gfxPal:
	.hword 0x01FF,0x0C63,0x52AB,0x56B5,0x5EF7,0x6739,0x739C,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(projector_bn_gfx)
