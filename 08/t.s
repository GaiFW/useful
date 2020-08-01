
t：     文件格式 elf64-x86-64


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

0000000000001030 <strcpy@plt>:
    1030:	ff 25 e2 2f 00 00    	jmp    DWORD PTR ds:0x2fe2
    1036:	68 00 00 00 00       	push   0x0
    103b:	e9 e0 ff ff ff       	jmp    1020 <.plt>

0000000000001040 <puts@plt>:
    1040:	ff 25 da 2f 00 00    	jmp    DWORD PTR ds:0x2fda
    1046:	68 01 00 00 00       	push   0x1
    104b:	e9 d0 ff ff ff       	jmp    1020 <.plt>

0000000000001050 <printf@plt>:
    1050:	ff 25 d2 2f 00 00    	jmp    DWORD PTR ds:0x2fd2
    1056:	68 02 00 00 00       	push   0x2
    105b:	e9 c0 ff ff ff       	jmp    1020 <.plt>

0000000000001060 <gets@plt>:
    1060:	ff 25 ca 2f 00 00    	jmp    DWORD PTR ds:0x2fca
    1066:	68 03 00 00 00       	push   0x3
    106b:	e9 b0 ff ff ff       	jmp    1020 <.plt>

Disassembly of section .plt.got:

0000000000001070 <__cxa_finalize@plt>:
    1070:	ff 25 82 2f 00 00    	jmp    DWORD PTR ds:0x2f82
    1076:	66 90                	xchg   ax,ax

Disassembly of section .text:

0000000000001080 <_start>:
    1080:	31 ed                	xor    ebp,ebp
    1082:	49                   	dec    ecx
    1083:	89 d1                	mov    ecx,edx
    1085:	5e                   	pop    esi
    1086:	48                   	dec    eax
    1087:	89 e2                	mov    edx,esp
    1089:	48                   	dec    eax
    108a:	83 e4 f0             	and    esp,0xfffffff0
    108d:	50                   	push   eax
    108e:	54                   	push   esp
    108f:	4c                   	dec    esp
    1090:	8d 05 da 01 00 00    	lea    eax,ds:0x1da
    1096:	48                   	dec    eax
    1097:	8d 0d 73 01 00 00    	lea    ecx,ds:0x173
    109d:	48                   	dec    eax
    109e:	8d 3d c1 00 00 00    	lea    edi,ds:0xc1
    10a4:	ff 15 36 2f 00 00    	call   DWORD PTR ds:0x2f36
    10aa:	f4                   	hlt    
    10ab:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]

00000000000010b0 <deregister_tm_clones>:
    10b0:	48                   	dec    eax
    10b1:	8d 3d 91 2f 00 00    	lea    edi,ds:0x2f91
    10b7:	48                   	dec    eax
    10b8:	8d 05 8a 2f 00 00    	lea    eax,ds:0x2f8a
    10be:	48                   	dec    eax
    10bf:	39 f8                	cmp    eax,edi
    10c1:	74 15                	je     10d8 <deregister_tm_clones+0x28>
    10c3:	48                   	dec    eax
    10c4:	8b 05 0e 2f 00 00    	mov    eax,DWORD PTR ds:0x2f0e
    10ca:	48                   	dec    eax
    10cb:	85 c0                	test   eax,eax
    10cd:	74 09                	je     10d8 <deregister_tm_clones+0x28>
    10cf:	ff e0                	jmp    eax
    10d1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
    10d8:	c3                   	ret    
    10d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]

00000000000010e0 <register_tm_clones>:
    10e0:	48                   	dec    eax
    10e1:	8d 3d 61 2f 00 00    	lea    edi,ds:0x2f61
    10e7:	48                   	dec    eax
    10e8:	8d 35 5a 2f 00 00    	lea    esi,ds:0x2f5a
    10ee:	48                   	dec    eax
    10ef:	29 fe                	sub    esi,edi
    10f1:	48                   	dec    eax
    10f2:	89 f0                	mov    eax,esi
    10f4:	48                   	dec    eax
    10f5:	c1 ee 3f             	shr    esi,0x3f
    10f8:	48                   	dec    eax
    10f9:	c1 f8 03             	sar    eax,0x3
    10fc:	48                   	dec    eax
    10fd:	01 c6                	add    esi,eax
    10ff:	48                   	dec    eax
    1100:	d1 fe                	sar    esi,1
    1102:	74 14                	je     1118 <register_tm_clones+0x38>
    1104:	48                   	dec    eax
    1105:	8b 05 e5 2e 00 00    	mov    eax,DWORD PTR ds:0x2ee5
    110b:	48                   	dec    eax
    110c:	85 c0                	test   eax,eax
    110e:	74 08                	je     1118 <register_tm_clones+0x38>
    1110:	ff e0                	jmp    eax
    1112:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
    1118:	c3                   	ret    
    1119:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]

