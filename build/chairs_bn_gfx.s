
@{{BLOCK(chairs_bn_gfx)

@=======================================================================
@
@	chairs_bn_gfx, 32x16@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-04-11, 16:32:10
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global chairs_bn_gfxTiles		@ 256 unsigned chars
	.hidden chairs_bn_gfxTiles
chairs_bn_gfxTiles:
	.word 0x22222200,0x66666620,0x66666662,0x44444442,0x44444442,0x44444442,0x44444442,0x44444220
	.word 0x00222222,0x02666666,0x26666666,0x24444444,0x24444444,0x24444444,0x24444444,0x02244444
	.word 0x22222220,0x66666662,0x66666666,0x44444444,0x44444444,0x44444444,0x44444444,0x44444422
	.word 0x00022222,0x00266666,0x02666666,0x02444444,0x02444444,0x02444444,0x02444444,0x00224444
	.word 0x22222662,0x55552662,0x55552662,0x55552442,0x55552442,0x33332332,0x22222222,0x00000100
	.word 0x26622222,0x26625555,0x26625555,0x24425555,0x24425555,0x23323333,0x22222222,0x00100000
	.word 0x22222266,0x55555266,0x55555266,0x55555244,0x55555244,0x33333233,0x22222222,0x00000010
	.word 0x02662222,0x02662555,0x02662555,0x02442555,0x02442555,0x02332333,0x02222222,0x00010000

	.section .rodata
	.align	2
	.global chairs_bn_gfxPal		@ 32 unsigned chars
	.hidden chairs_bn_gfxPal
chairs_bn_gfxPal:
	.hword 0x11BF,0x0CC9,0x2D04,0x3525,0x4166,0x3988,0x628F,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(chairs_bn_gfx)
