
add：     文件格式 elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	48                   	dec    eax
    1001:	83 ec 08             	sub    esp,0x8
    1004:	48                   	dec    eax
    1005:	8b 05 dd 2f 00 00    	mov    eax,DWORD PTR ds:0x2fdd
    100b:	48                   	dec    eax
    100c:	85 c0                	test   eax,eax
    100e:	74 02                	je     1012 <_init+0x12>
    1010:	ff d0                	call   eax
    1012:	48                   	dec    eax
    1013:	83 c4 08             	add    esp,0x8
    1016:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 e2 2f 00 00    	push   DWORD PTR ds:0x2fe2
    1026:	ff 25 e4 2f 00 00    	jmp    DWORD PTR ds:0x2fe4
    102c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]

0000000000001030 <printf@plt>:
    1030:	ff 25 e2 2f 00 00    	jmp    DWORD PTR ds:0x2fe2
    1036:	68 00 00 00 00       	push   0x0
    103b:	e9 e0 ff ff ff       	jmp    1020 <.plt>

Disassembly of section .plt.got:

0000000000001040 <__cxa_finalize@plt>:
    1040:	ff 25 b2 2f 00 00    	jmp    DWORD PTR ds:0x2fb2
    1046:	66 90                	xchg   ax,ax

Disassembly of section .text:

0000000000001050 <_start>:
    1050:	31 ed                	xor    ebp,ebp
    1052:	49                   	dec    ecx
    1053:	89 d1                	mov    ecx,edx
    1055:	5e                   	pop    esi
    1056:	48                   	dec    eax
    1057:	89 e2                	mov    edx,esp
    1059:	48                   	dec    eax
    105a:	83 e4 f0             	and    esp,0xfffffff0
    105d:	50                   	push   eax
    105e:	54                   	push   esp
    105f:	4c                   	dec    esp
    1060:	8d 05 8a 01 00 00    	lea    eax,ds:0x18a
    1066:	48                   	dec    eax
    1067:	8d 0d 23 01 00 00    	lea    ecx,ds:0x123
    106d:	48                   	dec    eax
    106e:	8d 3d c1 00 00 00    	lea    edi,ds:0xc1
    1074:	ff 15 66 2f 00 00    	call   DWORD PTR ds:0x2f66
    107a:	f4                   	hlt    
    107b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]

0000000000001080 <deregister_tm_clones>:
    1080:	48                   	dec    eax
    1081:	8d 3d a9 2f 00 00    	lea    edi,ds:0x2fa9
    1087:	48                   	dec    eax
    1088:	8d 05 a2 2f 00 00    	lea    eax,ds:0x2fa2
    108e:	48                   	dec    eax
    108f:	39 f8                	cmp    eax,edi
    1091:	74 15                	je     10a8 <deregister_tm_clones+0x28>
    1093:	48                   	dec    eax
    1094:	8b 05 3e 2f 00 00    	mov    eax,DWORD PTR ds:0x2f3e
    109a:	48                   	dec    eax
    109b:	85 c0                	test   eax,eax
    109d:	74 09                	je     10a8 <deregister_tm_clones+0x28>
    109f:	ff e0                	jmp    eax
    10a1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
    10a8:	c3                   	ret    
    10a9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]

00000000000010b0 <register_tm_clones>:
    10b0:	48                   	dec    eax
    10b1:	8d 3d 79 2f 00 00    	lea    edi,ds:0x2f79
    10b7:	48                   	dec    eax
    10b8:	8d 35 72 2f 00 00    	lea    esi,ds:0x2f72
    10be:	48                   	dec    eax
    10bf:	29 fe                	sub    esi,edi
    10c1:	48                   	dec    eax
    10c2:	89 f0                	mov    eax,esi
    10c4:	48                   	dec    eax
    10c5:	c1 ee 3f             	shr    esi,0x3f
    10c8:	48                   	dec    eax
    10c9:	c1 f8 03             	sar    eax,0x3
    10cc:	48                   	dec    eax
    10cd:	01 c6                	add    esi,eax
    10cf:	48                   	dec    eax
    10d0:	d1 fe                	sar    esi,1
    10d2:	74 14                	je     10e8 <register_tm_clones+0x38>
    10d4:	48                   	dec    eax
    10d5:	8b 05 15 2f 00 00    	mov    eax,DWORD PTR ds:0x2f15
    10db:	48                   	dec    eax
    10dc:	85 c0                	test   eax,eax
    10de:	74 08                	je     10e8 <register_tm_clones+0x38>
    10e0:	ff e0                	jmp    eax
    10e2:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
    10e8:	c3                   	ret    
    10e9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]

00000000000010f0 <__do_global_dtors_aux>:
    10f0:	80 3d 39 2f 00 00 00 	cmp    BYTE PTR ds:0x2f39,0x0
    10f7:	75 2f                	jne    1128 <__do_global_dtors_aux+0x38>
    10f9:	55                   	push   ebp
    10fa:	48                   	dec    eax
    10fb:	83 3d f6 2e 00 00 00 	cmp    DWORD PTR ds:0x2ef6,0x0
    1102:	48                   	dec    eax
    1103:	89 e5                	mov    ebp,esp
    1105:	74 0c                	je     1113 <__do_global_dtors_aux+0x23>
    1107:	48                   	dec    eax
    1108:	8b 3d 1a 2f 00 00    	mov    edi,DWORD PTR ds:0x2f1a
    110e:	e8 2d ff ff ff       	call   1040 <__cxa_finalize@plt>
    1113:	e8 68 ff ff ff       	call   1080 <deregister_tm_clones>
    1118:	c6 05 11 2f 00 00 01 	mov    BYTE PTR ds:0x2f11,0x1
    111f:	5d                   	pop    ebp
    1120:	c3                   	ret    
    1121:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
    1128:	c3                   	ret    
    1129:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]