0000000000001120 <__do_global_dtors_aux>:
    1120:	80 3d 21 2f 00 00 00 	cmp    BYTE PTR ds:0x2f21,0x0
    1127:	75 2f                	jne    1158 <__do_global_dtors_aux+0x38>
    1129:	55                   	push   ebp
    112a:	48                   	dec    eax
    112b:	83 3d c6 2e 00 00 00 	cmp    DWORD PTR ds:0x2ec6,0x0
    1132:	48                   	dec    eax
    1133:	89 e5                	mov    ebp,esp
    1135:	74 0c                	je     1143 <__do_global_dtors_aux+0x23>
    1137:	48                   	dec    eax
    1138:	8b 3d 02 2f 00 00    	mov    edi,DWORD PTR ds:0x2f02
    113e:	e8 2d ff ff ff       	call   1070 <__cxa_finalize@plt>
    1143:	e8 68 ff ff ff       	call   10b0 <deregister_tm_clones>
    1148:	c6 05 f9 2e 00 00 01 	mov    BYTE PTR ds:0x2ef9,0x1
    114f:	5d                   	pop    ebp
    1150:	c3                   	ret    
    1151:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
    1158:	c3                   	ret    
    1159:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]

0000000000001160 <frame_dummy>:
    1160:	e9 7b ff ff ff       	jmp    10e0 <register_tm_clones>

0000000000001165 <main>:
    1165:	55                   	push   ebp
    1166:	48                   	dec    eax
    1167:	89 e5                	mov    ebp,esp
    1169:	48                   	dec    eax
    116a:	83 ec 20             	sub    esp,0x20
    116d:	48                   	dec    eax
    116e:	c7 45 e0 00 00 00 00 	mov    DWORD PTR [ebp-0x20],0x0
    1175:	48                   	dec    eax
    1176:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
    117d:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
    1184:	48                   	dec    eax
    1185:	8d 3d 79 0e 00 00    	lea    edi,ds:0xe79
    118b:	b8 00 00 00 00       	mov    eax,0x0
    1190:	e8 bb fe ff ff       	call   1050 <printf@plt>
    1195:	48                   	dec    eax
    1196:	8d 45 e0             	lea    eax,[ebp-0x20]
    1199:	48                   	dec    eax
    119a:	89 c7                	mov    edi,eax
    119c:	b8 00 00 00 00       	mov    eax,0x0
    11a1:	e8 ba fe ff ff       	call   1060 <gets@plt>
    11a6:	48                   	dec    eax
    11a7:	8d 45 e0             	lea    eax,[ebp-0x20]
    11aa:	48                   	dec    eax
    11ab:	83 c0 01             	add    eax,0x1
    11ae:	48                   	dec    eax
    11af:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
    11b2:	eb 34                	jmp    11e8 <main+0x83>
    11b4:	48                   	dec    eax
    11b5:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
    11b8:	0f b6 10             	movzx  edx,BYTE PTR [eax]
    11bb:	48                   	dec    eax
    11bc:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
    11bf:	48                   	dec    eax
    11c0:	83 e8 01             	sub    eax,0x1
    11c3:	0f b6 00             	movzx  eax,BYTE PTR [eax]
    11c6:	38 c2                	cmp    dl,al
    11c8:	75 19                	jne    11e3 <main+0x7e>
    11ca:	48                   	dec    eax
    11cb:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
    11ce:	48                   	dec    eax
    11cf:	8d 50 ff             	lea    edx,[eax-0x1]
    11d2:	48                   	dec    eax
    11d3:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
    11d6:	48                   	dec    eax
    11d7:	89 c6                	mov    esi,eax
    11d9:	48                   	dec    eax
    11da:	89 d7                	mov    edi,edx
    11dc:	e8 4f fe ff ff       	call   1030 <strcpy@plt>
    11e1:	eb 05                	jmp    11e8 <main+0x83>
    11e3:	48                   	dec    eax
    11e4:	83 45 f8 01          	add    DWORD PTR [ebp-0x8],0x1
    11e8:	48                   	dec    eax
    11e9:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
    11ec:	0f b6 00             	movzx  eax,BYTE PTR [eax]
    11ef:	84 c0                	test   al,al
    11f1:	75 c1                	jne    11b4 <main+0x4f>
    11f3:	48                   	dec    eax
    11f4:	8d 45 e0             	lea    eax,[ebp-0x20]
    11f7:	48                   	dec    eax
    11f8:	89 c7                	mov    edi,eax
    11fa:	e8 41 fe ff ff       	call   1040 <puts@plt>
    11ff:	b8 00 00 00 00       	mov    eax,0x0
    1204:	c9                   	leave  
    1205:	c3                   	ret    
    1206:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[eax+eax*1+0x0]
    120d:	00 00 00 

