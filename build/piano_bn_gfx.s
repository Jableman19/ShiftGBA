
@{{BLOCK(piano_bn_gfx)

@=======================================================================
@
@	piano_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-12, 21:11:14
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global piano_bn_gfxTiles		@ 256 unsigned chars
	.hidden piano_bn_gfxTiles
piano_bn_gfxTiles:
	.word 0x88888880,0xDDDDDDD8,0xDDDDDDD8,0x7777DDD8,0x7777DDD8,0xEEEEDDD8,0x2EEEDDD8,0xEEEEDDD8
	.word 0x08888888,0x8DDDDDDD,0x8DDDDDDD,0x8D777777,0x8D777777,0x8D747EEE,0x8D777222,0x8D747EEE
	.word 0x2EEEDDD8,0xEEEEDDD8,0x2EEEDDD8,0xEEEEDDD8,0x2EEEDDD8,0xEEEEDDD8,0x2EEEDDD8,0xEEEEDDD8
	.word 0x8D777222,0x8D777EEE,0x8D747222,0x8D777EEE,0x8D777222,0x8D747EEE,0x8D747222,0x8D777EEE
	.word 0x2EEEDDD8,0xEEEEDDD8,0x7777DDD8,0x2222DDD8,0x4444DDD8,0xDDDDDDD8,0xBBBBBBB8,0x99999998
	.word 0x8D777222,0x8D747EEE,0x8D777777,0x8D222222,0x8D444444,0x8DDDDDDD,0x8BBBBBBB,0x89999999
	.word 0x55555558,0x333333CA,0x666666CA,0x000000CA,0x000000CA,0x000000CA,0x000000CA,0x00000011
	.word 0x85555555,0xCA333333,0xCA666666,0xCA000000,0xCA000000,0xCA000000,0xCA000000,0x11000000

	.section .rodata
	.align	2
	.global piano_bn_gfxPal		@ 32 unsigned chars
	.hidden piano_bn_gfxPal
piano_bn_gfxPal:
	.hword 0x01FF,0x0000,0x0C63,0x0C85,0x14A5,0x10C8,0x14E8,0x2108
	.hword 0x14EA,0x256E,0x3DEF,0x31F3,0x5294,0x56FB,0x7FFF,0x0000

@}}BLOCK(piano_bn_gfx)
