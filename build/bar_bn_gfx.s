
@{{BLOCK(bar_bn_gfx)

@=======================================================================
@
@	bar_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-11, 15:19:17
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global bar_bn_gfxTiles		@ 256 unsigned chars
	.hidden bar_bn_gfxTiles
bar_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x88888880,0xFFFFFFF8,0xFFFEFEF8,0xFFFEFEF8,0xFFFFFFF8
	.word 0x000C0000,0x00040000,0x00444000,0x08444688,0x8F44666F,0x8FFC666F,0x8FF3666F,0x8F733FFF
	.word 0xFFFFFFF8,0xFFFF11F8,0xFFFF11F8,0xFFFF11F8,0xFFFF11F8,0xFFFF11F8,0xFFFFFFF8,0xFFFF11F8
	.word 0x8F733FFF,0x87773FFF,0x87B7CFFF,0x87B76FFF,0x87B76FFF,0x877666FF,0x8FF666FF,0x8FF466FF
	.word 0xFFFF11F8,0xFFFF11F8,0xFFFF11F8,0xFFFF11F8,0xFFFFFFF8,0xFEFEFEF8,0x3EFE3EF8,0xEEFEEEF8
	.word 0x8FF466FF,0x8FF466FF,0x8F4446FF,0x8F4E4FFF,0x8F4E4FFF,0x8F4E4FFE,0x8F4E4FFE,0x8F444FFE
	.word 0xFFFFFFF8,0xDDDDDDD8,0x99999998,0x88888888,0x222222BA,0x555555BA,0x000000BA,0x00000011
	.word 0x8FFFFFFF,0x8DDDDDDD,0x89999999,0x88888888,0xBA222222,0xBA555555,0xBA000000,0x11000000

	.section .rodata
	.align	2
	.global bar_bn_gfxPal		@ 32 unsigned chars
	.hidden bar_bn_gfxPal
bar_bn_gfxPal:
	.hword 0x117E,0x0000,0x0C85,0x106D,0x34C5,0x14E8,0x11A3,0x2DA7
	.hword 0x1190,0x25D0,0x3DEF,0x5294,0x029B,0x3AB9,0x6313,0x3EFC

@}}BLOCK(bar_bn_gfx)
