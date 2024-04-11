
@{{BLOCK(plant_bn_gfx)

@=======================================================================
@
@	plant_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-04-11, 15:19:17
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global plant_bn_gfxTiles		@ 128 unsigned chars
	.hidden plant_bn_gfxTiles
plant_bn_gfxTiles:
	.word 0x55200000,0x69550000,0x65290000,0x95550000,0x62500000,0x65777000,0x64444700,0x65113470
	.word 0x00000552,0x00000259,0x00000595,0x00000596,0x00000052,0x00077776,0x00744495,0x07431116
	.word 0x61113470,0x11113470,0x33334470,0x44444770,0x77777800,0x88888400,0x44444700,0x77777000
	.word 0x07431115,0x07431111,0x07443333,0x07744444,0x00877777,0x00488888,0x00744444,0x00077777

	.section .rodata
	.align	2
	.global plant_bn_gfxPal		@ 32 unsigned chars
	.hidden plant_bn_gfxPal
plant_bn_gfxPal:
	.hword 0x051F,0x0486,0x0902,0x0CC9,0x3109,0x1183,0x090F,0x314A
	.hword 0x358C,0x1E25,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(plant_bn_gfx)
