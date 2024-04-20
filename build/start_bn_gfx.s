
@{{BLOCK(start_bn_gfx)

@=======================================================================
@
@	start_bn_gfx, 256x256@4, 
@	+ palette 16 entries, not compressed
@	+ 90 tiles (t|f|p reduced) not compressed
@	+ regular map (flat), not compressed, 32x32 
@	Total size: 32 + 2880 + 2048 = 4960
@
@	Time-stamp: 2024-04-19, 21:15:19
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global start_bn_gfxTiles		@ 2880 unsigned chars
	.hidden start_bn_gfxTiles
start_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF
	.word 0x9BFABFFF,0x58F7CFFF,0x13F2EFFF,0x85C2FFFF,0xB977FFFF,0xCB1AFFFF,0xED1CFFFF,0xFE1EFFFF
	.word 0xFFFFFBAF,0xFFFFFC7F,0xFF818D3E,0xFD7F8B1C,0xFC111C56,0xFFFF8C81,0xFD7F7CA1,0xFF928FC4
	.word 0xFFFFFF5D,0xFFFFFF4D,0xF839FF4D,0xC7E3CF4D,0xFFF6CF4D,0xFFF6CF4D,0xC7E3DF4D,0xF829FF5D
	.word 0xFFFFFFFF,0xFFFFFFFF,0x75CFA28F,0xF6CE3F7C,0xF8CE4F8C,0xF8CE4F8C,0xF8CE3F7C,0xF8CFA28F
	.word 0xFFFFFFFF,0xFFFFFFFF,0x818FB495,0x7F8C8BC3,0x111C8CD5,0xFF8C8CD5,0x7F7C8CD5,0x928F8CD5
	.word 0xFC9FFFFF,0xFB8FFFFF,0xA11BFFFF,0xFC8FFFFD,0xFC8FFFFC,0xFC8FFFFF,0xFB8FFFFD,0xA2CFFFFF

	.word 0xFFFFFFFF,0xFFFFFFFF,0xFFFFA28F,0xFFFE3F7C,0xFFFE4F8C,0xFFFE4F8C,0xFFFE3F7C,0xFFFFA28F
	.word 0xFF8CFC9F,0xFF7CFB8F,0x475CA11B,0x4F5CFC8F,0x5F7CFC8F,0x5F7CFC8F,0x5F7CFB8F,0x6F8CA2CF
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFFF818FE,0xFFD7F8CD,0xFFC111CD,0xFFFFF8CD,0xFFD7F7CD,0xFFF928FD
	.word 0xCFE74BFF,0xCF9BE3EF,0xCFFFD1EF,0xCFFC2AFF,0xCFB1BFFF,0xCF2BF9CF,0xCF3CE2EF,0xCFD65CFF
	.word 0xFF6DFFF8,0xFFFFFFF7,0xAF6DE475,0xFF5DD4F5,0xFF5DD5F7,0xFF5DD5F7,0xFF5DD5F7,0xFF6DD6F8
	.word 0xFFC9FB3C,0xFFB8FFB7,0xFA11BC11,0xFFC8FFC6,0xFFC8FFC7,0xFFC8FFC7,0xFFB8FFC7,0xFA2CFFD7
	.word 0xF4CF5CFF,0xF2CF4CFF,0xF2CF4CFF,0xF2CF4CFF,0xF2111CFF,0xF2CF4CFF,0xF2CF4CFF,0xF4CF5CFF
	.word 0xFFFFFFFF,0xFFFFFFFF,0xF8CFA28F,0xF7CE3F7C,0xF7CE4F8C,0xF7CE4F8C,0xE6CE3F7C,0x14EFA28F

	.word 0xFFFFFFFF,0xFFFFFFFF,0xFF939FD6,0xCEBF4DD6,0xCFE87FD6,0xCE4BFFD6,0xCD5F9DD4,0xFF839FD1
	.word 0xFFFFFFFF,0xEFFFFFFF,0xEFFFF818,0xFFFFD7F8,0xFFFFC111,0xCFFFFFF8,0xEFFFD7F7,0xFFFFF928
	.word 0xF6DFE74B,0xFFFF9BE3,0xF6DFFFD1,0xF5DFFC2A,0xF5DFB1BF,0xF5DF2BF9,0xF5DF3CE2,0xF6DFD65C
	.word 0xFFFFFFFF,0xFFFFFFFF,0xCB49575C,0xC8BC3F6C,0xC8CD5F8C,0xC8CD5F8C,0xC8CD5F8C,0xE8CD5F8C
	.word 0xFF5DFFFF,0xFF4DFFFF,0xEF4DD6F8,0xEF4DD6F7,0xFF4DD6F7,0xDF4DD6F7,0xCF4DD4E6,0xEF5DD114
	.word 0xFC9FFFFF,0xFB8FFFFF,0xA11BE717,0xFC8FC3CB,0xFC8FC119,0xFC8FC8C1,0xFB8FC6F6,0xA2CFC876
	.word 0xFFFFFFFF,0xFFFFFFFF,0x85CFA28F,0xE4CE3F7C,0xF7CE4F8C,0xF7CE4F8C,0xF7CE3F7C,0xF7CFA28F
	.word 0xFFFFF6CF,0xFFFFF6CF,0xFFFFF6DD,0xFFFFF7DF,0xFFFFF7DF,0xFFFFFBEF,0xFFFFFFFF,0xFFFFF8DF

	.word 0xFF21119F,0xFFFD1FFF,0x17ED1FFF,0xCBED1FFF,0x19FD1FFF,0xC1DD1FFF,0xF6CD1FFF,0x76ED2FFF
	.word 0xFFF7CFFF,0xFFF7CFFF,0xE5E7CFE7,0xFB97CFC3,0xFC11CFC1,0xF8A2CFC8,0xE2F7CFC6,0xB9F7CFC8
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFFFF818F,0xFFFD7F8C,0xFFFC111C,0xFFFFFF8C,0xFFFD7F7C,0xFFFF928F
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFFFE717E,0xFFFC3CBE,0xFFFC119F,0xFFFC8C1D,0xFFFC6F6C,0xFFFC876E
	.word 0xFFFFFF5D,0xFFFFFF4D,0xFA28FF4D,0xE3F7CF4D,0xE4F8CF4D,0xE4F8CF4D,0xE3F7CF4D,0xFA28FF5D
	.word 0xF7CFFFFF,0xF7CFFFFF,0xE7CFA28F,0x97CE3F7C,0x11CE4F8C,0xA2CE4F8C,0xF7CE3F7C,0xF7CFA28F
	.word 0xFFFFFFFF,0xFFFFFFFF,0x17EFFFE5,0xCBEFFFFB,0x19FFFFFC,0xC1DFFFF8,0xF6CFFFE2,0x76EFFFB9
	.word 0xFFFFFFFF,0xFFFFFFFF,0x8FD85CE7,0x7CFE4CC3,0x8CFF7CC1,0x8CFF7CC8,0x7CFF7CC6,0x8FFF7CC8

	.word 0xFFFFFFFF,0xFFFFFFFF,0xD6F8CFA2,0xD6F7CE3F,0xD6F7CE4F,0xD6F7CE4F,0xD4E6CE3F,0xD114EFA2
	.word 0xFFFFFFFF,0xFFFFFFFF,0x55EE575C,0xF6CD5F6C,0xF7CD6F7C,0xF7CD6F7C,0xF6CD6F7C,0x65ED7F8C
	.word 0xFFFFFFC7,0xFFFFFFC7,0x17EFFFC4,0xCBEFFFC6,0x19FFFFC7,0xC1DFFFC7,0xF6CFFFC6,0x76EFFFC5
	.word 0xFFFFFFFF,0xFFFFFFFF,0xEE575CE7,0xCD5F6CC3,0xCD6F7CC1,0xCD6F7CC8,0xCD6F7CC6,0xED7F8CC8
	.word 0xFFFFC7FF,0xFFFFC7FF,0xCFFFC455,0xCFFFC6F6,0xCFFFC7F7,0xCFFFC7F7,0xCFFFC6F6,0xCFFFC565
	.word 0xFFFFFFFF,0xFFFFFFFF,0xD85CF754,0xFE4CD4F6,0xFF7CD5F7,0xFF7CD5F7,0xFF7CD4F6,0xFF7CF762
	.word 0xFFFFFFFF,0xFFFFFFFF,0x39FF818F,0xF4DD7F8C,0x87FC111C,0xBFFFFF8C,0xF9DD7F7C,0x39FF928F
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFF939FF9,0xFEBF4DEB,0xFFE87FFE,0xFE4BFFE4,0xFD5F9DD5,0xFF839FF8

	.word 0x71EF7CFF,0x12CF8DFF,0x2AAFFFFF,0x7C7FFFFF,0x9D2FFFFF,0x111EFFFF,0xEF5CFFFF,0xFF9BFFFF
	.word 0xFFFF7CFF,0xFFFF8DFF,0xBFFFFFFE,0xFFFFFFFC,0xFFFFFFFA,0xFFFFFFF6,0xFFFFFFE1,0xFFFFFFD3
	.word 0xFFFFFFC9,0xFFFFFFB8,0xFA28FA11,0xE3F7CFC8,0xE4F8CFC8,0xE4F8CFC8,0xE3F7CFB8,0xFA28FA2C
	.word 0xFFF6DFFF,0xFFFFFFFF,0x5CF6DFFF,0x6CF5DFFF,0x7CF5DFFF,0x7CF5DFFF,0x7CF5DFFF,0x8CF6DFFF
	.word 0xFFC9FFFF,0xFFB8FFFF,0xFA11BE57,0xCFC8FD5F,0xCFC8FD6F,0xCFC8FD6F,0xCFB8FD6F,0xFA2CFD7F
	.word 0xFFFFFFFF,0xFFFFFFFF,0xD85CF818,0xFE4CD7F8,0xFF7CC111,0xFF7CFFF8,0xFF7CD7F7,0xFF7CF928
	.word 0xFFFFFFFF,0xFFFFFFFF,0x39FE717E,0xE3CC3CBE,0xF6CC119F,0xF6CC8C1D,0xE3DC6F6C,0x29FC876E
	.word 0xFFFC9FFF,0xFFFB8FFF,0xFFA11BF8,0xFFFC8FC7,0xFFFC8FFF,0xFFFC8FFF,0xFFFB8FC7,0xFFA2CFF8

	.word 0xCFFFFFFF,0xCFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF
	.word 0xFFFFFFF7,0xFFFFFFF7,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF
	.word 0xFFFFFFFF,0xFFFFFFFF,0xABFFFFFF,0x5DFFFFFF,0x1EFFFFFF,0x6FFFFFFF,0xAFFFFFFF,0xCFFFFFFF
	.word 0xF6DFFFFF,0xFFFFFFFF,0xF6D6DD6F,0xF5DABB1E,0xF5DC976B,0xF5DE34C3,0xF5DF48E1,0xF6DF9BF3
	.word 0xFFFFFFFF,0xFFFFFFFF,0x575CFFFE,0x3F6CFFFD,0x5F8CFFFD,0x5F8CFFFD,0x5F8CFFFD,0x5F8CFFFD
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFA28FB49,0xE3F7C8BC,0xE4F8C8CD,0xE4F8C8CD,0xE3F7C8CD,0xFA28F8CD
	.word 0xC9FFFFFF,0xB8FFFFFF,0x11BF939F,0xC8FEBF4D,0xC8FFE87F,0xC8FE4BFF,0xB8FD5F9D,0x2CFF839F
	.word 0xFFFFFFFF,0xFFFFFFFF,0xA28FFFFA,0x3F7CFFFF,0x4F8CFFFF,0x4F8CFFFF,0x3F7CFFFF,0xA28FFFFA

	.word 0x3EFFF7CF,0xFFFFF7CF,0x2EE564CF,0x1EC7F6CE,0x1EC8F7CE,0x1EC8F7CE,0x1EC7F6CE,0x1EE576CF
	.word 0xFFFFFFFF,0xFFFFFFFF,0x9FF818FF,0x3CD7F8CF,0x6CC111CF,0x6CFFF8CF,0x3DD7F7CF,0x9FF928FF
	.word 0xFFC9FFFF,0xFFB8FFFF,0xFA11BF83,0xDFC8FC7E,0xFFC8FFFF,0xFFC8FFFF,0xDFB8FC7E,0xFA2CFF82
	.word 0xDFFFFFFF,0xFFFFFFFF,0xDFFFF939,0xDFFFEBF4,0xDFFFFE87,0xDFFFE4BF,0xDFFFD5F9,0xDFFFF839
	.word 0xFFFFFFF6,0xFFFFFFFF,0xFE575CF6,0xFD5F6CF5,0xFD6F7CF5,0xFD6F7CF5,0xFD6F7CF5,0xFD7F8CF6
	.word 0x8CFC9FFF,0x7CFB8FFF,0x5CA11BFF,0x5CFC8FFF,0x7CFC8FFF,0x7CFC8FFF,0x7CFB8FFF,0x8CA2CFFF
	.word 0xFFFFFFFF,0xFFFFFFFF,0xF818FE47,0xD7F8CD4F,0xC111CD5F,0xFFF8CD5F,0xD7F7CD5F,0xF928FD6F
	.word 0xFFFFFFFF,0xFFFFFFFF,0xF818FFFF,0xD7F8CFFF,0xC111CFFF,0xFFF8CFFF,0xD7F7CFFF,0xF928FFFF

	.word 0xFFFFFFFF,0xFFFFFFFF,0xFBBE575C,0xE8DD5F6C,0xD2ED6F7C,0x85FD6F7C,0x1AFD6F7C,0x3CFD7F8C
	.word 0xFFFF6DFF,0xFFFFFFFF,0x85CF6DE6,0xE4CF5DF2,0xF7CF5DF8,0xF7CF5DFB,0xF7CF5DFD,0xF7CF6DFF
	.word 0xFFFFFFFF,0xFFFFFFFF,0x5CFA28FD,0x6CE3F7CF,0x7CE4F8CF,0x7CE4F8CF,0x7CE3F7CF,0x8CFA28FF
	.word 0xFFFFFFFF,0xFFFFFFFF,0x9575CE57,0xC3F6CD5F,0xD5F8CD6F,0xD5F8CD6F,0xD5F8CD6F,0xD5F8CD7F
	.word 0xFFFFFFFF,0xFFFFFFFF,0xCF818FB4,0xCD7F8C8B,0xCC111C8C,0xCFFF8C8C,0xCD7F7C8C,0xCF928F8C
	.word 0xFC9FFFFF,0xFB8FFFFF,0xA11BE575,0xFC8FD5F6,0xFC8FD6F7,0xFC8FD6F7,0xFB8FD6F7,0xA2CFD7F8
	.word 0x1AFFFFFF,0x91DFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF
	.word 0xDFD611CF,0xDF6BF5CF,0xDF2DF6CF,0xDF9BF5CF,0xDFF131CF,0xDFD5F5CF,0xDF9BF6CF,0xDF2EF6CF

	.word 0xFE711CF1,0xF6BF3CF1,0xF1DF3CF1,0xF6BF3CF1,0xFE611CF1,0xFFFF4CF1,0xFFFF4CF1,0xFFFF5CF1
	.word 0xFE74BFFF,0xF9BE3EFF,0xFFFD1EFF,0xFFC2AFFF,0xFB1BFFFF,0xF2BF9CFF,0xF3CE2EFF,0xFD65CFFF
	.word 0xF6DFFF8C,0xFFFFFF7C,0xF6DE475C,0xF5DD4F5C,0xF5DD5F7C,0xF5DD5F7C,0xF5DD5F7C,0xF6DD6F8C
	.word 0xFC9FB3CF,0xFB8FFB7F,0xA11BC11A,0xFC8FFC6F,0xFC8FFC7F,0xFC8FFC7F,0xFB8FFC7F,0xA2CFFD7F
	.word 0x4CF5CFFF,0x2CF4CFFF,0x2CF4CFFF,0x2CF4CFFF,0x2111CFFF,0x2CF4CFFF,0x2CF4CFFF,0x4CF5CFFF
	.word 0xFFFFFFFF,0xFFFFFFFF,0x8CFA28FF,0x7CE3F7CF,0x7CE4F8CF,0x7CE4F8CF,0x6CE3F7CF,0x4EFA28FF
	.word 0xFFFFFFFF,0xFFFFFFFF,0xF939FD6F,0xEBF4DD6F,0xFE87FD6F,0xE4BFFD6F,0xD5F9DD4E,0xF839FD11
	.word 0x4BFE74BF,0xE1DA9E1E,0xF2C9AF4D,0xF2CB4FFF,0xF2CF5AFF,0xF2CFD1DF,0xE1DFFB4E,0x4BFA111C

	.word 0xE74BFFE7,0xA9E1EF8A,0x9AF4DF5C,0xB4FFFF5C,0xC5AFFF5C,0xBD1DFF5C,0xFFB4EF8A,0xA111CFE7
	.word 0xFFFFB4FF,0xFFFFB1AF,0xFFFFB64E,0xFFFFB8C8,0xFFFFB8F6,0xFFFD1111,0xFFFFB8FF,0xFFFFB8FF
	.word 0x711CFFFF,0xBF3CFFFF,0xDF3CFFFF,0xBF3CFFFF,0x611CFFFF,0xFF4CFFFF,0xFF4CFFFF,0xFF5CFFFF
	.word 0xFFFFFFFE,0xFFFFFFF6,0x18FD85C1,0xF8CFE4C6,0x11CFF7CE,0xF8CFF7CF,0xF7CFF7CF,0x28FFF7CF
	.word 0xFFFFFFFF,0xFFFFFFFF,0xFF939FF8,0xDEBF4DD7,0xFFE87FC1,0xFE4BFFFF,0xDD5F9DD7,0xFF839FF9
	.word 0xCFFFFFFF,0xDFFFFFFF,0xFFFFF939,0xFFFFEBF4,0xFFFFFE87,0xFFFFE4BF,0xFFFFD5F9,0xFFFFF839
	.word 0xFFE74BF7,0xFF9BE3E8,0xBFFFD1EF,0xFFFC2AFF,0xFFB1BFFF,0xFF2BF9CF,0xFF3CE2EF,0xFFD65CFF
	.word 0xFFFFFFC9,0xFFFFFFB8,0xE717EA11,0xC3CBEFC8,0xC119FFC8,0xC8C1DFC8,0xC6F6CFB8,0xC876EA2C

	.word 0xFC9FFFFF,0xFB8FFFFF,0xA11BD85C,0xFC8FFE4C,0xFC8FFF7C,0xFC8FFF7C,0xFB8FFF7C,0xA2CFFF7C
	.word 0xFFFFFF7C,0xFFFFFF8D,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF

	.section .rodata
	.align	2
	.global start_bn_gfxMap		@ 2048 unsigned chars
	.hidden start_bn_gfxMap
start_bn_gfxMap:
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0002,0x0003,0x0004
	.hword 0x0005,0x0006,0x0007,0x0008,0x0009,0x000A,0x000B,0x000C
	.hword 0x000D,0x000E,0x000F,0x0010,0x0011,0x0012,0x0013,0x0014
	.hword 0x0015,0x0016,0x0017,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0018,0x0019,0x001A,0x001B
	.hword 0x001C,0x001D,0x001E,0x001F,0x0020,0x0021,0x0022,0x0023
	.hword 0x0024,0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B
	.hword 0x002C,0x002D,0x002E,0x002F,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0030,0x0031,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0032,0x0033,0x0009
	.hword 0x0034,0x0035,0x0036,0x0037,0x0038,0x0039,0x003A,0x003B
	.hword 0x003C,0x003D,0x003E,0x003F,0x0040,0x0041,0x0042,0x0043
	.hword 0x0044,0x0045,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0046,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0047,0x0048,0x0049,0x004A,0x004B,0x004C
	.hword 0x004D,0x004E,0x001A,0x004F,0x0050,0x0051,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0052,0x0053,0x0054,0x0055
	.hword 0x0056,0x0057,0x0058,0x0059,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.section .rodata
	.align	2
	.global start_bn_gfxPal		@ 32 unsigned chars
	.hidden start_bn_gfxPal
start_bn_gfxPal:
	.hword 0x11BF,0x0000,0x0C63,0x14A5,0x1CE7,0x2529,0x2D6B,0x35AD
	.hword 0x3DEF,0x4631,0x4E73,0x56D6,0x6318,0x6B5A,0x739C,0x7FFF

@}}BLOCK(start_bn_gfx)