0000000000001210 <__libc_csu_init>:
    1210:	41                   	inc    ecx
    1211:	57                   	push   edi
    1212:	4c                   	dec    esp
    1213:	8d 3d cf 2b 00 00    	lea    edi,ds:0x2bcf
    1219:	41                   	inc    ecx
    121a:	56                   	push   esi
    121b:	49                   	dec    ecx
    121c:	89 d6                	mov    esi,edx
    121e:	41                   	inc    ecx
    121f:	55                   	push   ebp
    1220:	49                   	dec    ecx
    1221:	89 f5                	mov    ebp,esi
    1223:	41                   	inc    ecx
    1224:	54                   	push   esp
    1225:	41                   	inc    ecx
    1226:	89 fc                	mov    esp,edi
    1228:	55                   	push   ebp
    1229:	48                   	dec    eax
    122a:	8d 2d c0 2b 00 00    	lea    ebp,ds:0x2bc0
    1230:	53                   	push   ebx
    1231:	4c                   	dec    esp
    1232:	29 fd                	sub    ebp,edi
    1234:	48                   	dec    eax
    1235:	83 ec 08             	sub    esp,0x8
    1238:	e8 c3 fd ff ff       	call   1000 <_init>
    123d:	48                   	dec    eax
    123e:	c1 fd 03             	sar    ebp,0x3
    1241:	74 1b                	je     125e <__libc_csu_init+0x4e>
    1243:	31 db                	xor    ebx,ebx
    1245:	0f 1f 00             	nop    DWORD PTR [eax]
    1248:	4c                   	dec    esp
    1249:	89 f2                	mov    edx,esi
    124b:	4c                   	dec    esp
    124c:	89 ee                	mov    esi,ebp
    124e:	44                   	inc    esp
    124f:	89 e7                	mov    edi,esp
    1251:	41                   	inc    ecx
    1252:	ff 14 df             	call   DWORD PTR [edi+ebx*8]
    1255:	48                   	dec    eax
    1256:	83 c3 01             	add    ebx,0x1
    1259:	48                   	dec    eax
    125a:	39 dd                	cmp    ebp,ebx
    125c:	75 ea                	jne    1248 <__libc_csu_init+0x38>
    125e:	48                   	dec    eax
    125f:	83 c4 08             	add    esp,0x8
    1262:	5b                   	pop    ebx
    1263:	5d                   	pop    ebp
    1264:	41                   	inc    ecx
    1265:	5c                   	pop    esp
    1266:	41                   	inc    ecx
    1267:	5d                   	pop    ebp
    1268:	41                   	inc    ecx
    1269:	5e                   	pop    esi
    126a:	41                   	inc    ecx
    126b:	5f                   	pop    edi
    126c:	c3                   	ret    
    126d:	0f 1f 00             	nop    DWORD PTR [eax]

0000000000001270 <__libc_csu_fini>:
    1270:	c3                   	ret    

Disassembly of section .fini:

0000000000001274 <_fini>:
    1274:	48                   	dec    eax
    1275:	83 ec 08             	sub    esp,0x8
    1278:	48                   	dec    eax
    1279:	83 c4 08             	add    esp,0x8
    127c:	c3                   	ret    