0000000000001130 <frame_dummy>:
    1130:	e9 7b ff ff ff       	jmp    10b0 <register_tm_clones>

0000000000001135 <main>:
    1135:	55                   	push   ebp
    1136:	48                   	dec    eax
    1137:	89 e5                	mov    ebp,esp
    1139:	48                   	dec    eax
    113a:	83 ec 10             	sub    esp,0x10
    113d:	c7 45 fc 03 00 00 00 	mov    DWORD PTR [ebp-0x4],0x3
    1144:	c7 45 f8 0a 00 00 00 	mov    DWORD PTR [ebp-0x8],0xa
    114b:	c7 45 f4 14 00 00 00 	mov    DWORD PTR [ebp-0xc],0x14
    1152:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
    1159:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
    115c:	8d 50 ff             	lea    edx,[eax-0x1]
    115f:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
    1162:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
    1165:	01 d0                	add    eax,edx
    1167:	2b 45 f4             	sub    eax,DWORD PTR [ebp-0xc]
    116a:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
    116d:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
    1170:	89 c6                	mov    esi,eax
    1172:	48                   	dec    eax
    1173:	8d 3d 8b 0e 00 00    	lea    edi,ds:0xe8b
    1179:	b8 00 00 00 00       	mov    eax,0x0
    117e:	e8 ad fe ff ff       	call   1030 <printf@plt>
    1183:	b8 00 00 00 00       	mov    eax,0x0
    1188:	c9                   	leave  
    1189:	c3                   	ret    
    118a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]

0000000000001190 <__libc_csu_init>:
    1190:	41                   	inc    ecx
    1191:	57                   	push   edi
    1192:	4c                   	dec    esp
    1193:	8d 3d 4f 2c 00 00    	lea    edi,ds:0x2c4f
    1199:	41                   	inc    ecx
    119a:	56                   	push   esi
    119b:	49                   	dec    ecx
    119c:	89 d6                	mov    esi,edx
    119e:	41                   	inc    ecx
    119f:	55                   	push   ebp
    11a0:	49                   	dec    ecx
    11a1:	89 f5                	mov    ebp,esi
    11a3:	41                   	inc    ecx
    11a4:	54                   	push   esp
    11a5:	41                   	inc    ecx
    11a6:	89 fc                	mov    esp,edi
    11a8:	55                   	push   ebp
    11a9:	48                   	dec    eax
    11aa:	8d 2d 40 2c 00 00    	lea    ebp,ds:0x2c40
    11b0:	53                   	push   ebx
    11b1:	4c                   	dec    esp
    11b2:	29 fd                	sub    ebp,edi
    11b4:	48                   	dec    eax
    11b5:	83 ec 08             	sub    esp,0x8
    11b8:	e8 43 fe ff ff       	call   1000 <_init>
    11bd:	48                   	dec    eax
    11be:	c1 fd 03             	sar    ebp,0x3
    11c1:	74 1b                	je     11de <__libc_csu_init+0x4e>
    11c3:	31 db                	xor    ebx,ebx
    11c5:	0f 1f 00             	nop    DWORD PTR [eax]
    11c8:	4c                   	dec    esp
    11c9:	89 f2                	mov    edx,esi
    11cb:	4c                   	dec    esp
    11cc:	89 ee                	mov    esi,ebp
    11ce:	44                   	inc    esp
    11cf:	89 e7                	mov    edi,esp
    11d1:	41                   	inc    ecx
    11d2:	ff 14 df             	call   DWORD PTR [edi+ebx*8]
    11d5:	48                   	dec    eax
    11d6:	83 c3 01             	add    ebx,0x1
    11d9:	48                   	dec    eax
    11da:	39 dd                	cmp    ebp,ebx
    11dc:	75 ea                	jne    11c8 <__libc_csu_init+0x38>
    11de:	48                   	dec    eax
    11df:	83 c4 08             	add    esp,0x8
    11e2:	5b                   	pop    ebx
    11e3:	5d                   	pop    ebp
    11e4:	41                   	inc    ecx
    11e5:	5c                   	pop    esp
    11e6:	41                   	inc    ecx
    11e7:	5d                   	pop    ebp
    11e8:	41                   	inc    ecx
    11e9:	5e                   	pop    esi
    11ea:	41                   	inc    ecx
    11eb:	5f                   	pop    edi
    11ec:	c3                   	ret    
    11ed:	0f 1f 00             	nop    DWORD PTR [eax]

00000000000011f0 <__libc_csu_fini>:
    11f0:	c3                   	ret    

Disassembly of section .fini:

00000000000011f4 <_fini>:
    11f4:	48                   	dec    eax
    11f5:	83 ec 08             	sub    esp,0x8
    11f8:	48                   	dec    eax
    11f9:	83 c4 08             	add    esp,0x8
    11fc:	c3                   	ret    
