
@{{BLOCK(shift_bn_gfx)

@=======================================================================
@
@	shift_bn_gfx, 256x256@4, 
@	+ palette 16 entries, not compressed
@	+ 148 tiles (t|f|p reduced) not compressed
@	+ regular map (flat), not compressed, 32x32 
@	Total size: 32 + 4736 + 2048 = 6816
@
@	Time-stamp: 2024-04-10, 16:06:44
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global shift_bn_gfxTiles		@ 4736 unsigned chars
	.hidden shift_bn_gfxTiles
shift_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x11222222,0x22112222,0x22221122,0x22221122,0x12112122,0x21222122
	.word 0x22222222,0x22222222,0x22222222,0x22222221,0x22222211,0x22222112,0x22222121,0x22222122
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x21111122,0x12222111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11111111,0x11111111

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222221,0x22222111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x11222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22211111,0x22211111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11122222,0x11112222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222111,0x22222111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x12222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22211111,0x22111111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11111112,0x11111112

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11222221,0x11222221
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x21111111,0x11111111
	.word 0x21222122,0x21222122,0x21222122,0x21222122,0x21222122,0x11222122,0x21112122,0x22211122
	.word 0x12222122,0x21122122,0x22211122,0x22221112,0x22222211,0x22222222,0x22222222,0x22222222
	.word 0x12222221,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222221,0x22222221,0x22222212,0x22222112,0x22222122,0x22221222,0x22211222,0x22212222
	.word 0x11112222,0x11111222,0x11111122,0x11111122,0x11111112,0x11111112,0x11111111,0x21111111
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x12222211,0x22222221,0x22222222,0x22222222

	.word 0x22211111,0x22111111,0x21111111,0x21111111,0x11111111,0x11111112,0x11111122,0x11111122
	.word 0x11222222,0x11222222,0x11222222,0x11222222,0x11222222,0x11222222,0x11222222,0x11222222
	.word 0x22211111,0x22211111,0x22211111,0x22211111,0x22211111,0x22211111,0x22211111,0x22211111
	.word 0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x11112222
	.word 0x22222111,0x22222111,0x22222111,0x22222111,0x22222111,0x22222111,0x22222111,0x22222111
	.word 0x12222222,0x12222222,0x12222222,0x12222222,0x12222222,0x12222222,0x12222222,0x12222222
	.word 0x22111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22111111
	.word 0x11111112,0x11111112,0x11111112,0x11111112,0x11111112,0x21111112,0x21111112,0x21111112

	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x11222221,0x11222221,0x11222221,0x11222221,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x22111111,0x22111111,0x22111111,0x22111111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x21122222
	.word 0x22222222,0x12222222,0x11122222,0x22112222,0x22221122,0x22222211,0x22222221,0x22222222
	.word 0x22112222,0x22122222,0x21222222,0x11222222,0x12222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222221,0x22222211,0x22222212
	.word 0x22222222,0x12222222,0x12222222,0x12222222,0x12222222,0x12222222,0x12222222,0x12222222

	.word 0x21111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22111111
	.word 0x11111222,0x11111222,0x11111222,0x11111222,0x11111222,0x11112222,0x11112222,0x11112222
	.word 0x22222221,0x22222211,0x22222211,0x22222211,0x22222211,0x22222211,0x22222211,0x22222211
	.word 0x21111112,0x21111112,0x21111112,0x21111112,0x21111112,0x21111112,0x21111112,0x21111112
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x21122222,0x22112222,0x22211222
	.word 0x22112222,0x22211222,0x22222112,0x22222211,0x22222221,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222212,0x22222122,0x22222122,0x22221222,0x22212222,0x22212222
	.word 0x22222122,0x22221122,0x22221222,0x22211222,0x22112222,0x22122222,0x21122222,0x21222222

	.word 0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x22222222,0x22222222
	.word 0x22222211,0x22222211,0x22222211,0x22222211,0x22222211,0x22222211,0x22222222,0x22222222
	.word 0x22221122,0x22222122,0x22222122,0x22221122,0x22111222,0x21122222,0x12222222,0x11222222
	.word 0x22122222,0x21222222,0x21222222,0x12222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222221,0x22222221,0x22222212,0x22222212
	.word 0x21222222,0x21222222,0x21222222,0x22112222,0x22211122,0x22222112,0x22222211,0x22221112
	.word 0x12222222,0x12222222,0x12222222,0x12222222,0x12222222,0x22222222,0x22222222,0x22222222
	.word 0x22111111,0x22111111,0x22111111,0x22111111,0x21111111,0x21111111,0x11111111,0x11111112

	.word 0x22112222,0x22221122,0x22222112,0x22222211,0x22221111,0x22212221,0x21122221,0x12222221
	.word 0x22211122,0x22112222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222221
	.word 0x22222222,0x22222222,0x22222222,0x22222211,0x22221112,0x22211222,0x21122222,0x12222222
	.word 0x22222122,0x22221222,0x22221222,0x22212222,0x22122222,0x22122222,0x21222222,0x22222221
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222222
	.word 0x22222222,0x22222222,0x22222222,0x11222222,0x21122222,0x22211222,0x22221112,0x22222211
	.word 0x22112222,0x22221122,0x22222211,0x22222221,0x22222222,0x22222222,0x22222222,0x12222222
	.word 0x22211222,0x21122222,0x11222222,0x11222222,0x22122222,0x22211222,0x22222112,0x22222221

	.word 0x11111112,0x11111122,0x11111222,0x11112222,0x11122222,0x12222222,0x22222222,0x22222222
	.word 0x22222111,0x22221111,0x22111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111122
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222221,0x22222111,0x22221111,0x22111111
	.word 0x22222112,0x22221222,0x22112222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222211,0x22222112,0x22211222,0x21122222
	.word 0x22222111,0x22221122,0x21112222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x11222222,0x22112222,0x22211122,0x22222211,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x21122222,0x22211222,0x22222122

	.word 0x11222222,0x22112222,0x22221122,0x22222212,0x22222221,0x22222222,0x22222222,0x22222222
	.word 0x22222221,0x22222221,0x22222221,0x22222221,0x22222221,0x22222221,0x22222221,0x12222221
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22211111
	.word 0x11112222,0x11122222,0x12222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x21111111,0x11111111,0x11111111,0x11111112,0x11111122,0x11111222,0x11112222,0x11122222
	.word 0x22222222,0x22222222,0x22222221,0x22222211,0x22222111,0x22222111,0x22222111,0x22221111
	.word 0x22211111,0x22211111,0x22211111,0x22211111,0x22211111,0x22111111,0x11111111,0x11111111
	.word 0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x11111111,0x11111111

	.word 0x21111112,0x21111112,0x21111112,0x21111112,0x21111112,0x11111112,0x11111112,0x11111112
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11111111,0x11111111,0x11111111
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22111111,0x22111111,0x22111111
	.word 0x22222222,0x22222211,0x22221122,0x22112222,0x11222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x11222222,0x22112222,0x22211122,0x22222211,0x22222222,0x22222222,0x22222222
	.word 0x12222221,0x12222221,0x12222221,0x12222221,0x12222221,0x12222221,0x12222221,0x12222221
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x22211111,0x22211111,0x22211111,0x22211111
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x11112222,0x11112222,0x11112222,0x11112222

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22211222,0x22121122,0x22122211,0x22122221
	.word 0x12222221,0x12222221,0x12222221,0x22222221,0x22222221,0x22222221,0x22222221,0x22222221
	.word 0x22111111,0x22111111,0x22111111,0x21111111,0x21111111,0x11111111,0x11111112,0x11111112
	.word 0x11122222,0x11122222,0x11122222,0x11112222,0x11112222,0x11111222,0x11111122,0x11111112
	.word 0x22221111,0x22221111,0x22222111,0x22222111,0x22222111,0x22222111,0x22222211,0x22222211
	.word 0x22222221,0x22222221,0x22222221,0x22222211,0x22222212,0x22222112,0x22221122,0x22211222
	.word 0x21222222,0x21122222,0x22122222,0x22122222,0x22122222,0x22122222,0x21122222,0x12122222
	.word 0x22122222,0x22122222,0x22122222,0x22122222,0x22122222,0x22122222,0x22122222,0x22122221

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x12222222,0x21222222,0x22112222
	.word 0x11111122,0x11111222,0x11112222,0x11122222,0x12222222,0x22222222,0x22222222,0x22222222
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111112,0x22222222,0x22222222
	.word 0x11111111,0x11111111,0x21111111,0x22111111,0x22211111,0x22222211,0x22222222,0x22222222
	.word 0x11222222,0x11222222,0x11222222,0x11222222,0x11222222,0x22222222,0x22222222,0x22222222
	.word 0x22211111,0x22211111,0x22211111,0x22211111,0x22211111,0x22222222,0x22222222,0x22222222
	.word 0x11112222,0x11112222,0x11112222,0x11112222,0x11112222,0x22222222,0x22222222,0x22222222
	.word 0x22222111,0x22222111,0x22222111,0x22222111,0x22222111,0x22222222,0x22222222,0x22222222

	.word 0x22111111,0x22111111,0x22111111,0x22111111,0x22111111,0x22222222,0x22222222,0x22222222
	.word 0x21111112,0x21111112,0x21111112,0x21111112,0x21111112,0x22222222,0x22222222,0x22222222
	.word 0x21112222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222221,0x22222211,0x22221122,0x22111222,0x11122222,0x12222222,0x22222222
	.word 0x22122222,0x22122222,0x22122222,0x22122222,0x22122222,0x22122222,0x22122222,0x22122222
	.word 0x22122212,0x22121122,0x11112222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22211122,0x22222112,0x22222221,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x21222222,0x22122222

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222111,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22111122,0x21222122,0x21222122
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11122222,0x22122222,0x22122222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222221,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22221112,0x22221212,0x22221212
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11111122,0x22122222,0x22122222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222221,0x21222222,0x21222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222111,0x22221222,0x22221222

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x21111222,0x12221222,0x12221222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x12222222,0x21222222,0x21222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222211,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22211112,0x22122212,0x22122212
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x11122222,0x12122222,0x12122222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22211112,0x22222221,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x21111222,0x22221222,0x22221222
	.word 0x22211122,0x22112222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222

	.word 0x22222222,0x22222222,0x22222222,0x22222211,0x22221112,0x22211222,0x22122222,0x11222222
	.word 0x22222222,0x22222222,0x22222222,0x12222222,0x11222222,0x22112222,0x22221222,0x22222111
	.word 0x22112222,0x22211222,0x22222112,0x22222211,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22122222,0x22122222,0x21222222,0x12222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222111,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22122122,0x22211122,0x22122122,0x21222122,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x21122222,0x22122222,0x22122222,0x11122222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x12222222,0x12222221,0x22222222,0x22222222,0x22222222,0x22222222

	.word 0x22212221,0x22211111,0x22122222,0x22122222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22122222,0x22122222,0x22122222,0x22122222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x21222222,0x21222222,0x21222222,0x12222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22221222,0x22221222,0x22221222,0x22222111,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x21221222,0x22111222,0x21221222,0x12221222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x12222222,0x22222222,0x22222222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222211,0x22222122,0x22222211,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22211112,0x22222212,0x22222212,0x22222212,0x22222222,0x22222222,0x22222222,0x22222222

	.word 0x22212222,0x11112222,0x22221222,0x22221222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x12222221,0x12222221,0x22222212,0x22222212,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222221,0x22211112,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22211222,0x22221222,0x22221222,0x21111222,0x22222222,0x22222222,0x22222222,0x22222222

	.section .rodata
	.align	2
	.global shift_bn_gfxMap		@ 2048 unsigned chars
	.hidden shift_bn_gfxMap
shift_bn_gfxMap:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0003,0x0004,0x0005
	.hword 0x0002,0x0002,0x0002,0x0006,0x0007,0x0008,0x0002,0x0009
	.hword 0x000A,0x0002,0x000B,0x000C,0x000D,0x000E,0x0002,0x000F
	.hword 0x0007,0x0007,0x0010,0x0007,0x0007,0x0011,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0012,0x0013,0x0014
	.hword 0x0015,0x0002,0x0002,0x0016,0x0017,0x0018,0x040D,0x0019
	.hword 0x001A,0x0002,0x001B,0x001C,0x001D,0x001E,0x0002,0x001F
	.hword 0x0020,0x0020,0x0021,0x0020,0x0022,0x0020,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0023,0x0024,0x0C23,0x0002,0x0002
	.hword 0x0025,0x0026,0x0027,0x0028,0x0002,0x0029,0x002A,0x0019
	.hword 0x001A,0x0002,0x001B,0x001C,0x001D,0x001E,0x0002,0x002B
	.hword 0x0002,0x0002,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x002C,0x002D,0x002E,0x0002,0x0002,0x0002
	.hword 0x0002,0x002F,0x001D,0x001E,0x0002,0x0030,0x0031,0x0019
	.hword 0x001A,0x0002,0x001B,0x001C,0x001D,0x001E,0x0002,0x002B
	.hword 0x0002,0x0002,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0032,0x0008,0x0033,0x0034,0x0002,0x0002
	.hword 0x0408,0x0035,0x0036,0x0037,0x0406,0x0002,0x0002,0x0019
	.hword 0x001A,0x0002,0x001B,0x001C,0x001D,0x001E,0x0002,0x002B
	.hword 0x0002,0x0002,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0038,0x0039,0x003A,0x003B,0x003C,0x003D
	.hword 0x003E,0x003F,0x0C36,0x0040,0x0041,0x0042,0x0002,0x0019
	.hword 0x001A,0x0002,0x001B,0x001C,0x001D,0x001E,0x0002,0x002B
	.hword 0x0002,0x0002,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x041D,0x0043,0x0044,0x0045,0x0046,0x0047
	.hword 0x0048,0x0002,0x0049,0x004A,0x004B,0x004C,0x004D,0x0019
	.hword 0x004E,0x0007,0x004F,0x001C,0x001D,0x001E,0x0002,0x0050
	.hword 0x0051,0x0052,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x041D,0x0002,0x083C,0x0053,0x0054,0x0C06
	.hword 0x0002,0x0002,0x0055,0x001E,0x0002,0x041C,0x041B,0x0019
	.hword 0x0056,0x0020,0x0057,0x001C,0x001D,0x001E,0x0002,0x0850
	.hword 0x0C51,0x0852,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x041D,0x0002,0x0002,0x0002,0x0002,0x0006
	.hword 0x0058,0x0002,0x0059,0x005A,0x0409,0x005B,0x005C,0x0019
	.hword 0x001A,0x0002,0x001B,0x001C,0x001D,0x001E,0x0002,0x002B
	.hword 0x0002,0x0002,0x0002,0x0002,0x001E,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x005D,0x0002,0x0002,0x0002,0x0002,0x005E
	.hword 0x005F,0x0060,0x0436,0x0061,0x0062,0x0063,0x0C3C,0x0064
	.hword 0x0065,0x0002,0x0066,0x0067,0x0036,0x0068,0x0002,0x0069
	.hword 0x0002,0x0002,0x0002,0x0002,0x0068,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x006A,0x006B,0x0423,0x0002,0x0002,0x006C
	.hword 0x006D,0x006E,0x0002,0x006F,0x0070,0x0071,0x0072,0x0073
	.hword 0x0074,0x0075,0x0076,0x0077,0x0078,0x0002,0x0079,0x007A
	.hword 0x007B,0x007C,0x003C,0x007D,0x007E,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x007F,0x0080,0x0081,0x0082
	.hword 0x0002,0x0002,0x0002,0x0083,0x0084,0x0085,0x0086,0x0087
	.hword 0x0088,0x0089,0x008A,0x008B,0x008C,0x0002,0x008D,0x008E
	.hword 0x008F,0x0090,0x0091,0x0092,0x0093,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.section .rodata
	.align	2
	.global shift_bn_gfxPal		@ 32 unsigned chars
	.hidden shift_bn_gfxPal
shift_bn_gfxPal:
	.hword 0x117E,0x0000,0x7FBD,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(shift_bn_gfx)