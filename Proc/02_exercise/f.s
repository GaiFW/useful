
f：     文件格式 elf64-x86-64


Disassembly of section .interp:

0000000000000318 <.interp>:
 318:	2f                   	(bad)  
 319:	6c                   	ins    BYTE PTR es:[rdi],dx
 31a:	69 62 36 34 2f 6c 64 	imul   esp,DWORD PTR [rdx+0x36],0x646c2f34
 321:	2d 6c 69 6e 75       	sub    eax,0x756e696c
 326:	78 2d                	js     355 <_init-0xcab>
 328:	78 38                	js     362 <_init-0xc9e>
 32a:	36 2d 36 34 2e 73    	ss sub eax,0x732e3436
 330:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 331:	2e 32 00             	xor    al,BYTE PTR cs:[rax]

Disassembly of section .note.gnu.property:

0000000000000338 <.note.gnu.property>:
 338:	04 00                	add    al,0x0
 33a:	00 00                	add    BYTE PTR [rax],al
 33c:	10 00                	adc    BYTE PTR [rax],al
 33e:	00 00                	add    BYTE PTR [rax],al
 340:	05 00 00 00 47       	add    eax,0x47000000
 345:	4e 55                	rex.WRX push rbp
 347:	00 02                	add    BYTE PTR [rdx],al
 349:	00 00                	add    BYTE PTR [rax],al
 34b:	c0 04 00 00          	rol    BYTE PTR [rax+rax*1],0x0
 34f:	00 03                	add    BYTE PTR [rbx],al
 351:	00 00                	add    BYTE PTR [rax],al
 353:	00 00                	add    BYTE PTR [rax],al
 355:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .note.gnu.build-id:

0000000000000358 <.note.gnu.build-id>:
 358:	04 00                	add    al,0x0
 35a:	00 00                	add    BYTE PTR [rax],al
 35c:	14 00                	adc    al,0x0
 35e:	00 00                	add    BYTE PTR [rax],al
 360:	03 00                	add    eax,DWORD PTR [rax]
 362:	00 00                	add    BYTE PTR [rax],al
 364:	47                   	rex.RXB
 365:	4e 55                	rex.WRX push rbp
 367:	00 30                	add    BYTE PTR [rax],dh
 369:	66 34 64             	data16 xor al,0x64
 36c:	cb                   	retf   
 36d:	f8                   	clc    
 36e:	3e 26 7c a2          	ds es jl 314 <_init-0xcec>
 372:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 373:	b8 f0 d6 cc e8       	mov    eax,0xe8ccd6f0
 378:	09 1c ca             	or     DWORD PTR [rdx+rcx*8],ebx
 37b:	f3                   	repz

Disassembly of section .note.ABI-tag:

000000000000037c <.note.ABI-tag>:
 37c:	04 00                	add    al,0x0
 37e:	00 00                	add    BYTE PTR [rax],al
 380:	10 00                	adc    BYTE PTR [rax],al
 382:	00 00                	add    BYTE PTR [rax],al
 384:	01 00                	add    DWORD PTR [rax],eax
 386:	00 00                	add    BYTE PTR [rax],al
 388:	47                   	rex.RXB
 389:	4e 55                	rex.WRX push rbp
 38b:	00 00                	add    BYTE PTR [rax],al
 38d:	00 00                	add    BYTE PTR [rax],al
 38f:	00 03                	add    BYTE PTR [rbx],al
 391:	00 00                	add    BYTE PTR [rax],al
 393:	00 02                	add    BYTE PTR [rdx],al
 395:	00 00                	add    BYTE PTR [rax],al
 397:	00 00                	add    BYTE PTR [rax],al
 399:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .gnu.hash:

00000000000003a0 <.gnu.hash>:
 3a0:	02 00                	add    al,BYTE PTR [rax]
 3a2:	00 00                	add    BYTE PTR [rax],al
 3a4:	0d 00 00 00 01       	or     eax,0x1000000
 3a9:	00 00                	add    BYTE PTR [rax],al
 3ab:	00 06                	add    BYTE PTR [rsi],al
 3ad:	00 00                	add    BYTE PTR [rax],al
 3af:	00 00                	add    BYTE PTR [rax],al
 3b1:	00 81 00 00 00 00    	add    BYTE PTR [rcx+0x0],al
 3b7:	00 0d 00 00 00 00    	add    BYTE PTR [rip+0x0],cl        # 3bd <_init-0xc43>
 3bd:	00 00                	add    BYTE PTR [rax],al
 3bf:	00 d1                	add    cl,dl
 3c1:	65 ce                	gs (bad) 
 3c3:	6d                   	ins    DWORD PTR es:[rdi],dx

Disassembly of section .dynsym:

00000000000003c8 <.dynsym>:
	...
 3e0:	7f 00                	jg     3e2 <_init-0xc1e>
 3e2:	00 00                	add    BYTE PTR [rax],al
 3e4:	20 00                	and    BYTE PTR [rax],al
	...
 3f6:	00 00                	add    BYTE PTR [rax],al
 3f8:	12 00                	adc    al,BYTE PTR [rax]
 3fa:	00 00                	add    BYTE PTR [rax],al
 3fc:	12 00                	adc    al,BYTE PTR [rax]
	...
 40e:	00 00                	add    BYTE PTR [rax],al
 410:	63 00                	movsxd eax,DWORD PTR [rax]
 412:	00 00                	add    BYTE PTR [rax],al
 414:	12 00                	adc    al,BYTE PTR [rax]
	...
 426:	00 00                	add    BYTE PTR [rax],al
 428:	17                   	(bad)  
 429:	00 00                	add    BYTE PTR [rax],al
 42b:	00 12                	add    BYTE PTR [rdx],dl
	...
 43d:	00 00                	add    BYTE PTR [rax],al
 43f:	00 28                	add    BYTE PTR [rax],ch
 441:	00 00                	add    BYTE PTR [rax],al
 443:	00 12                	add    BYTE PTR [rdx],dl
	...
 455:	00 00                	add    BYTE PTR [rax],al
 457:	00 51 00             	add    BYTE PTR [rcx+0x0],dl
 45a:	00 00                	add    BYTE PTR [rax],al
 45c:	12 00                	adc    al,BYTE PTR [rax]
	...
 46e:	00 00                	add    BYTE PTR [rax],al
 470:	4a 00 00             	rex.WX add BYTE PTR [rax],al
 473:	00 12                	add    BYTE PTR [rdx],dl
	...
 485:	00 00                	add    BYTE PTR [rax],al
 487:	00 9b 00 00 00 20    	add    BYTE PTR [rbx+0x20000000],bl
	...
 49d:	00 00                	add    BYTE PTR [rax],al
 49f:	00 2f                	add    BYTE PTR [rdi],ch
 4a1:	00 00                	add    BYTE PTR [rax],al
 4a3:	00 12                	add    BYTE PTR [rdx],dl
	...
 4b5:	00 00                	add    BYTE PTR [rax],al
 4b7:	00 43 00             	add    BYTE PTR [rbx+0x0],al
 4ba:	00 00                	add    BYTE PTR [rax],al
 4bc:	12 00                	adc    al,BYTE PTR [rax]
	...
 4ce:	00 00                	add    BYTE PTR [rax],al
 4d0:	0b 00                	or     eax,DWORD PTR [rax]
 4d2:	00 00                	add    BYTE PTR [rax],al
 4d4:	12 00                	adc    al,BYTE PTR [rax]
	...
 4e6:	00 00                	add    BYTE PTR [rax],al
 4e8:	aa                   	stos   BYTE PTR es:[rdi],al
 4e9:	00 00                	add    BYTE PTR [rax],al
 4eb:	00 20                	add    BYTE PTR [rax],ah
	...
 4fd:	00 00                	add    BYTE PTR [rax],al
 4ff:	00 34 00             	add    BYTE PTR [rax+rax*1],dh
 502:	00 00                	add    BYTE PTR [rax],al
 504:	22 00                	and    al,BYTE PTR [rax]
	...

Disassembly of section .dynstr:

0000000000000518 <.dynstr>:
 518:	00 6c 69 62          	add    BYTE PTR [rcx+rbp*2+0x62],ch
 51c:	63 2e                	movsxd ebp,DWORD PTR [rsi]
 51e:	73 6f                	jae    58f <_init-0xa71>
 520:	2e 36 00 70 65       	cs add BYTE PTR ss:[rax+0x65],dh
 525:	72 72                	jb     599 <_init-0xa67>
 527:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 528:	72 00                	jb     52a <_init-0xad6>
 52a:	70 75                	jo     5a1 <_init-0xa5f>
 52c:	74 73                	je     5a1 <_init-0xa5f>
 52e:	00 5f 5f             	add    BYTE PTR [rdi+0x5f],bl
 531:	73 74                	jae    5a7 <_init-0xa59>
 533:	61                   	(bad)  
 534:	63 6b 5f             	movsxd ebp,DWORD PTR [rbx+0x5f]
 537:	63 68 6b             	movsxd ebp,DWORD PTR [rax+0x6b]
 53a:	5f                   	pop    rdi
 53b:	66 61                	data16 (bad) 
 53d:	69 6c 00 70 72 69 6e 	imul   ebp,DWORD PTR [rax+rax*1+0x70],0x746e6972
 544:	74 
 545:	66 00 6f 70          	data16 add BYTE PTR [rdi+0x70],ch
 549:	65 6e                	outs   dx,BYTE PTR gs:[rsi]
 54b:	00 5f 5f             	add    BYTE PTR [rdi+0x5f],bl
 54e:	63 78 61             	movsxd edi,DWORD PTR [rax+0x61]
 551:	5f                   	pop    rdi
 552:	66 69 6e 61 6c 69    	imul   bp,WORD PTR [rsi+0x61],0x696c
 558:	7a 65                	jp     5bf <_init-0xa41>
 55a:	00 61 63             	add    BYTE PTR [rcx+0x63],ah
 55d:	63 65 73             	movsxd esp,DWORD PTR [rbp+0x73]
 560:	73 00                	jae    562 <_init-0xa9e>
 562:	6d                   	ins    DWORD PTR es:[rdi],dx
 563:	6b 66 69 66          	imul   esp,DWORD PTR [rsi+0x69],0x66
 567:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 568:	00 5f 5f             	add    BYTE PTR [rdi+0x5f],bl
 56b:	6c                   	ins    BYTE PTR es:[rdi],dx
 56c:	69 62 63 5f 73 74 61 	imul   esp,DWORD PTR [rdx+0x63],0x6174735f
 573:	72 74                	jb     5e9 <_init-0xa17>
 575:	5f                   	pop    rdi
 576:	6d                   	ins    DWORD PTR es:[rdi],dx
 577:	61                   	(bad)  
 578:	69 6e 00 77 72 69 74 	imul   ebp,DWORD PTR [rsi+0x0],0x74697277
 57f:	65 00 47 4c          	add    BYTE PTR gs:[rdi+0x4c],al
 583:	49                   	rex.WB
 584:	42                   	rex.X
 585:	43 5f                	rex.XB pop r15
 587:	32 2e                	xor    ch,BYTE PTR [rsi]
 589:	34 00                	xor    al,0x0
 58b:	47                   	rex.RXB
 58c:	4c                   	rex.WR
 58d:	49                   	rex.WB
 58e:	42                   	rex.X
 58f:	43 5f                	rex.XB pop r15
 591:	32 2e                	xor    ch,BYTE PTR [rsi]
 593:	32 2e                	xor    ch,BYTE PTR [rsi]
 595:	35 00 5f 49 54       	xor    eax,0x54495f00
 59a:	4d 5f                	rex.WRB pop r15
 59c:	64 65 72 65          	fs gs jb 605 <_init-0x9fb>
 5a0:	67 69 73 74 65 72 54 	imul   esi,DWORD PTR [ebx+0x74],0x4d547265
 5a7:	4d 
 5a8:	43 6c                	rex.XB ins BYTE PTR es:[rdi],dx
 5aa:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 5ab:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 5ac:	65 54                	gs push rsp
 5ae:	61                   	(bad)  
 5af:	62                   	(bad)  
 5b0:	6c                   	ins    BYTE PTR es:[rdi],dx
 5b1:	65 00 5f 5f          	add    BYTE PTR gs:[rdi+0x5f],bl
 5b5:	67 6d                	ins    DWORD PTR es:[edi],dx
 5b7:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 5b8:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 5b9:	5f                   	pop    rdi
 5ba:	73 74                	jae    630 <_init-0x9d0>
 5bc:	61                   	(bad)  
 5bd:	72 74                	jb     633 <_init-0x9cd>
 5bf:	5f                   	pop    rdi
 5c0:	5f                   	pop    rdi
 5c1:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
 5c4:	54                   	push   rsp
 5c5:	4d 5f                	rex.WRB pop r15
 5c7:	72 65                	jb     62e <_init-0x9d2>
 5c9:	67 69 73 74 65 72 54 	imul   esi,DWORD PTR [ebx+0x74],0x4d547265
 5d0:	4d 
 5d1:	43 6c                	rex.XB ins BYTE PTR es:[rdi],dx
 5d3:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 5d4:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 5d5:	65 54                	gs push rsp
 5d7:	61                   	(bad)  
 5d8:	62                   	.byte 0x62
 5d9:	6c                   	ins    BYTE PTR es:[rdi],dx
 5da:	65                   	gs
	...

Disassembly of section .gnu.version:

00000000000005dc <.gnu.version>:
 5dc:	00 00                	add    BYTE PTR [rax],al
 5de:	00 00                	add    BYTE PTR [rax],al
 5e0:	02 00                	add    al,BYTE PTR [rax]
 5e2:	02 00                	add    al,BYTE PTR [rax]
 5e4:	03 00                	add    eax,DWORD PTR [rax]
 5e6:	02 00                	add    al,BYTE PTR [rax]
 5e8:	02 00                	add    al,BYTE PTR [rax]
 5ea:	02 00                	add    al,BYTE PTR [rax]
 5ec:	00 00                	add    BYTE PTR [rax],al
 5ee:	02 00                	add    al,BYTE PTR [rax]
 5f0:	02 00                	add    al,BYTE PTR [rax]
 5f2:	02 00                	add    al,BYTE PTR [rax]
 5f4:	00 00                	add    BYTE PTR [rax],al
 5f6:	02 00                	add    al,BYTE PTR [rax]

Disassembly of section .gnu.version_r:

00000000000005f8 <.gnu.version_r>:
 5f8:	01 00                	add    DWORD PTR [rax],eax
 5fa:	02 00                	add    al,BYTE PTR [rax]
 5fc:	01 00                	add    DWORD PTR [rax],eax
 5fe:	00 00                	add    BYTE PTR [rax],al
 600:	10 00                	adc    BYTE PTR [rax],al
 602:	00 00                	add    BYTE PTR [rax],al
 604:	00 00                	add    BYTE PTR [rax],al
 606:	00 00                	add    BYTE PTR [rax],al
 608:	14 69                	adc    al,0x69
 60a:	69 0d 00 00 03 00 69 	imul   ecx,DWORD PTR [rip+0x30000],0x69        # 30614 <_end+0x2c5fc>
 611:	00 00 00 
 614:	10 00                	adc    BYTE PTR [rax],al
 616:	00 00                	add    BYTE PTR [rax],al
 618:	75 1a                	jne    634 <_init-0x9cc>
 61a:	69 09 00 00 02 00    	imul   ecx,DWORD PTR [rcx],0x20000
 620:	73 00                	jae    622 <_init-0x9de>
 622:	00 00                	add    BYTE PTR [rax],al
 624:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .rela.dyn:

0000000000000628 <.rela.dyn>:
 628:	80 3d 00 00 00 00 00 	cmp    BYTE PTR [rip+0x0],0x0        # 62f <_init-0x9d1>
 62f:	00 08                	add    BYTE PTR [rax],cl
 631:	00 00                	add    BYTE PTR [rax],al
 633:	00 00                	add    BYTE PTR [rax],al
 635:	00 00                	add    BYTE PTR [rax],al
 637:	00 20                	add    BYTE PTR [rax],ah
 639:	12 00                	adc    al,BYTE PTR [rax]
 63b:	00 00                	add    BYTE PTR [rax],al
 63d:	00 00                	add    BYTE PTR [rax],al
 63f:	00 88 3d 00 00 00    	add    BYTE PTR [rax+0x3d],cl
 645:	00 00                	add    BYTE PTR [rax],al
 647:	00 08                	add    BYTE PTR [rax],cl
 649:	00 00                	add    BYTE PTR [rax],al
 64b:	00 00                	add    BYTE PTR [rax],al
 64d:	00 00                	add    BYTE PTR [rax],al
 64f:	00 e0                	add    al,ah
 651:	11 00                	adc    DWORD PTR [rax],eax
 653:	00 00                	add    BYTE PTR [rax],al
 655:	00 00                	add    BYTE PTR [rax],al
 657:	00 08                	add    BYTE PTR [rax],cl
 659:	40 00 00             	add    BYTE PTR [rax],al
 65c:	00 00                	add    BYTE PTR [rax],al
 65e:	00 00                	add    BYTE PTR [rax],al
 660:	08 00                	or     BYTE PTR [rax],al
 662:	00 00                	add    BYTE PTR [rax],al
 664:	00 00                	add    BYTE PTR [rax],al
 666:	00 00                	add    BYTE PTR [rax],al
 668:	08 40 00             	or     BYTE PTR [rax+0x0],al
 66b:	00 00                	add    BYTE PTR [rax],al
 66d:	00 00                	add    BYTE PTR [rax],al
 66f:	00 d8                	add    al,bl
 671:	3f                   	(bad)  
 672:	00 00                	add    BYTE PTR [rax],al
 674:	00 00                	add    BYTE PTR [rax],al
 676:	00 00                	add    BYTE PTR [rax],al
 678:	06                   	(bad)  
 679:	00 00                	add    BYTE PTR [rax],al
 67b:	00 01                	add    BYTE PTR [rcx],al
	...
 685:	00 00                	add    BYTE PTR [rax],al
 687:	00 e0                	add    al,ah
 689:	3f                   	(bad)  
 68a:	00 00                	add    BYTE PTR [rax],al
 68c:	00 00                	add    BYTE PTR [rax],al
 68e:	00 00                	add    BYTE PTR [rax],al
 690:	06                   	(bad)  
 691:	00 00                	add    BYTE PTR [rax],al
 693:	00 06                	add    BYTE PTR [rsi],al
	...
 69d:	00 00                	add    BYTE PTR [rax],al
 69f:	00 e8                	add    al,ch
 6a1:	3f                   	(bad)  
 6a2:	00 00                	add    BYTE PTR [rax],al
 6a4:	00 00                	add    BYTE PTR [rax],al
 6a6:	00 00                	add    BYTE PTR [rax],al
 6a8:	06                   	(bad)  
 6a9:	00 00                	add    BYTE PTR [rax],al
 6ab:	00 08                	add    BYTE PTR [rax],cl
	...
 6b5:	00 00                	add    BYTE PTR [rax],al
 6b7:	00 f0                	add    al,dh
 6b9:	3f                   	(bad)  
 6ba:	00 00                	add    BYTE PTR [rax],al
 6bc:	00 00                	add    BYTE PTR [rax],al
 6be:	00 00                	add    BYTE PTR [rax],al
 6c0:	06                   	(bad)  
 6c1:	00 00                	add    BYTE PTR [rax],al
 6c3:	00 0c 00             	add    BYTE PTR [rax+rax*1],cl
	...
 6ce:	00 00                	add    BYTE PTR [rax],al
 6d0:	f8                   	clc    
 6d1:	3f                   	(bad)  
 6d2:	00 00                	add    BYTE PTR [rax],al
 6d4:	00 00                	add    BYTE PTR [rax],al
 6d6:	00 00                	add    BYTE PTR [rax],al
 6d8:	06                   	(bad)  
 6d9:	00 00                	add    BYTE PTR [rax],al
 6db:	00 0d 00 00 00 00    	add    BYTE PTR [rip+0x0],cl        # 6e1 <_init-0x91f>
 6e1:	00 00                	add    BYTE PTR [rax],al
 6e3:	00 00                	add    BYTE PTR [rax],al
 6e5:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .rela.plt:

00000000000006e8 <.rela.plt>:
 6e8:	98                   	cwde   
 6e9:	3f                   	(bad)  
 6ea:	00 00                	add    BYTE PTR [rax],al
 6ec:	00 00                	add    BYTE PTR [rax],al
 6ee:	00 00                	add    BYTE PTR [rax],al
 6f0:	07                   	(bad)  
 6f1:	00 00                	add    BYTE PTR [rax],al
 6f3:	00 02                	add    BYTE PTR [rdx],al
	...
 6fd:	00 00                	add    BYTE PTR [rax],al
 6ff:	00 a0 3f 00 00 00    	add    BYTE PTR [rax+0x3f],ah
 705:	00 00                	add    BYTE PTR [rax],al
 707:	00 07                	add    BYTE PTR [rdi],al
 709:	00 00                	add    BYTE PTR [rax],al
 70b:	00 03                	add    BYTE PTR [rbx],al
	...
 715:	00 00                	add    BYTE PTR [rax],al
 717:	00 a8 3f 00 00 00    	add    BYTE PTR [rax+0x3f],ch
 71d:	00 00                	add    BYTE PTR [rax],al
 71f:	00 07                	add    BYTE PTR [rdi],al
 721:	00 00                	add    BYTE PTR [rax],al
 723:	00 04 00             	add    BYTE PTR [rax+rax*1],al
	...
 72e:	00 00                	add    BYTE PTR [rax],al
 730:	b0 3f                	mov    al,0x3f
 732:	00 00                	add    BYTE PTR [rax],al
 734:	00 00                	add    BYTE PTR [rax],al
 736:	00 00                	add    BYTE PTR [rax],al
 738:	07                   	(bad)  
 739:	00 00                	add    BYTE PTR [rax],al
 73b:	00 05 00 00 00 00    	add    BYTE PTR [rip+0x0],al        # 741 <_init-0x8bf>
 741:	00 00                	add    BYTE PTR [rax],al
 743:	00 00                	add    BYTE PTR [rax],al
 745:	00 00                	add    BYTE PTR [rax],al
 747:	00 b8 3f 00 00 00    	add    BYTE PTR [rax+0x3f],bh
 74d:	00 00                	add    BYTE PTR [rax],al
 74f:	00 07                	add    BYTE PTR [rdi],al
 751:	00 00                	add    BYTE PTR [rax],al
 753:	00 07                	add    BYTE PTR [rdi],al
	...
 75d:	00 00                	add    BYTE PTR [rax],al
 75f:	00 c0                	add    al,al
 761:	3f                   	(bad)  
 762:	00 00                	add    BYTE PTR [rax],al
 764:	00 00                	add    BYTE PTR [rax],al
 766:	00 00                	add    BYTE PTR [rax],al
 768:	07                   	(bad)  
 769:	00 00                	add    BYTE PTR [rax],al
 76b:	00 09                	add    BYTE PTR [rcx],cl
	...
 775:	00 00                	add    BYTE PTR [rax],al
 777:	00 c8                	add    al,cl
 779:	3f                   	(bad)  
 77a:	00 00                	add    BYTE PTR [rax],al
 77c:	00 00                	add    BYTE PTR [rax],al
 77e:	00 00                	add    BYTE PTR [rax],al
 780:	07                   	(bad)  
 781:	00 00                	add    BYTE PTR [rax],al
 783:	00 0a                	add    BYTE PTR [rdx],cl
	...
 78d:	00 00                	add    BYTE PTR [rax],al
 78f:	00 d0                	add    al,dl
 791:	3f                   	(bad)  
 792:	00 00                	add    BYTE PTR [rax],al
 794:	00 00                	add    BYTE PTR [rax],al
 796:	00 00                	add    BYTE PTR [rax],al
 798:	07                   	(bad)  
 799:	00 00                	add    BYTE PTR [rax],al
 79b:	00 0b                	add    BYTE PTR [rbx],cl
	...

Disassembly of section .init:

0000000000001000 <_init>:
_init():
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    rsp,0x8
    1008:	48 8b 05 d9 2f 00 00 	mov    rax,QWORD PTR [rip+0x2fd9]        # 3fe8 <__gmon_start__>
    100f:	48 85 c0             	test   rax,rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   rax
    1016:	48 83 c4 08          	add    rsp,0x8
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 62 2f 00 00    	push   QWORD PTR [rip+0x2f62]        # 3f88 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 63 2f 00 00 	bnd jmp QWORD PTR [rip+0x2f63]        # 3f90 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nop    DWORD PTR [rax]
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	push   0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmp 1020 <.plt>
    103f:	90                   	nop
    1040:	f3 0f 1e fa          	endbr64 
    1044:	68 01 00 00 00       	push   0x1
    1049:	f2 e9 d1 ff ff ff    	bnd jmp 1020 <.plt>
    104f:	90                   	nop
    1050:	f3 0f 1e fa          	endbr64 
    1054:	68 02 00 00 00       	push   0x2
    1059:	f2 e9 c1 ff ff ff    	bnd jmp 1020 <.plt>
    105f:	90                   	nop
    1060:	f3 0f 1e fa          	endbr64 
    1064:	68 03 00 00 00       	push   0x3
    1069:	f2 e9 b1 ff ff ff    	bnd jmp 1020 <.plt>
    106f:	90                   	nop
    1070:	f3 0f 1e fa          	endbr64 
    1074:	68 04 00 00 00       	push   0x4
    1079:	f2 e9 a1 ff ff ff    	bnd jmp 1020 <.plt>
    107f:	90                   	nop
    1080:	f3 0f 1e fa          	endbr64 
    1084:	68 05 00 00 00       	push   0x5
    1089:	f2 e9 91 ff ff ff    	bnd jmp 1020 <.plt>
    108f:	90                   	nop
    1090:	f3 0f 1e fa          	endbr64 
    1094:	68 06 00 00 00       	push   0x6
    1099:	f2 e9 81 ff ff ff    	bnd jmp 1020 <.plt>
    109f:	90                   	nop
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	68 07 00 00 00       	push   0x7
    10a9:	f2 e9 71 ff ff ff    	bnd jmp 1020 <.plt>
    10af:	90                   	nop

Disassembly of section .plt.got:

00000000000010b0 <__cxa_finalize@plt>:
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	f2 ff 25 3d 2f 00 00 	bnd jmp QWORD PTR [rip+0x2f3d]        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    10bb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .plt.sec:

00000000000010c0 <puts@plt>:
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	f2 ff 25 cd 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ecd]        # 3f98 <puts@GLIBC_2.2.5>
    10cb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010d0 <write@plt>:
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	f2 ff 25 c5 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ec5]        # 3fa0 <write@GLIBC_2.2.5>
    10db:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010e0 <__stack_chk_fail@plt>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	f2 ff 25 bd 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ebd]        # 3fa8 <__stack_chk_fail@GLIBC_2.4>
    10eb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010f0 <printf@plt>:
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	f2 ff 25 b5 2e 00 00 	bnd jmp QWORD PTR [rip+0x2eb5]        # 3fb0 <printf@GLIBC_2.2.5>
    10fb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001100 <mkfifo@plt>:
    1100:	f3 0f 1e fa          	endbr64 
    1104:	f2 ff 25 ad 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ead]        # 3fb8 <mkfifo@GLIBC_2.2.5>
    110b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001110 <open@plt>:
    1110:	f3 0f 1e fa          	endbr64 
    1114:	f2 ff 25 a5 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ea5]        # 3fc0 <open@GLIBC_2.2.5>
    111b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001120 <access@plt>:
    1120:	f3 0f 1e fa          	endbr64 
    1124:	f2 ff 25 9d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e9d]        # 3fc8 <access@GLIBC_2.2.5>
    112b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001130 <perror@plt>:
    1130:	f3 0f 1e fa          	endbr64 
    1134:	f2 ff 25 95 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e95]        # 3fd0 <perror@GLIBC_2.2.5>
    113b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .text:

0000000000001140 <_start>:
_start():
    1140:	f3 0f 1e fa          	endbr64 
    1144:	31 ed                	xor    ebp,ebp
    1146:	49 89 d1             	mov    r9,rdx
    1149:	5e                   	pop    rsi
    114a:	48 89 e2             	mov    rdx,rsp
    114d:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
    1151:	50                   	push   rax
    1152:	54                   	push   rsp
    1153:	4c 8d 05 b6 02 00 00 	lea    r8,[rip+0x2b6]        # 1410 <__libc_csu_fini>
    115a:	48 8d 0d 3f 02 00 00 	lea    rcx,[rip+0x23f]        # 13a0 <__libc_csu_init>
    1161:	48 8d 3d c1 00 00 00 	lea    rdi,[rip+0xc1]        # 1229 <main>
    1168:	ff 15 72 2e 00 00    	call   QWORD PTR [rip+0x2e72]        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    116e:	f4                   	hlt    
    116f:	90                   	nop

0000000000001170 <deregister_tm_clones>:
deregister_tm_clones():
    1170:	48 8d 3d 99 2e 00 00 	lea    rdi,[rip+0x2e99]        # 4010 <__TMC_END__>
    1177:	48 8d 05 92 2e 00 00 	lea    rax,[rip+0x2e92]        # 4010 <__TMC_END__>
    117e:	48 39 f8             	cmp    rax,rdi
    1181:	74 15                	je     1198 <deregister_tm_clones+0x28>
    1183:	48 8b 05 4e 2e 00 00 	mov    rax,QWORD PTR [rip+0x2e4e]        # 3fd8 <_ITM_deregisterTMCloneTable>
    118a:	48 85 c0             	test   rax,rax
    118d:	74 09                	je     1198 <deregister_tm_clones+0x28>
    118f:	ff e0                	jmp    rax
    1191:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1198:	c3                   	ret    
    1199:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000011a0 <register_tm_clones>:
register_tm_clones():
    11a0:	48 8d 3d 69 2e 00 00 	lea    rdi,[rip+0x2e69]        # 4010 <__TMC_END__>
    11a7:	48 8d 35 62 2e 00 00 	lea    rsi,[rip+0x2e62]        # 4010 <__TMC_END__>
    11ae:	48 29 fe             	sub    rsi,rdi
    11b1:	48 89 f0             	mov    rax,rsi
    11b4:	48 c1 ee 3f          	shr    rsi,0x3f
    11b8:	48 c1 f8 03          	sar    rax,0x3
    11bc:	48 01 c6             	add    rsi,rax
    11bf:	48 d1 fe             	sar    rsi,1
    11c2:	74 14                	je     11d8 <register_tm_clones+0x38>
    11c4:	48 8b 05 25 2e 00 00 	mov    rax,QWORD PTR [rip+0x2e25]        # 3ff0 <_ITM_registerTMCloneTable>
    11cb:	48 85 c0             	test   rax,rax
    11ce:	74 08                	je     11d8 <register_tm_clones+0x38>
    11d0:	ff e0                	jmp    rax
    11d2:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    11d8:	c3                   	ret    
    11d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000011e0 <__do_global_dtors_aux>:
__do_global_dtors_aux():
    11e0:	f3 0f 1e fa          	endbr64 
    11e4:	80 3d 25 2e 00 00 00 	cmp    BYTE PTR [rip+0x2e25],0x0        # 4010 <__TMC_END__>
    11eb:	75 2b                	jne    1218 <__do_global_dtors_aux+0x38>
    11ed:	55                   	push   rbp
    11ee:	48 83 3d 02 2e 00 00 	cmp    QWORD PTR [rip+0x2e02],0x0        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    11f5:	00 
    11f6:	48 89 e5             	mov    rbp,rsp
    11f9:	74 0c                	je     1207 <__do_global_dtors_aux+0x27>
    11fb:	48 8b 3d 06 2e 00 00 	mov    rdi,QWORD PTR [rip+0x2e06]        # 4008 <__dso_handle>
    1202:	e8 a9 fe ff ff       	call   10b0 <__cxa_finalize@plt>
    1207:	e8 64 ff ff ff       	call   1170 <deregister_tm_clones>
    120c:	c6 05 fd 2d 00 00 01 	mov    BYTE PTR [rip+0x2dfd],0x1        # 4010 <__TMC_END__>
    1213:	5d                   	pop    rbp
    1214:	c3                   	ret    
    1215:	0f 1f 00             	nop    DWORD PTR [rax]
    1218:	c3                   	ret    
    1219:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001220 <frame_dummy>:
frame_dummy():
    1220:	f3 0f 1e fa          	endbr64 
    1224:	e9 77 ff ff ff       	jmp    11a0 <register_tm_clones>

0000000000001229 <main>:
main():
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:11
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
    1229:	f3 0f 1e fa          	endbr64 
    122d:	55                   	push   rbp
    122e:	48 89 e5             	mov    rbp,rsp
    1231:	48 81 ec 20 04 00 00 	sub    rsp,0x420
    1238:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    123f:	00 00 
    1241:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    1245:	31 c0                	xor    eax,eax
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:12
	if(access("myfifo",F_OK))//0-exite 
    1247:	be 00 00 00 00       	mov    esi,0x0
    124c:	48 8d 3d b1 0d 00 00 	lea    rdi,[rip+0xdb1]        # 2004 <_IO_stdin_used+0x4>
    1253:	e8 c8 fe ff ff       	call   1120 <access@plt>
    1258:	85 c0                	test   eax,eax
    125a:	74 2b                	je     1287 <main+0x5e>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:14
	{
		if(mkfifo("myfifo",0644))
    125c:	be a4 01 00 00       	mov    esi,0x1a4
    1261:	48 8d 3d 9c 0d 00 00 	lea    rdi,[rip+0xd9c]        # 2004 <_IO_stdin_used+0x4>
    1268:	e8 93 fe ff ff       	call   1100 <mkfifo@plt>
    126d:	85 c0                	test   eax,eax
    126f:	74 16                	je     1287 <main+0x5e>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:16
		{
			perror("mypipe");
    1271:	48 8d 3d 93 0d 00 00 	lea    rdi,[rip+0xd93]        # 200b <_IO_stdin_used+0xb>
    1278:	e8 b3 fe ff ff       	call   1130 <perror@plt>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:17
			return 0;
    127d:	b8 00 00 00 00       	mov    eax,0x0
    1282:	e9 00 01 00 00       	jmp    1387 <main+0x15e>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:21
		}
	}

	int fd = open("myfifo",O_WRONLY);
    1287:	be 01 00 00 00       	mov    esi,0x1
    128c:	48 8d 3d 71 0d 00 00 	lea    rdi,[rip+0xd71]        # 2004 <_IO_stdin_used+0x4>
    1293:	b8 00 00 00 00       	mov    eax,0x0
    1298:	e8 73 fe ff ff       	call   1110 <open@plt>
    129d:	89 85 e8 fb ff ff    	mov    DWORD PTR [rbp-0x418],eax
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:22
	if(fd == -1)
    12a3:	83 bd e8 fb ff ff ff 	cmp    DWORD PTR [rbp-0x418],0xffffffff
    12aa:	75 16                	jne    12c2 <main+0x99>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:24
	{
		perror("open write");
    12ac:	48 8d 3d 5f 0d 00 00 	lea    rdi,[rip+0xd5f]        # 2012 <_IO_stdin_used+0x12>
    12b3:	e8 78 fe ff ff       	call   1130 <perror@plt>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:25
		return -1;
    12b8:	b8 ff ff ff ff       	mov    eax,0xffffffff
    12bd:	e9 c5 00 00 00       	jmp    1387 <main+0x15e>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:27
	}
	char buf[1024]="";
    12c2:	48 c7 85 f0 fb ff ff 	mov    QWORD PTR [rbp-0x410],0x0
    12c9:	00 00 00 00 
    12cd:	48 c7 85 f8 fb ff ff 	mov    QWORD PTR [rbp-0x408],0x0
    12d4:	00 00 00 00 
    12d8:	48 8d 95 00 fc ff ff 	lea    rdx,[rbp-0x400]
    12df:	b8 00 00 00 00       	mov    eax,0x0
    12e4:	b9 7e 00 00 00       	mov    ecx,0x7e
    12e9:	48 89 d7             	mov    rdi,rdx
    12ec:	f3 48 ab             	rep stos QWORD PTR es:[rdi],rax
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:28
	for(int i=0;i<1024;i++)
    12ef:	c7 85 e0 fb ff ff 00 	mov    DWORD PTR [rbp-0x420],0x0
    12f6:	00 00 00 
    12f9:	eb 17                	jmp    1312 <main+0xe9>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:30 (discriminator 3)
	{
		buf[i]=1;
    12fb:	8b 85 e0 fb ff ff    	mov    eax,DWORD PTR [rbp-0x420]
    1301:	48 98                	cdqe   
    1303:	c6 84 05 f0 fb ff ff 	mov    BYTE PTR [rbp+rax*1-0x410],0x1
    130a:	01 
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:28 (discriminator 3)
	for(int i=0;i<1024;i++)
    130b:	83 85 e0 fb ff ff 01 	add    DWORD PTR [rbp-0x420],0x1
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:28 (discriminator 1)
    1312:	81 bd e0 fb ff ff ff 	cmp    DWORD PTR [rbp-0x420],0x3ff
    1319:	03 00 00 
    131c:	7e dd                	jle    12fb <main+0xd2>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:32
	}
	printf("------------\n");
    131e:	48 8d 3d f8 0c 00 00 	lea    rdi,[rip+0xcf8]        # 201d <_IO_stdin_used+0x1d>
    1325:	e8 96 fd ff ff       	call   10c0 <puts@plt>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:33
	int ret=0;
    132a:	c7 85 ec fb ff ff 00 	mov    DWORD PTR [rbp-0x414],0x0
    1331:	00 00 00 
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:34
	int sum=0;
    1334:	c7 85 e4 fb ff ff 00 	mov    DWORD PTR [rbp-0x41c],0x0
    133b:	00 00 00 
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:37 (discriminator 1)
	while(1)
	{
		ret = write(fd,buf,sizeof(buf));
    133e:	48 8d 8d f0 fb ff ff 	lea    rcx,[rbp-0x410]
    1345:	8b 85 e8 fb ff ff    	mov    eax,DWORD PTR [rbp-0x418]
    134b:	ba 00 04 00 00       	mov    edx,0x400
    1350:	48 89 ce             	mov    rsi,rcx
    1353:	89 c7                	mov    edi,eax
    1355:	e8 76 fd ff ff       	call   10d0 <write@plt>
    135a:	89 85 ec fb ff ff    	mov    DWORD PTR [rbp-0x414],eax
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:38 (discriminator 1)
		sum +=ret;
    1360:	8b 85 ec fb ff ff    	mov    eax,DWORD PTR [rbp-0x414]
    1366:	01 85 e4 fb ff ff    	add    DWORD PTR [rbp-0x41c],eax
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:39 (discriminator 1)
		printf("%d",sum);
    136c:	8b 85 e4 fb ff ff    	mov    eax,DWORD PTR [rbp-0x41c]
    1372:	89 c6                	mov    esi,eax
    1374:	48 8d 3d af 0c 00 00 	lea    rdi,[rip+0xcaf]        # 202a <_IO_stdin_used+0x2a>
    137b:	b8 00 00 00 00       	mov    eax,0x0
    1380:	e8 6b fd ff ff       	call   10f0 <printf@plt>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:37 (discriminator 1)
		ret = write(fd,buf,sizeof(buf));
    1385:	eb b7                	jmp    133e <main+0x115>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:45 (discriminator 1)
	}

	close(fd);
	return 0;

    1387:	48 8b 55 f8          	mov    rdx,QWORD PTR [rbp-0x8]
    138b:	64 48 33 14 25 28 00 	xor    rdx,QWORD PTR fs:0x28
    1392:	00 00 
    1394:	74 05                	je     139b <main+0x172>
/home/gaifw/桌面/GaiFW_C/Proc/02_exercise/myfifo.c:45
    1396:	e8 45 fd ff ff       	call   10e0 <__stack_chk_fail@plt>
    139b:	c9                   	leave  
    139c:	c3                   	ret    
    139d:	0f 1f 00             	nop    DWORD PTR [rax]

00000000000013a0 <__libc_csu_init>:
__libc_csu_init():
    13a0:	f3 0f 1e fa          	endbr64 
    13a4:	41 57                	push   r15
    13a6:	4c 8d 3d d3 29 00 00 	lea    r15,[rip+0x29d3]        # 3d80 <__frame_dummy_init_array_entry>
    13ad:	41 56                	push   r14
    13af:	49 89 d6             	mov    r14,rdx
    13b2:	41 55                	push   r13
    13b4:	49 89 f5             	mov    r13,rsi
    13b7:	41 54                	push   r12
    13b9:	41 89 fc             	mov    r12d,edi
    13bc:	55                   	push   rbp
    13bd:	48 8d 2d c4 29 00 00 	lea    rbp,[rip+0x29c4]        # 3d88 <__do_global_dtors_aux_fini_array_entry>
    13c4:	53                   	push   rbx
    13c5:	4c 29 fd             	sub    rbp,r15
    13c8:	48 83 ec 08          	sub    rsp,0x8
    13cc:	e8 2f fc ff ff       	call   1000 <_init>
    13d1:	48 c1 fd 03          	sar    rbp,0x3
    13d5:	74 1f                	je     13f6 <__libc_csu_init+0x56>
    13d7:	31 db                	xor    ebx,ebx
    13d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    13e0:	4c 89 f2             	mov    rdx,r14
    13e3:	4c 89 ee             	mov    rsi,r13
    13e6:	44 89 e7             	mov    edi,r12d
    13e9:	41 ff 14 df          	call   QWORD PTR [r15+rbx*8]
    13ed:	48 83 c3 01          	add    rbx,0x1
    13f1:	48 39 dd             	cmp    rbp,rbx
    13f4:	75 ea                	jne    13e0 <__libc_csu_init+0x40>
    13f6:	48 83 c4 08          	add    rsp,0x8
    13fa:	5b                   	pop    rbx
    13fb:	5d                   	pop    rbp
    13fc:	41 5c                	pop    r12
    13fe:	41 5d                	pop    r13
    1400:	41 5e                	pop    r14
    1402:	41 5f                	pop    r15
    1404:	c3                   	ret    
    1405:	66 66 2e 0f 1f 84 00 	data16 nop WORD PTR cs:[rax+rax*1+0x0]
    140c:	00 00 00 00 

0000000000001410 <__libc_csu_fini>:
__libc_csu_fini():
    1410:	f3 0f 1e fa          	endbr64 
    1414:	c3                   	ret    

Disassembly of section .fini:

0000000000001418 <_fini>:
_fini():
    1418:	f3 0f 1e fa          	endbr64 
    141c:	48 83 ec 08          	sub    rsp,0x8
    1420:	48 83 c4 08          	add    rsp,0x8
    1424:	c3                   	ret    

Disassembly of section .rodata:

0000000000002000 <_IO_stdin_used>:
    2000:	01 00                	add    DWORD PTR [rax],eax
    2002:	02 00                	add    al,BYTE PTR [rax]
    2004:	6d                   	ins    DWORD PTR es:[rdi],dx
    2005:	79 66                	jns    206d <__GNU_EH_FRAME_HDR+0x3d>
    2007:	69 66 6f 00 6d 79 70 	imul   esp,DWORD PTR [rsi+0x6f],0x70796d00
    200e:	69 70 65 00 6f 70 65 	imul   esi,DWORD PTR [rax+0x65],0x65706f00
    2015:	6e                   	outs   dx,BYTE PTR ds:[rsi]
    2016:	20 77 72             	and    BYTE PTR [rdi+0x72],dh
    2019:	69 74 65 00 2d 2d 2d 	imul   esi,DWORD PTR [rbp+riz*2+0x0],0x2d2d2d2d
    2020:	2d 
    2021:	2d 2d 2d 2d 2d       	sub    eax,0x2d2d2d2d
    2026:	2d 2d 2d 00 25       	sub    eax,0x25002d2d
    202b:	64                   	fs
	...

Disassembly of section .eh_frame_hdr:

0000000000002030 <__GNU_EH_FRAME_HDR>:
__GNU_EH_FRAME_HDR():
    2030:	01 1b                	add    DWORD PTR [rbx],ebx
    2032:	03 3b                	add    edi,DWORD PTR [rbx]
    2034:	44 00 00             	add    BYTE PTR [rax],r8b
    2037:	00 07                	add    BYTE PTR [rdi],al
    2039:	00 00                	add    BYTE PTR [rax],al
    203b:	00 f0                	add    al,dh
    203d:	ef                   	out    dx,eax
    203e:	ff                   	(bad)  
    203f:	ff                   	(bad)  
    2040:	78 00                	js     2042 <__GNU_EH_FRAME_HDR+0x12>
    2042:	00 00                	add    BYTE PTR [rax],al
    2044:	80 f0 ff             	xor    al,0xff
    2047:	ff a0 00 00 00 90    	jmp    QWORD PTR [rax-0x70000000]
    204d:	f0 ff                	lock (bad) 
    204f:	ff                   	(bad)  
    2050:	b8 00 00 00 10       	mov    eax,0x10000000
    2055:	f1                   	icebp  
    2056:	ff                   	(bad)  
    2057:	ff 60 00             	jmp    QWORD PTR [rax+0x0]
    205a:	00 00                	add    BYTE PTR [rax],al
    205c:	f9                   	stc    
    205d:	f1                   	icebp  
    205e:	ff                   	(bad)  
    205f:	ff d0                	call   rax
    2061:	00 00                	add    BYTE PTR [rax],al
    2063:	00 70 f3             	add    BYTE PTR [rax-0xd],dh
    2066:	ff                   	(bad)  
    2067:	ff f0                	push   rax
    2069:	00 00                	add    BYTE PTR [rax],al
    206b:	00 e0                	add    al,ah
    206d:	f3 ff                	repz (bad) 
    206f:	ff                   	(bad)  
    2070:	38 01                	cmp    BYTE PTR [rcx],al
	...

Disassembly of section .eh_frame:

0000000000002078 <__FRAME_END__-0x104>:
    2078:	14 00                	adc    al,0x0
    207a:	00 00                	add    BYTE PTR [rax],al
    207c:	00 00                	add    BYTE PTR [rax],al
    207e:	00 00                	add    BYTE PTR [rax],al
    2080:	01 7a 52             	add    DWORD PTR [rdx+0x52],edi
    2083:	00 01                	add    BYTE PTR [rcx],al
    2085:	78 10                	js     2097 <__GNU_EH_FRAME_HDR+0x67>
    2087:	01 1b                	add    DWORD PTR [rbx],ebx
    2089:	0c 07                	or     al,0x7
    208b:	08 90 01 00 00 14    	or     BYTE PTR [rax+0x14000001],dl
    2091:	00 00                	add    BYTE PTR [rax],al
    2093:	00 1c 00             	add    BYTE PTR [rax+rax*1],bl
    2096:	00 00                	add    BYTE PTR [rax],al
    2098:	a8 f0                	test   al,0xf0
    209a:	ff                   	(bad)  
    209b:	ff 2f                	jmp    FWORD PTR [rdi]
    209d:	00 00                	add    BYTE PTR [rax],al
    209f:	00 00                	add    BYTE PTR [rax],al
    20a1:	44 07                	rex.R (bad) 
    20a3:	10 00                	adc    BYTE PTR [rax],al
    20a5:	00 00                	add    BYTE PTR [rax],al
    20a7:	00 24 00             	add    BYTE PTR [rax+rax*1],ah
    20aa:	00 00                	add    BYTE PTR [rax],al
    20ac:	34 00                	xor    al,0x0
    20ae:	00 00                	add    BYTE PTR [rax],al
    20b0:	70 ef                	jo     20a1 <__GNU_EH_FRAME_HDR+0x71>
    20b2:	ff                   	(bad)  
    20b3:	ff 90 00 00 00 00    	call   QWORD PTR [rax+0x0]
    20b9:	0e                   	(bad)  
    20ba:	10 46 0e             	adc    BYTE PTR [rsi+0xe],al
    20bd:	18 4a 0f             	sbb    BYTE PTR [rdx+0xf],cl
    20c0:	0b 77 08             	or     esi,DWORD PTR [rdi+0x8]
    20c3:	80 00 3f             	add    BYTE PTR [rax],0x3f
    20c6:	1a 3a                	sbb    bh,BYTE PTR [rdx]
    20c8:	2a 33                	sub    dh,BYTE PTR [rbx]
    20ca:	24 22                	and    al,0x22
    20cc:	00 00                	add    BYTE PTR [rax],al
    20ce:	00 00                	add    BYTE PTR [rax],al
    20d0:	14 00                	adc    al,0x0
    20d2:	00 00                	add    BYTE PTR [rax],al
    20d4:	5c                   	pop    rsp
    20d5:	00 00                	add    BYTE PTR [rax],al
    20d7:	00 d8                	add    al,bl
    20d9:	ef                   	out    dx,eax
    20da:	ff                   	(bad)  
    20db:	ff 10                	call   QWORD PTR [rax]
	...
    20e5:	00 00                	add    BYTE PTR [rax],al
    20e7:	00 14 00             	add    BYTE PTR [rax+rax*1],dl
    20ea:	00 00                	add    BYTE PTR [rax],al
    20ec:	74 00                	je     20ee <__GNU_EH_FRAME_HDR+0xbe>
    20ee:	00 00                	add    BYTE PTR [rax],al
    20f0:	d0 ef                	shr    bh,1
    20f2:	ff                   	(bad)  
    20f3:	ff 80 00 00 00 00    	inc    DWORD PTR [rax+0x0]
    20f9:	00 00                	add    BYTE PTR [rax],al
    20fb:	00 00                	add    BYTE PTR [rax],al
    20fd:	00 00                	add    BYTE PTR [rax],al
    20ff:	00 1c 00             	add    BYTE PTR [rax+rax*1],bl
    2102:	00 00                	add    BYTE PTR [rax],al
    2104:	8c 00                	mov    WORD PTR [rax],es
    2106:	00 00                	add    BYTE PTR [rax],al
    2108:	21 f1                	and    ecx,esi
    210a:	ff                   	(bad)  
    210b:	ff 74 01 00          	push   QWORD PTR [rcx+rax*1+0x0]
    210f:	00 00                	add    BYTE PTR [rax],al
    2111:	45 0e                	rex.RB (bad) 
    2113:	10 86 02 43 0d 06    	adc    BYTE PTR [rsi+0x60d4302],al
    2119:	03 6b 01             	add    ebp,DWORD PTR [rbx+0x1]
    211c:	0c 07                	or     al,0x7
    211e:	08 00                	or     BYTE PTR [rax],al
    2120:	44 00 00             	add    BYTE PTR [rax],r8b
    2123:	00 ac 00 00 00 78 f2 	add    BYTE PTR [rax+rax*1-0xd880000],ch
    212a:	ff                   	(bad)  
    212b:	ff 65 00             	jmp    QWORD PTR [rbp+0x0]
    212e:	00 00                	add    BYTE PTR [rax],al
    2130:	00 46 0e             	add    BYTE PTR [rsi+0xe],al
    2133:	10 8f 02 49 0e 18    	adc    BYTE PTR [rdi+0x180e4902],cl
    2139:	8e 03                	mov    es,WORD PTR [rbx]
    213b:	45 0e                	rex.RB (bad) 
    213d:	20 8d 04 45 0e 28    	and    BYTE PTR [rbp+0x280e4504],cl
    2143:	8c 05 44 0e 30 86    	mov    WORD PTR [rip+0xffffffff86300e44],es        # ffffffff86302f8d <_end+0xffffffff862fef75>
    2149:	06                   	(bad)  
    214a:	48 0e                	rex.W (bad) 
    214c:	38 83 07 47 0e 40    	cmp    BYTE PTR [rbx+0x400e4707],al
    2152:	6e                   	outs   dx,BYTE PTR ds:[rsi]
    2153:	0e                   	(bad)  
    2154:	38 41 0e             	cmp    BYTE PTR [rcx+0xe],al
    2157:	30 41 0e             	xor    BYTE PTR [rcx+0xe],al
    215a:	28 42 0e             	sub    BYTE PTR [rdx+0xe],al
    215d:	20 42 0e             	and    BYTE PTR [rdx+0xe],al
    2160:	18 42 0e             	sbb    BYTE PTR [rdx+0xe],al
    2163:	10 42 0e             	adc    BYTE PTR [rdx+0xe],al
    2166:	08 00                	or     BYTE PTR [rax],al
    2168:	10 00                	adc    BYTE PTR [rax],al
    216a:	00 00                	add    BYTE PTR [rax],al
    216c:	f4                   	hlt    
    216d:	00 00                	add    BYTE PTR [rax],al
    216f:	00 a0 f2 ff ff 05    	add    BYTE PTR [rax+0x5fffff2],ah
    2175:	00 00                	add    BYTE PTR [rax],al
    2177:	00 00                	add    BYTE PTR [rax],al
    2179:	00 00                	add    BYTE PTR [rax],al
	...

000000000000217c <__FRAME_END__>:
    217c:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .init_array:

0000000000003d80 <__frame_dummy_init_array_entry>:
__init_array_start():
    3d80:	20 12                	and    BYTE PTR [rdx],dl
    3d82:	00 00                	add    BYTE PTR [rax],al
    3d84:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .fini_array:

0000000000003d88 <__do_global_dtors_aux_fini_array_entry>:
    3d88:	e0 11                	loopne 3d9b <_DYNAMIC+0xb>
    3d8a:	00 00                	add    BYTE PTR [rax],al
    3d8c:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .dynamic:

0000000000003d90 <_DYNAMIC>:
    3d90:	01 00                	add    DWORD PTR [rax],eax
    3d92:	00 00                	add    BYTE PTR [rax],al
    3d94:	00 00                	add    BYTE PTR [rax],al
    3d96:	00 00                	add    BYTE PTR [rax],al
    3d98:	01 00                	add    DWORD PTR [rax],eax
    3d9a:	00 00                	add    BYTE PTR [rax],al
    3d9c:	00 00                	add    BYTE PTR [rax],al
    3d9e:	00 00                	add    BYTE PTR [rax],al
    3da0:	0c 00                	or     al,0x0
    3da2:	00 00                	add    BYTE PTR [rax],al
    3da4:	00 00                	add    BYTE PTR [rax],al
    3da6:	00 00                	add    BYTE PTR [rax],al
    3da8:	00 10                	add    BYTE PTR [rax],dl
    3daa:	00 00                	add    BYTE PTR [rax],al
    3dac:	00 00                	add    BYTE PTR [rax],al
    3dae:	00 00                	add    BYTE PTR [rax],al
    3db0:	0d 00 00 00 00       	or     eax,0x0
    3db5:	00 00                	add    BYTE PTR [rax],al
    3db7:	00 18                	add    BYTE PTR [rax],bl
    3db9:	14 00                	adc    al,0x0
    3dbb:	00 00                	add    BYTE PTR [rax],al
    3dbd:	00 00                	add    BYTE PTR [rax],al
    3dbf:	00 19                	add    BYTE PTR [rcx],bl
    3dc1:	00 00                	add    BYTE PTR [rax],al
    3dc3:	00 00                	add    BYTE PTR [rax],al
    3dc5:	00 00                	add    BYTE PTR [rax],al
    3dc7:	00 80 3d 00 00 00    	add    BYTE PTR [rax+0x3d],al
    3dcd:	00 00                	add    BYTE PTR [rax],al
    3dcf:	00 1b                	add    BYTE PTR [rbx],bl
    3dd1:	00 00                	add    BYTE PTR [rax],al
    3dd3:	00 00                	add    BYTE PTR [rax],al
    3dd5:	00 00                	add    BYTE PTR [rax],al
    3dd7:	00 08                	add    BYTE PTR [rax],cl
    3dd9:	00 00                	add    BYTE PTR [rax],al
    3ddb:	00 00                	add    BYTE PTR [rax],al
    3ddd:	00 00                	add    BYTE PTR [rax],al
    3ddf:	00 1a                	add    BYTE PTR [rdx],bl
    3de1:	00 00                	add    BYTE PTR [rax],al
    3de3:	00 00                	add    BYTE PTR [rax],al
    3de5:	00 00                	add    BYTE PTR [rax],al
    3de7:	00 88 3d 00 00 00    	add    BYTE PTR [rax+0x3d],cl
    3ded:	00 00                	add    BYTE PTR [rax],al
    3def:	00 1c 00             	add    BYTE PTR [rax+rax*1],bl
    3df2:	00 00                	add    BYTE PTR [rax],al
    3df4:	00 00                	add    BYTE PTR [rax],al
    3df6:	00 00                	add    BYTE PTR [rax],al
    3df8:	08 00                	or     BYTE PTR [rax],al
    3dfa:	00 00                	add    BYTE PTR [rax],al
    3dfc:	00 00                	add    BYTE PTR [rax],al
    3dfe:	00 00                	add    BYTE PTR [rax],al
    3e00:	f5                   	cmc    
    3e01:	fe                   	(bad)  
    3e02:	ff 6f 00             	jmp    FWORD PTR [rdi+0x0]
    3e05:	00 00                	add    BYTE PTR [rax],al
    3e07:	00 a0 03 00 00 00    	add    BYTE PTR [rax+0x3],ah
    3e0d:	00 00                	add    BYTE PTR [rax],al
    3e0f:	00 05 00 00 00 00    	add    BYTE PTR [rip+0x0],al        # 3e15 <_DYNAMIC+0x85>
    3e15:	00 00                	add    BYTE PTR [rax],al
    3e17:	00 18                	add    BYTE PTR [rax],bl
    3e19:	05 00 00 00 00       	add    eax,0x0
    3e1e:	00 00                	add    BYTE PTR [rax],al
    3e20:	06                   	(bad)  
    3e21:	00 00                	add    BYTE PTR [rax],al
    3e23:	00 00                	add    BYTE PTR [rax],al
    3e25:	00 00                	add    BYTE PTR [rax],al
    3e27:	00 c8                	add    al,cl
    3e29:	03 00                	add    eax,DWORD PTR [rax]
    3e2b:	00 00                	add    BYTE PTR [rax],al
    3e2d:	00 00                	add    BYTE PTR [rax],al
    3e2f:	00 0a                	add    BYTE PTR [rdx],cl
    3e31:	00 00                	add    BYTE PTR [rax],al
    3e33:	00 00                	add    BYTE PTR [rax],al
    3e35:	00 00                	add    BYTE PTR [rax],al
    3e37:	00 c4                	add    ah,al
    3e39:	00 00                	add    BYTE PTR [rax],al
    3e3b:	00 00                	add    BYTE PTR [rax],al
    3e3d:	00 00                	add    BYTE PTR [rax],al
    3e3f:	00 0b                	add    BYTE PTR [rbx],cl
    3e41:	00 00                	add    BYTE PTR [rax],al
    3e43:	00 00                	add    BYTE PTR [rax],al
    3e45:	00 00                	add    BYTE PTR [rax],al
    3e47:	00 18                	add    BYTE PTR [rax],bl
    3e49:	00 00                	add    BYTE PTR [rax],al
    3e4b:	00 00                	add    BYTE PTR [rax],al
    3e4d:	00 00                	add    BYTE PTR [rax],al
    3e4f:	00 15 00 00 00 00    	add    BYTE PTR [rip+0x0],dl        # 3e55 <_DYNAMIC+0xc5>
	...
    3e5d:	00 00                	add    BYTE PTR [rax],al
    3e5f:	00 03                	add    BYTE PTR [rbx],al
    3e61:	00 00                	add    BYTE PTR [rax],al
    3e63:	00 00                	add    BYTE PTR [rax],al
    3e65:	00 00                	add    BYTE PTR [rax],al
    3e67:	00 80 3f 00 00 00    	add    BYTE PTR [rax+0x3f],al
    3e6d:	00 00                	add    BYTE PTR [rax],al
    3e6f:	00 02                	add    BYTE PTR [rdx],al
    3e71:	00 00                	add    BYTE PTR [rax],al
    3e73:	00 00                	add    BYTE PTR [rax],al
    3e75:	00 00                	add    BYTE PTR [rax],al
    3e77:	00 c0                	add    al,al
    3e79:	00 00                	add    BYTE PTR [rax],al
    3e7b:	00 00                	add    BYTE PTR [rax],al
    3e7d:	00 00                	add    BYTE PTR [rax],al
    3e7f:	00 14 00             	add    BYTE PTR [rax+rax*1],dl
    3e82:	00 00                	add    BYTE PTR [rax],al
    3e84:	00 00                	add    BYTE PTR [rax],al
    3e86:	00 00                	add    BYTE PTR [rax],al
    3e88:	07                   	(bad)  
    3e89:	00 00                	add    BYTE PTR [rax],al
    3e8b:	00 00                	add    BYTE PTR [rax],al
    3e8d:	00 00                	add    BYTE PTR [rax],al
    3e8f:	00 17                	add    BYTE PTR [rdi],dl
    3e91:	00 00                	add    BYTE PTR [rax],al
    3e93:	00 00                	add    BYTE PTR [rax],al
    3e95:	00 00                	add    BYTE PTR [rax],al
    3e97:	00 e8                	add    al,ch
    3e99:	06                   	(bad)  
    3e9a:	00 00                	add    BYTE PTR [rax],al
    3e9c:	00 00                	add    BYTE PTR [rax],al
    3e9e:	00 00                	add    BYTE PTR [rax],al
    3ea0:	07                   	(bad)  
    3ea1:	00 00                	add    BYTE PTR [rax],al
    3ea3:	00 00                	add    BYTE PTR [rax],al
    3ea5:	00 00                	add    BYTE PTR [rax],al
    3ea7:	00 28                	add    BYTE PTR [rax],ch
    3ea9:	06                   	(bad)  
    3eaa:	00 00                	add    BYTE PTR [rax],al
    3eac:	00 00                	add    BYTE PTR [rax],al
    3eae:	00 00                	add    BYTE PTR [rax],al
    3eb0:	08 00                	or     BYTE PTR [rax],al
    3eb2:	00 00                	add    BYTE PTR [rax],al
    3eb4:	00 00                	add    BYTE PTR [rax],al
    3eb6:	00 00                	add    BYTE PTR [rax],al
    3eb8:	c0 00 00             	rol    BYTE PTR [rax],0x0
    3ebb:	00 00                	add    BYTE PTR [rax],al
    3ebd:	00 00                	add    BYTE PTR [rax],al
    3ebf:	00 09                	add    BYTE PTR [rcx],cl
    3ec1:	00 00                	add    BYTE PTR [rax],al
    3ec3:	00 00                	add    BYTE PTR [rax],al
    3ec5:	00 00                	add    BYTE PTR [rax],al
    3ec7:	00 18                	add    BYTE PTR [rax],bl
    3ec9:	00 00                	add    BYTE PTR [rax],al
    3ecb:	00 00                	add    BYTE PTR [rax],al
    3ecd:	00 00                	add    BYTE PTR [rax],al
    3ecf:	00 1e                	add    BYTE PTR [rsi],bl
    3ed1:	00 00                	add    BYTE PTR [rax],al
    3ed3:	00 00                	add    BYTE PTR [rax],al
    3ed5:	00 00                	add    BYTE PTR [rax],al
    3ed7:	00 08                	add    BYTE PTR [rax],cl
    3ed9:	00 00                	add    BYTE PTR [rax],al
    3edb:	00 00                	add    BYTE PTR [rax],al
    3edd:	00 00                	add    BYTE PTR [rax],al
    3edf:	00 fb                	add    bl,bh
    3ee1:	ff                   	(bad)  
    3ee2:	ff 6f 00             	jmp    FWORD PTR [rdi+0x0]
    3ee5:	00 00                	add    BYTE PTR [rax],al
    3ee7:	00 01                	add    BYTE PTR [rcx],al
    3ee9:	00 00                	add    BYTE PTR [rax],al
    3eeb:	08 00                	or     BYTE PTR [rax],al
    3eed:	00 00                	add    BYTE PTR [rax],al
    3eef:	00 fe                	add    dh,bh
    3ef1:	ff                   	(bad)  
    3ef2:	ff 6f 00             	jmp    FWORD PTR [rdi+0x0]
    3ef5:	00 00                	add    BYTE PTR [rax],al
    3ef7:	00 f8                	add    al,bh
    3ef9:	05 00 00 00 00       	add    eax,0x0
    3efe:	00 00                	add    BYTE PTR [rax],al
    3f00:	ff                   	(bad)  
    3f01:	ff                   	(bad)  
    3f02:	ff 6f 00             	jmp    FWORD PTR [rdi+0x0]
    3f05:	00 00                	add    BYTE PTR [rax],al
    3f07:	00 01                	add    BYTE PTR [rcx],al
    3f09:	00 00                	add    BYTE PTR [rax],al
    3f0b:	00 00                	add    BYTE PTR [rax],al
    3f0d:	00 00                	add    BYTE PTR [rax],al
    3f0f:	00 f0                	add    al,dh
    3f11:	ff                   	(bad)  
    3f12:	ff 6f 00             	jmp    FWORD PTR [rdi+0x0]
    3f15:	00 00                	add    BYTE PTR [rax],al
    3f17:	00 dc                	add    ah,bl
    3f19:	05 00 00 00 00       	add    eax,0x0
    3f1e:	00 00                	add    BYTE PTR [rax],al
    3f20:	f9                   	stc    
    3f21:	ff                   	(bad)  
    3f22:	ff 6f 00             	jmp    FWORD PTR [rdi+0x0]
    3f25:	00 00                	add    BYTE PTR [rax],al
    3f27:	00 03                	add    BYTE PTR [rbx],al
	...

Disassembly of section .got:

0000000000003f80 <_GLOBAL_OFFSET_TABLE_>:
    3f80:	90                   	nop
    3f81:	3d 00 00 00 00       	cmp    eax,0x0
	...
    3f96:	00 00                	add    BYTE PTR [rax],al
    3f98:	30 10                	xor    BYTE PTR [rax],dl
    3f9a:	00 00                	add    BYTE PTR [rax],al
    3f9c:	00 00                	add    BYTE PTR [rax],al
    3f9e:	00 00                	add    BYTE PTR [rax],al
    3fa0:	40 10 00             	adc    BYTE PTR [rax],al
    3fa3:	00 00                	add    BYTE PTR [rax],al
    3fa5:	00 00                	add    BYTE PTR [rax],al
    3fa7:	00 50 10             	add    BYTE PTR [rax+0x10],dl
    3faa:	00 00                	add    BYTE PTR [rax],al
    3fac:	00 00                	add    BYTE PTR [rax],al
    3fae:	00 00                	add    BYTE PTR [rax],al
    3fb0:	60                   	(bad)  
    3fb1:	10 00                	adc    BYTE PTR [rax],al
    3fb3:	00 00                	add    BYTE PTR [rax],al
    3fb5:	00 00                	add    BYTE PTR [rax],al
    3fb7:	00 70 10             	add    BYTE PTR [rax+0x10],dh
    3fba:	00 00                	add    BYTE PTR [rax],al
    3fbc:	00 00                	add    BYTE PTR [rax],al
    3fbe:	00 00                	add    BYTE PTR [rax],al
    3fc0:	80 10 00             	adc    BYTE PTR [rax],0x0
    3fc3:	00 00                	add    BYTE PTR [rax],al
    3fc5:	00 00                	add    BYTE PTR [rax],al
    3fc7:	00 90 10 00 00 00    	add    BYTE PTR [rax+0x10],dl
    3fcd:	00 00                	add    BYTE PTR [rax],al
    3fcf:	00 a0 10 00 00 00    	add    BYTE PTR [rax+0x10],ah
	...

Disassembly of section .data:

0000000000004000 <__data_start>:
	...

0000000000004008 <__dso_handle>:
data_start():
    4008:	08 40 00             	or     BYTE PTR [rax+0x0],al
    400b:	00 00                	add    BYTE PTR [rax],al
    400d:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .bss:

0000000000004010 <completed.8059>:
	...

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	47                   	rex.RXB
   1:	43                   	rex.XB
   2:	43 3a 20             	rex.XB cmp spl,BYTE PTR [r8]
   5:	28 55 62             	sub    BYTE PTR [rbp+0x62],dl
   8:	75 6e                	jne    78 <_init-0xf88>
   a:	74 75                	je     81 <_init-0xf7f>
   c:	20 39                	and    BYTE PTR [rcx],bh
   e:	2e 33 2e             	xor    ebp,DWORD PTR cs:[rsi]
  11:	30 2d 31 30 75 62    	xor    BYTE PTR [rip+0x62753031],ch        # 62753048 <_end+0x6274f030>
  17:	75 6e                	jne    87 <_init-0xf79>
  19:	74 75                	je     90 <_init-0xf70>
  1b:	32 29                	xor    ch,BYTE PTR [rcx]
  1d:	20 39                	and    BYTE PTR [rcx],bh
  1f:	2e 33 2e             	xor    ebp,DWORD PTR cs:[rsi]
  22:	30 00                	xor    BYTE PTR [rax],al

Disassembly of section .debug_aranges:

0000000000000000 <.debug_aranges>:
   0:	2c 00                	sub    al,0x0
   2:	00 00                	add    BYTE PTR [rax],al
   4:	02 00                	add    al,BYTE PTR [rax]
   6:	00 00                	add    BYTE PTR [rax],al
   8:	00 00                	add    BYTE PTR [rax],al
   a:	08 00                	or     BYTE PTR [rax],al
   c:	00 00                	add    BYTE PTR [rax],al
   e:	00 00                	add    BYTE PTR [rax],al
  10:	29 12                	sub    DWORD PTR [rdx],edx
  12:	00 00                	add    BYTE PTR [rax],al
  14:	00 00                	add    BYTE PTR [rax],al
  16:	00 00                	add    BYTE PTR [rax],al
  18:	74 01                	je     1b <_init-0xfe5>
	...

Disassembly of section .debug_info:

0000000000000000 <.debug_info>:
   0:	ee                   	out    dx,al
   1:	03 00                	add    eax,DWORD PTR [rax]
   3:	00 04 00             	add    BYTE PTR [rax+rax*1],al
   6:	00 00                	add    BYTE PTR [rax],al
   8:	00 00                	add    BYTE PTR [rax],al
   a:	08 01                	or     BYTE PTR [rcx],al
   c:	1d 01 00 00 0c       	sbb    eax,0xc000001
  11:	81 00 00 00 30 00    	add    DWORD PTR [rax],0x300000
  17:	00 00                	add    BYTE PTR [rax],al
  19:	29 12                	sub    DWORD PTR [rdx],edx
  1b:	00 00                	add    BYTE PTR [rax],al
  1d:	00 00                	add    BYTE PTR [rax],al
  1f:	00 00                	add    BYTE PTR [rax],al
  21:	74 01                	je     24 <_init-0xfdc>
	...
  2b:	00 00                	add    BYTE PTR [rax],al
  2d:	02 5c 00 00          	add    bl,BYTE PTR [rax+rax*1+0x0]
  31:	00 02                	add    BYTE PTR [rdx],al
  33:	d1 17                	rcl    DWORD PTR [rdi],1
  35:	39 00                	cmp    DWORD PTR [rax],eax
  37:	00 00                	add    BYTE PTR [rax],al
  39:	03 08                	add    ecx,DWORD PTR [rax]
  3b:	07                   	(bad)  
  3c:	0b 01                	or     eax,DWORD PTR [rcx]
  3e:	00 00                	add    BYTE PTR [rax],al
  40:	03 04 07             	add    eax,DWORD PTR [rdi+rax*1]
  43:	10 01                	adc    BYTE PTR [rcx],al
  45:	00 00                	add    BYTE PTR [rax],al
  47:	04 08                	add    al,0x8
  49:	03 01                	add    eax,DWORD PTR [rcx]
  4b:	08 f8                	or     al,bh
  4d:	00 00                	add    BYTE PTR [rax],al
  4f:	00 03                	add    BYTE PTR [rbx],al
  51:	02 07                	add    al,BYTE PTR [rdi]
  53:	1f                   	(bad)  
  54:	02 00                	add    al,BYTE PTR [rax]
  56:	00 03                	add    BYTE PTR [rbx],al
  58:	01 06                	add    DWORD PTR [rsi],eax
  5a:	fa                   	cli    
  5b:	00 00                	add    BYTE PTR [rax],al
  5d:	00 03                	add    BYTE PTR [rbx],al
  5f:	02 05 be 00 00 00    	add    al,BYTE PTR [rip+0xbe]        # 123 <_init-0xedd>
  65:	05 04 05 69 6e       	add    eax,0x6e690504
  6a:	74 00                	je     6c <_init-0xf94>
  6c:	03 08                	add    ecx,DWORD PTR [rax]
  6e:	05 d4 00 00 00       	add    eax,0xd4
  73:	02 4a 02             	add    cl,BYTE PTR [rdx+0x2]
  76:	00 00                	add    BYTE PTR [rax],al
  78:	03 98 19 6c 00 00    	add    ebx,DWORD PTR [rax+0x6c19]
  7e:	00 02                	add    BYTE PTR [rdx],al
  80:	40 02 00             	add    al,BYTE PTR [rax]
  83:	00 03                	add    BYTE PTR [rbx],al
  85:	99                   	cdq    
  86:	1b 6c 00 00          	sbb    ebp,DWORD PTR [rax+rax*1+0x0]
  8a:	00 06                	add    BYTE PTR [rsi],al
  8c:	08 91 00 00 00 03    	or     BYTE PTR [rcx+0x3000000],dl
  92:	01 06                	add    DWORD PTR [rsi],eax
  94:	01 01                	add    DWORD PTR [rcx],eax
  96:	00 00                	add    BYTE PTR [rax],al
  98:	07                   	(bad)  
  99:	91                   	xchg   ecx,eax
  9a:	00 00                	add    BYTE PTR [rax],al
  9c:	00 08                	add    BYTE PTR [rax],cl
  9e:	ef                   	out    dx,eax
  9f:	00 00                	add    BYTE PTR [rax],al
  a1:	00 d8                	add    al,bl
  a3:	04 31                	add    al,0x31
  a5:	08 24 02             	or     BYTE PTR [rdx+rax*1],ah
  a8:	00 00                	add    BYTE PTR [rax],al
  aa:	09 d1                	or     ecx,edx
  ac:	02 00                	add    al,BYTE PTR [rax]
  ae:	00 04 33             	add    BYTE PTR [rbx+rsi*1],al
  b1:	07                   	(bad)  
  b2:	65 00 00             	add    BYTE PTR gs:[rax],al
  b5:	00 00                	add    BYTE PTR [rax],al
  b7:	09 e4                	or     esp,esp
  b9:	01 00                	add    DWORD PTR [rax],eax
  bb:	00 04 36             	add    BYTE PTR [rsi+rsi*1],al
  be:	09 8b 00 00 00 08    	or     DWORD PTR [rbx+0x8000000],ecx
  c4:	09 bf 01 00 00 04    	or     DWORD PTR [rdi+0x4000001],edi
  ca:	37                   	(bad)  
  cb:	09 8b 00 00 00 10    	or     DWORD PTR [rbx+0x10000000],ecx
  d1:	09 8b 02 00 00 04    	or     DWORD PTR [rbx+0x4000002],ecx
  d7:	38 09                	cmp    BYTE PTR [rcx],cl
  d9:	8b 00                	mov    eax,DWORD PTR [rax]
  db:	00 00                	add    BYTE PTR [rax],al
  dd:	18 09                	sbb    BYTE PTR [rcx],cl
  df:	cc                   	int3   
  e0:	01 00                	add    DWORD PTR [rax],eax
  e2:	00 04 39             	add    BYTE PTR [rcx+rdi*1],al
  e5:	09 8b 00 00 00 20    	or     DWORD PTR [rbx+0x20000000],ecx
  eb:	09 6e 00             	or     DWORD PTR [rsi+0x0],ebp
  ee:	00 00                	add    BYTE PTR [rax],al
  f0:	04 3a                	add    al,0x3a
  f2:	09 8b 00 00 00 28    	or     DWORD PTR [rbx+0x28000000],ecx
  f8:	09 32                	or     DWORD PTR [rdx],esi
  fa:	02 00                	add    al,BYTE PTR [rax]
  fc:	00 04 3b             	add    BYTE PTR [rbx+rdi*1],al
  ff:	09 8b 00 00 00 30    	or     DWORD PTR [rbx+0x30000000],ecx
 105:	09 8a 00 00 00 04    	or     DWORD PTR [rdx+0x4000000],ecx
 10b:	3c 09                	cmp    al,0x9
 10d:	8b 00                	mov    eax,DWORD PTR [rax]
 10f:	00 00                	add    BYTE PTR [rax],al
 111:	38 09                	cmp    BYTE PTR [rcx],cl
 113:	fe 01                	inc    BYTE PTR [rcx]
 115:	00 00                	add    BYTE PTR [rax],al
 117:	04 3d                	add    al,0x3d
 119:	09 8b 00 00 00 40    	or     DWORD PTR [rbx+0x40000000],ecx
 11f:	09 a8 02 00 00 04    	or     DWORD PTR [rax+0x4000002],ebp
 125:	40 09 8b 00 00 00 48 	rex or DWORD PTR [rbx+0x48000000],ecx
 12c:	09 67 02             	or     DWORD PTR [rdi+0x2],esp
 12f:	00 00                	add    BYTE PTR [rax],al
 131:	04 41                	add    al,0x41
 133:	09 8b 00 00 00 50    	or     DWORD PTR [rbx+0x50000000],ecx
 139:	09 23                	or     DWORD PTR [rbx],esp
 13b:	00 00                	add    BYTE PTR [rax],al
 13d:	00 04 42             	add    BYTE PTR [rdx+rax*2],al
 140:	09 8b 00 00 00 58    	or     DWORD PTR [rbx+0x58000000],ecx
 146:	09 a1 00 00 00 04    	or     DWORD PTR [rcx+0x4000000],esp
 14c:	44 16                	rex.R (bad) 
 14e:	3d 02 00 00 60       	cmp    eax,0x60000002
 153:	09 52 02             	or     DWORD PTR [rdx+0x2],edx
 156:	00 00                	add    BYTE PTR [rax],al
 158:	04 46                	add    al,0x46
 15a:	14 43                	adc    al,0x43
 15c:	02 00                	add    al,BYTE PTR [rax]
 15e:	00 68 09             	add    BYTE PTR [rax+0x9],ch
 161:	c9                   	leave  
 162:	02 00                	add    al,BYTE PTR [rax]
 164:	00 04 48             	add    BYTE PTR [rax+rcx*2],al
 167:	07                   	(bad)  
 168:	65 00 00             	add    BYTE PTR gs:[rax],al
 16b:	00 70 09             	add    BYTE PTR [rax+0x9],dh
 16e:	7d 02                	jge    172 <_init-0xe8e>
 170:	00 00                	add    BYTE PTR [rax],al
 172:	04 49                	add    al,0x49
 174:	07                   	(bad)  
 175:	65 00 00             	add    BYTE PTR gs:[rax],al
 178:	00 74 09 0e          	add    BYTE PTR [rcx+rcx*1+0xe],dh
 17c:	00 00                	add    BYTE PTR [rax],al
 17e:	00 04 4a             	add    BYTE PTR [rdx+rcx*2],al
 181:	0b 73 00             	or     esi,DWORD PTR [rbx+0x0]
 184:	00 00                	add    BYTE PTR [rax],al
 186:	78 09                	js     191 <_init-0xe6f>
 188:	e3 00                	jrcxz  18a <_init-0xe76>
 18a:	00 00                	add    BYTE PTR [rax],al
 18c:	04 4d                	add    al,0x4d
 18e:	12 50 00             	adc    dl,BYTE PTR [rax+0x0]
 191:	00 00                	add    BYTE PTR [rax],al
 193:	80 09 99             	or     BYTE PTR [rcx],0x99
 196:	02 00                	add    al,BYTE PTR [rax]
 198:	00 04 4e             	add    BYTE PTR [rsi+rcx*2],al
 19b:	0f 57 00             	xorps  xmm0,XMMWORD PTR [rax]
 19e:	00 00                	add    BYTE PTR [rax],al
 1a0:	82                   	(bad)  
 1a1:	09 b5 01 00 00 04    	or     DWORD PTR [rbp+0x4000001],esi
 1a7:	4f 08 49 02          	rex.WRXB or BYTE PTR [r9+0x2],r9b
 1ab:	00 00                	add    BYTE PTR [rax],al
 1ad:	83 09 dd             	or     DWORD PTR [rcx],0xffffffdd
 1b0:	00 00                	add    BYTE PTR [rax],al
 1b2:	00 04 51             	add    BYTE PTR [rcx+rdx*2],al
 1b5:	0f 59 02             	mulps  xmm0,XMMWORD PTR [rdx]
 1b8:	00 00                	add    BYTE PTR [rax],al
 1ba:	88 09                	mov    BYTE PTR [rcx],cl
 1bc:	12 00                	adc    al,BYTE PTR [rax]
 1be:	00 00                	add    BYTE PTR [rax],al
 1c0:	04 59                	add    al,0x59
 1c2:	0d 7f 00 00 00       	or     eax,0x7f
 1c7:	90                   	nop
 1c8:	09 e2                	or     edx,esp
 1ca:	02 00                	add    al,BYTE PTR [rax]
 1cc:	00 04 5b             	add    BYTE PTR [rbx+rbx*2],al
 1cf:	17                   	(bad)  
 1d0:	64 02 00             	add    al,BYTE PTR fs:[rax]
 1d3:	00 98 09 5c 02 00    	add    BYTE PTR [rax+0x25c09],bl
 1d9:	00 04 5c             	add    BYTE PTR [rsp+rbx*2],al
 1dc:	19 6f 02             	sbb    DWORD PTR [rdi+0x2],ebp
 1df:	00 00                	add    BYTE PTR [rax],al
 1e1:	a0 09 0a 02 00 00 04 	movabs al,ds:0x145d040000020a09
 1e8:	5d 14 
 1ea:	43 02 00             	rex.XB add al,BYTE PTR [r8]
 1ed:	00 a8 09 aa 00 00    	add    BYTE PTR [rax+0xaa09],ch
 1f3:	00 04 5e             	add    BYTE PTR [rsi+rbx*2],al
 1f6:	09 47 00             	or     DWORD PTR [rdi+0x0],eax
 1f9:	00 00                	add    BYTE PTR [rax],al
 1fb:	b0 09                	mov    al,0x9
 1fd:	18 02                	sbb    BYTE PTR [rdx],al
 1ff:	00 00                	add    BYTE PTR [rax],al
 201:	04 5f                	add    al,0x5f
 203:	0a 2d 00 00 00 b8    	or     ch,BYTE PTR [rip+0xffffffffb8000000]        # ffffffffb8000209 <_end+0xffffffffb7ffc1f1>
 209:	09 85 02 00 00 04    	or     DWORD PTR [rbp+0x4000002],eax
 20f:	60                   	(bad)  
 210:	07                   	(bad)  
 211:	65 00 00             	add    BYTE PTR gs:[rax],al
 214:	00 c0                	add    al,al
 216:	09 db                	or     ebx,ebx
 218:	01 00                	add    DWORD PTR [rax],eax
 21a:	00 04 62             	add    BYTE PTR [rdx+riz*2],al
 21d:	08 75 02             	or     BYTE PTR [rbp+0x2],dh
 220:	00 00                	add    BYTE PTR [rax],al
 222:	c4                   	(bad)  
 223:	00 02                	add    BYTE PTR [rdx],al
 225:	f3 00 00             	repz add BYTE PTR [rax],al
 228:	00 05 07 19 9d 00    	add    BYTE PTR [rip+0x9d1907],al        # 9d1b35 <_end+0x9cdb1d>
 22e:	00 00                	add    BYTE PTR [rax],al
 230:	0a 63 00             	or     ah,BYTE PTR [rbx+0x0]
 233:	00 00                	add    BYTE PTR [rax],al
 235:	04 2b                	add    al,0x2b
 237:	0e                   	(bad)  
 238:	0b aa 01 00 00 06    	or     ebp,DWORD PTR [rdx+0x6000001]
 23e:	08 38                	or     BYTE PTR [rax],bh
 240:	02 00                	add    al,BYTE PTR [rax]
 242:	00 06                	add    BYTE PTR [rsi],al
 244:	08 9d 00 00 00 0c    	or     BYTE PTR [rbp+0xc000000],bl
 24a:	91                   	xchg   ecx,eax
 24b:	00 00                	add    BYTE PTR [rax],al
 24d:	00 59 02             	add    BYTE PTR [rcx+0x2],bl
 250:	00 00                	add    BYTE PTR [rax],al
 252:	0d 39 00 00 00       	or     eax,0x39
 257:	00 00                	add    BYTE PTR [rax],al
 259:	06                   	(bad)  
 25a:	08 30                	or     BYTE PTR [rax],dh
 25c:	02 00                	add    al,BYTE PTR [rax]
 25e:	00 0b                	add    BYTE PTR [rbx],cl
 260:	df 02                	fild   WORD PTR [rdx]
 262:	00 00                	add    BYTE PTR [rax],al
 264:	06                   	(bad)  
 265:	08 5f 02             	or     BYTE PTR [rdi+0x2],bl
 268:	00 00                	add    BYTE PTR [rax],al
 26a:	0b 59 02             	or     ebx,DWORD PTR [rcx+0x2]
 26d:	00 00                	add    BYTE PTR [rax],al
 26f:	06                   	(bad)  
 270:	08 6a 02             	or     BYTE PTR [rdx+0x2],ch
 273:	00 00                	add    BYTE PTR [rax],al
 275:	0c 91                	or     al,0x91
 277:	00 00                	add    BYTE PTR [rax],al
 279:	00 85 02 00 00 0d    	add    BYTE PTR [rbp+0xd000002],al
 27f:	39 00                	cmp    DWORD PTR [rax],eax
 281:	00 00                	add    BYTE PTR [rax],al
 283:	13 00                	adc    eax,DWORD PTR [rax]
 285:	0e                   	(bad)  
 286:	77 02                	ja     28a <_init-0xd76>
 288:	00 00                	add    BYTE PTR [rax],al
 28a:	06                   	(bad)  
 28b:	89 0e                	mov    DWORD PTR [rsi],ecx
 28d:	91                   	xchg   ecx,eax
 28e:	02 00                	add    al,BYTE PTR [rax]
 290:	00 06                	add    BYTE PTR [rsi],al
 292:	08 24 02             	or     BYTE PTR [rdx+rax*1],ah
 295:	00 00                	add    BYTE PTR [rax],al
 297:	0e                   	(bad)  
 298:	d8 02                	fadd   DWORD PTR [rdx]
 29a:	00 00                	add    BYTE PTR [rax],al
 29c:	06                   	(bad)  
 29d:	8a 0e                	mov    cl,BYTE PTR [rsi]
 29f:	91                   	xchg   ecx,eax
 2a0:	02 00                	add    al,BYTE PTR [rax]
 2a2:	00 0e                	add    BYTE PTR [rsi],cl
 2a4:	c8 00 00 00          	enter  0x0,0x0
 2a8:	06                   	(bad)  
 2a9:	8b 0e                	mov    ecx,DWORD PTR [rsi]
 2ab:	91                   	xchg   ecx,eax
 2ac:	02 00                	add    al,BYTE PTR [rax]
 2ae:	00 0e                	add    BYTE PTR [rsi],cl
 2b0:	1a 00                	sbb    al,BYTE PTR [rax]
 2b2:	00 00                	add    BYTE PTR [rax],al
 2b4:	07                   	(bad)  
 2b5:	1a 0c 65 00 00 00 0c 	sbb    cl,BYTE PTR [riz*2+0xc000000]
 2bc:	d1 02                	rol    DWORD PTR [rdx],1
 2be:	00 00                	add    BYTE PTR [rax],al
 2c0:	c6 02 00             	mov    BYTE PTR [rdx],0x0
 2c3:	00 0f                	add    BYTE PTR [rdi],cl
 2c5:	00 07                	add    BYTE PTR [rdi],al
 2c7:	bb 02 00 00 06       	mov    ebx,0x6000002
 2cc:	08 98 00 00 00 07    	or     BYTE PTR [rax+0x7000000],bl
 2d2:	cb                   	retf   
 2d3:	02 00                	add    al,BYTE PTR [rax]
 2d5:	00 0e                	add    BYTE PTR [rsi],cl
 2d7:	b6 02                	mov    dh,0x2
 2d9:	00 00                	add    BYTE PTR [rax],al
 2db:	07                   	(bad)  
 2dc:	1b 1a                	sbb    ebx,DWORD PTR [rdx]
 2de:	c6 02 00             	mov    BYTE PTR [rdx],0x0
 2e1:	00 03                	add    BYTE PTR [rbx],al
 2e3:	08 05 cf 00 00 00    	or     BYTE PTR [rip+0xcf],al        # 3b8 <_init-0xc48>
 2e9:	03 08                	add    ecx,DWORD PTR [rax]
 2eb:	07                   	(bad)  
 2ec:	06                   	(bad)  
 2ed:	01 00                	add    DWORD PTR [rax],eax
 2ef:	00 10                	add    BYTE PTR [rax],dl
 2f1:	97                   	xchg   edi,eax
 2f2:	00 00                	add    BYTE PTR [rax],al
 2f4:	00 08                	add    BYTE PTR [rax],cl
 2f6:	1f                   	(bad)  
 2f7:	02 0f                	add    cl,BYTE PTR [rdi]
 2f9:	fd                   	std    
 2fa:	02 00                	add    al,BYTE PTR [rax]
 2fc:	00 06                	add    BYTE PTR [rsi],al
 2fe:	08 8b 00 00 00 0e    	or     BYTE PTR [rbx+0xe000000],cl
 304:	07                   	(bad)  
 305:	00 00                	add    BYTE PTR [rax],al
 307:	00 09                	add    BYTE PTR [rcx],cl
 309:	24 0e                	and    al,0xe
 30b:	8b 00                	mov    eax,DWORD PTR [rax]
 30d:	00 00                	add    BYTE PTR [rax],al
 30f:	0e                   	(bad)  
 310:	00 00                	add    BYTE PTR [rax],al
 312:	00 00                	add    BYTE PTR [rax],al
 314:	09 32                	or     DWORD PTR [rdx],esi
 316:	0c 65                	or     al,0x65
 318:	00 00                	add    BYTE PTR [rax],al
 31a:	00 0e                	add    BYTE PTR [rsi],cl
 31c:	b7 00                	mov    bh,0x0
 31e:	00 00                	add    BYTE PTR [rax],al
 320:	09 37                	or     DWORD PTR [rdi],esi
 322:	0c 65                	or     al,0x65
 324:	00 00                	add    BYTE PTR [rax],al
 326:	00 0e                	add    BYTE PTR [rsi],cl
 328:	c2 02 00             	ret    0x2
 32b:	00 09                	add    BYTE PTR [rcx],cl
 32d:	3b 0c 65 00 00 00 0c 	cmp    ecx,DWORD PTR [riz*2+0xc000000]
 334:	d1 02                	rol    DWORD PTR [rdx],1
 336:	00 00                	add    BYTE PTR [rax],al
 338:	43 03 00             	rex.XB add eax,DWORD PTR [r8]
 33b:	00 0d 39 00 00 00    	add    BYTE PTR [rip+0x39],cl        # 37a <_init-0xc86>
 341:	40 00 07             	add    BYTE PTR [rdi],al
 344:	33 03                	xor    eax,DWORD PTR [rbx]
 346:	00 00                	add    BYTE PTR [rax],al
 348:	10 f1                	adc    cl,dh
 34a:	01 00                	add    DWORD PTR [rax],eax
 34c:	00 0a                	add    BYTE PTR [rdx],cl
 34e:	1e                   	(bad)  
 34f:	01 1a                	add    DWORD PTR [rdx],ebx
 351:	43 03 00             	rex.XB add eax,DWORD PTR [r8]
 354:	00 10                	add    BYTE PTR [rax],dl
 356:	f2 01 00             	repnz add DWORD PTR [rax],eax
 359:	00 0a                	add    BYTE PTR [rdx],cl
 35b:	1f                   	(bad)  
 35c:	01 1a                	add    DWORD PTR [rdx],ebx
 35e:	43 03 00             	rex.XB add eax,DWORD PTR [r8]
 361:	00 11                	add    BYTE PTR [rcx],dl
 363:	7c 00                	jl     365 <_init-0xc9b>
 365:	00 00                	add    BYTE PTR [rax],al
 367:	01 0a                	add    DWORD PTR [rdx],ecx
 369:	05 65 00 00 00       	add    eax,0x65
 36e:	29 12                	sub    DWORD PTR [rdx],edx
 370:	00 00                	add    BYTE PTR [rax],al
 372:	00 00                	add    BYTE PTR [rax],al
 374:	00 00                	add    BYTE PTR [rax],al
 376:	74 01                	je     379 <_init-0xc87>
 378:	00 00                	add    BYTE PTR [rax],al
 37a:	00 00                	add    BYTE PTR [rax],al
 37c:	00 00                	add    BYTE PTR [rax],al
 37e:	01 9c e4 03 00 00 12 	add    DWORD PTR [rsp+riz*8+0x12000003],ebx
 385:	66 64 00 01          	data16 add BYTE PTR fs:[rcx],al
 389:	15 06 65 00 00       	adc    eax,0x6506
 38e:	00 03                	add    BYTE PTR [rbx],al
 390:	91                   	xchg   ecx,eax
 391:	d8 77 12             	fdiv   DWORD PTR [rdi+0x12]
 394:	62                   	(bad)  
 395:	75 66                	jne    3fd <_init-0xc03>
 397:	00 01                	add    BYTE PTR [rcx],al
 399:	1b 07                	sbb    eax,DWORD PTR [rdi]
 39b:	e4 03                	in     al,0x3
 39d:	00 00                	add    BYTE PTR [rax],al
 39f:	03 91 e0 77 12 72    	add    edx,DWORD PTR [rcx+0x721277e0]
 3a5:	65 74 00             	gs je  3a8 <_init-0xc58>
 3a8:	01 21                	add    DWORD PTR [rcx],esp
 3aa:	06                   	(bad)  
 3ab:	65 00 00             	add    BYTE PTR gs:[rax],al
 3ae:	00 03                	add    BYTE PTR [rbx],al
 3b0:	91                   	xchg   ecx,eax
 3b1:	dc 77 12             	fdiv   QWORD PTR [rdi+0x12]
 3b4:	73 75                	jae    42b <_init-0xbd5>
 3b6:	6d                   	ins    DWORD PTR es:[rdi],dx
 3b7:	00 01                	add    BYTE PTR [rcx],al
 3b9:	22 06                	and    al,BYTE PTR [rsi]
 3bb:	65 00 00             	add    BYTE PTR gs:[rax],al
 3be:	00 03                	add    BYTE PTR [rbx],al
 3c0:	91                   	xchg   ecx,eax
 3c1:	d4                   	(bad)  
 3c2:	77 13                	ja     3d7 <_init-0xc29>
 3c4:	ef                   	out    dx,eax
 3c5:	12 00                	adc    al,BYTE PTR [rax]
 3c7:	00 00                	add    BYTE PTR [rax],al
 3c9:	00 00                	add    BYTE PTR [rax],al
 3cb:	00 2f                	add    BYTE PTR [rdi],ch
 3cd:	00 00                	add    BYTE PTR [rax],al
 3cf:	00 00                	add    BYTE PTR [rax],al
 3d1:	00 00                	add    BYTE PTR [rax],al
 3d3:	00 12                	add    BYTE PTR [rdx],dl
 3d5:	69 00 01 1c 0a 65    	imul   eax,DWORD PTR [rax],0x650a1c01
 3db:	00 00                	add    BYTE PTR [rax],al
 3dd:	00 03                	add    BYTE PTR [rbx],al
 3df:	91                   	xchg   ecx,eax
 3e0:	d0 77 00             	shl    BYTE PTR [rdi+0x0],1
 3e3:	00 14 91             	add    BYTE PTR [rcx+rdx*4],dl
 3e6:	00 00                	add    BYTE PTR [rax],al
 3e8:	00 15 39 00 00 00    	add    BYTE PTR [rip+0x39],dl        # 427 <_init-0xbd9>
 3ee:	ff 03                	inc    DWORD PTR [rbx]
	...

Disassembly of section .debug_abbrev:

0000000000000000 <.debug_abbrev>:
   0:	01 11                	add    DWORD PTR [rcx],edx
   2:	01 25 0e 13 0b 03    	add    DWORD PTR [rip+0x30b130e],esp        # 30b1316 <_end+0x30ad2fe>
   8:	0e                   	(bad)  
   9:	1b 0e                	sbb    ecx,DWORD PTR [rsi]
   b:	11 01                	adc    DWORD PTR [rcx],eax
   d:	12 07                	adc    al,BYTE PTR [rdi]
   f:	10 17                	adc    BYTE PTR [rdi],dl
  11:	00 00                	add    BYTE PTR [rax],al
  13:	02 16                	add    dl,BYTE PTR [rsi]
  15:	00 03                	add    BYTE PTR [rbx],al
  17:	0e                   	(bad)  
  18:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  1a:	3b 0b                	cmp    ecx,DWORD PTR [rbx]
  1c:	39 0b                	cmp    DWORD PTR [rbx],ecx
  1e:	49 13 00             	adc    rax,QWORD PTR [r8]
  21:	00 03                	add    BYTE PTR [rbx],al
  23:	24 00                	and    al,0x0
  25:	0b 0b                	or     ecx,DWORD PTR [rbx]
  27:	3e 0b 03             	or     eax,DWORD PTR ds:[rbx]
  2a:	0e                   	(bad)  
  2b:	00 00                	add    BYTE PTR [rax],al
  2d:	04 0f                	add    al,0xf
  2f:	00 0b                	add    BYTE PTR [rbx],cl
  31:	0b 00                	or     eax,DWORD PTR [rax]
  33:	00 05 24 00 0b 0b    	add    BYTE PTR [rip+0xb0b0024],al        # b0b005d <_end+0xb0ac045>
  39:	3e 0b 03             	or     eax,DWORD PTR ds:[rbx]
  3c:	08 00                	or     BYTE PTR [rax],al
  3e:	00 06                	add    BYTE PTR [rsi],al
  40:	0f 00 0b             	str    WORD PTR [rbx]
  43:	0b 49 13             	or     ecx,DWORD PTR [rcx+0x13]
  46:	00 00                	add    BYTE PTR [rax],al
  48:	07                   	(bad)  
  49:	26 00 49 13          	add    BYTE PTR es:[rcx+0x13],cl
  4d:	00 00                	add    BYTE PTR [rax],al
  4f:	08 13                	or     BYTE PTR [rbx],dl
  51:	01 03                	add    DWORD PTR [rbx],eax
  53:	0e                   	(bad)  
  54:	0b 0b                	or     ecx,DWORD PTR [rbx]
  56:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  58:	3b 0b                	cmp    ecx,DWORD PTR [rbx]
  5a:	39 0b                	cmp    DWORD PTR [rbx],ecx
  5c:	01 13                	add    DWORD PTR [rbx],edx
  5e:	00 00                	add    BYTE PTR [rax],al
  60:	09 0d 00 03 0e 3a    	or     DWORD PTR [rip+0x3a0e0300],ecx        # 3a0e0366 <_end+0x3a0dc34e>
  66:	0b 3b                	or     edi,DWORD PTR [rbx]
  68:	0b 39                	or     edi,DWORD PTR [rcx]
  6a:	0b 49 13             	or     ecx,DWORD PTR [rcx+0x13]
  6d:	38 0b                	cmp    BYTE PTR [rbx],cl
  6f:	00 00                	add    BYTE PTR [rax],al
  71:	0a 16                	or     dl,BYTE PTR [rsi]
  73:	00 03                	add    BYTE PTR [rbx],al
  75:	0e                   	(bad)  
  76:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  78:	3b 0b                	cmp    ecx,DWORD PTR [rbx]
  7a:	39 0b                	cmp    DWORD PTR [rbx],ecx
  7c:	00 00                	add    BYTE PTR [rax],al
  7e:	0b 13                	or     edx,DWORD PTR [rbx]
  80:	00 03                	add    BYTE PTR [rbx],al
  82:	0e                   	(bad)  
  83:	3c 19                	cmp    al,0x19
  85:	00 00                	add    BYTE PTR [rax],al
  87:	0c 01                	or     al,0x1
  89:	01 49 13             	add    DWORD PTR [rcx+0x13],ecx
  8c:	01 13                	add    DWORD PTR [rbx],edx
  8e:	00 00                	add    BYTE PTR [rax],al
  90:	0d 21 00 49 13       	or     eax,0x13490021
  95:	2f                   	(bad)  
  96:	0b 00                	or     eax,DWORD PTR [rax]
  98:	00 0e                	add    BYTE PTR [rsi],cl
  9a:	34 00                	xor    al,0x0
  9c:	03 0e                	add    ecx,DWORD PTR [rsi]
  9e:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  a0:	3b 0b                	cmp    ecx,DWORD PTR [rbx]
  a2:	39 0b                	cmp    DWORD PTR [rbx],ecx
  a4:	49 13 3f             	adc    rdi,QWORD PTR [r15]
  a7:	19 3c 19             	sbb    DWORD PTR [rcx+rbx*1],edi
  aa:	00 00                	add    BYTE PTR [rax],al
  ac:	0f 21 00             	mov    rax,db0
  af:	00 00                	add    BYTE PTR [rax],al
  b1:	10 34 00             	adc    BYTE PTR [rax+rax*1],dh
  b4:	03 0e                	add    ecx,DWORD PTR [rsi]
  b6:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  b8:	3b 05 39 0b 49 13    	cmp    eax,DWORD PTR [rip+0x13490b39]        # 13490bf7 <_end+0x1348cbdf>
  be:	3f                   	(bad)  
  bf:	19 3c 19             	sbb    DWORD PTR [rcx+rbx*1],edi
  c2:	00 00                	add    BYTE PTR [rax],al
  c4:	11 2e                	adc    DWORD PTR [rsi],ebp
  c6:	01 3f                	add    DWORD PTR [rdi],edi
  c8:	19 03                	sbb    DWORD PTR [rbx],eax
  ca:	0e                   	(bad)  
  cb:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  cd:	3b 0b                	cmp    ecx,DWORD PTR [rbx]
  cf:	39 0b                	cmp    DWORD PTR [rbx],ecx
  d1:	49 13 11             	adc    rdx,QWORD PTR [r9]
  d4:	01 12                	add    DWORD PTR [rdx],edx
  d6:	07                   	(bad)  
  d7:	40 18 96 42 19 01 13 	sbb    BYTE PTR [rsi+0x13011942],dl
  de:	00 00                	add    BYTE PTR [rax],al
  e0:	12 34 00             	adc    dh,BYTE PTR [rax+rax*1]
  e3:	03 08                	add    ecx,DWORD PTR [rax]
  e5:	3a 0b                	cmp    cl,BYTE PTR [rbx]
  e7:	3b 0b                	cmp    ecx,DWORD PTR [rbx]
  e9:	39 0b                	cmp    DWORD PTR [rbx],ecx
  eb:	49 13 02             	adc    rax,QWORD PTR [r10]
  ee:	18 00                	sbb    BYTE PTR [rax],al
  f0:	00 13                	add    BYTE PTR [rbx],dl
  f2:	0b 01                	or     eax,DWORD PTR [rcx]
  f4:	11 01                	adc    DWORD PTR [rcx],eax
  f6:	12 07                	adc    al,BYTE PTR [rdi]
  f8:	00 00                	add    BYTE PTR [rax],al
  fa:	14 01                	adc    al,0x1
  fc:	01 49 13             	add    DWORD PTR [rcx+0x13],ecx
  ff:	00 00                	add    BYTE PTR [rax],al
 101:	15 21 00 49 13       	adc    eax,0x13490021
 106:	2f                   	(bad)  
 107:	05                   	.byte 0x5
 108:	00 00                	add    BYTE PTR [rax],al
	...

Disassembly of section .debug_line:

0000000000000000 <.debug_line>:
   0:	a3 01 00 00 03 00 17 	movabs ds:0x1170003000001,eax
   7:	01 00 
   9:	00 01                	add    BYTE PTR [rcx],al
   b:	01 fb                	add    ebx,edi
   d:	0e                   	(bad)  
   e:	0d 00 01 01 01       	or     eax,0x1010100
  13:	01 00                	add    DWORD PTR [rax],eax
  15:	00 00                	add    BYTE PTR [rax],al
  17:	01 00                	add    DWORD PTR [rax],eax
  19:	00 01                	add    BYTE PTR [rcx],al
  1b:	2f                   	(bad)  
  1c:	75 73                	jne    91 <_init-0xf6f>
  1e:	72 2f                	jb     4f <_init-0xfb1>
  20:	6c                   	ins    BYTE PTR es:[rdi],dx
  21:	69 62 2f 67 63 63 2f 	imul   esp,DWORD PTR [rdx+0x2f],0x2f636367
  28:	78 38                	js     62 <_init-0xf9e>
  2a:	36 5f                	ss pop rdi
  2c:	36 34 2d             	ss xor al,0x2d
  2f:	6c                   	ins    BYTE PTR es:[rdi],dx
  30:	69 6e 75 78 2d 67 6e 	imul   ebp,DWORD PTR [rsi+0x75],0x6e672d78
  37:	75 2f                	jne    68 <_init-0xf98>
  39:	39 2f                	cmp    DWORD PTR [rdi],ebp
  3b:	69 6e 63 6c 75 64 65 	imul   ebp,DWORD PTR [rsi+0x63],0x6564756c
  42:	00 2f                	add    BYTE PTR [rdi],ch
  44:	75 73                	jne    b9 <_init-0xf47>
  46:	72 2f                	jb     77 <_init-0xf89>
  48:	69 6e 63 6c 75 64 65 	imul   ebp,DWORD PTR [rsi+0x63],0x6564756c
  4f:	2f                   	(bad)  
  50:	78 38                	js     8a <_init-0xf76>
  52:	36 5f                	ss pop rdi
  54:	36 34 2d             	ss xor al,0x2d
  57:	6c                   	ins    BYTE PTR es:[rdi],dx
  58:	69 6e 75 78 2d 67 6e 	imul   ebp,DWORD PTR [rsi+0x75],0x6e672d78
  5f:	75 2f                	jne    90 <_init-0xf70>
  61:	62                   	(bad)  
  62:	69 74 73 00 2f 75 73 	imul   esi,DWORD PTR [rbx+rsi*2+0x0],0x7273752f
  69:	72 
  6a:	2f                   	(bad)  
  6b:	69 6e 63 6c 75 64 65 	imul   ebp,DWORD PTR [rsi+0x63],0x6564756c
  72:	2f                   	(bad)  
  73:	78 38                	js     ad <_init-0xf53>
  75:	36 5f                	ss pop rdi
  77:	36 34 2d             	ss xor al,0x2d
  7a:	6c                   	ins    BYTE PTR es:[rdi],dx
  7b:	69 6e 75 78 2d 67 6e 	imul   ebp,DWORD PTR [rsi+0x75],0x6e672d78
  82:	75 2f                	jne    b3 <_init-0xf4d>
  84:	62                   	(bad)  
  85:	69 74 73 2f 74 79 70 	imul   esi,DWORD PTR [rbx+rsi*2+0x2f],0x65707974
  8c:	65 
  8d:	73 00                	jae    8f <_init-0xf71>
  8f:	2f                   	(bad)  
  90:	75 73                	jne    105 <_init-0xefb>
  92:	72 2f                	jb     c3 <_init-0xf3d>
  94:	69 6e 63 6c 75 64 65 	imul   ebp,DWORD PTR [rsi+0x63],0x6564756c
  9b:	00 00                	add    BYTE PTR [rax],al
  9d:	6d                   	ins    DWORD PTR es:[rdi],dx
  9e:	79 66                	jns    106 <_init-0xefa>
  a0:	69 66 6f 2e 63 00 00 	imul   esp,DWORD PTR [rsi+0x6f],0x632e
  a7:	00 00                	add    BYTE PTR [rax],al
  a9:	73 74                	jae    11f <_init-0xee1>
  ab:	64 64 65 66 2e 68 00 	fs fs gs cs pushw 0x100
  b2:	01 
  b3:	00 00                	add    BYTE PTR [rax],al
  b5:	74 79                	je     130 <_init-0xed0>
  b7:	70 65                	jo     11e <_init-0xee2>
  b9:	73 2e                	jae    e9 <_init-0xf17>
  bb:	68 00 02 00 00       	push   0x200
  c0:	73 74                	jae    136 <_init-0xeca>
  c2:	72 75                	jb     139 <_init-0xec7>
  c4:	63 74 5f 46          	movsxd esi,DWORD PTR [rdi+rbx*2+0x46]
  c8:	49                   	rex.WB
  c9:	4c                   	rex.WR
  ca:	45                   	rex.RB
  cb:	2e 68 00 03 00 00    	cs push 0x300
  d1:	46                   	rex.RX
  d2:	49                   	rex.WB
  d3:	4c                   	rex.WR
  d4:	45                   	rex.RB
  d5:	2e 68 00 03 00 00    	cs push 0x300
  db:	73 74                	jae    151 <_init-0xeaf>
  dd:	64 69 6f 2e 68 00 04 	imul   ebp,DWORD PTR fs:[rdi+0x2e],0x40068
  e4:	00 
  e5:	00 73 79             	add    BYTE PTR [rbx+0x79],dh
  e8:	73 5f                	jae    149 <_init-0xeb7>
  ea:	65 72 72             	gs jb  15f <_init-0xea1>
  ed:	6c                   	ins    BYTE PTR es:[rdi],dx
  ee:	69 73 74 2e 68 00 02 	imul   esi,DWORD PTR [rbx+0x74],0x200682e
  f5:	00 00                	add    BYTE PTR [rax],al
  f7:	75 6e                	jne    167 <_init-0xe99>
  f9:	69 73 74 64 2e 68 00 	imul   esi,DWORD PTR [rbx+0x74],0x682e64
 100:	04 00                	add    al,0x0
 102:	00 67 65             	add    BYTE PTR [rdi+0x65],ah
 105:	74 6f                	je     176 <_init-0xe8a>
 107:	70 74                	jo     17d <_init-0xe83>
 109:	5f                   	pop    rdi
 10a:	63 6f 72             	movsxd ebp,DWORD PTR [rdi+0x72]
 10d:	65 2e 68 00 02 00 00 	gs cs push 0x200
 114:	73 69                	jae    17f <_init-0xe81>
 116:	67 6e                	outs   dx,BYTE PTR ds:[esi]
 118:	61                   	(bad)  
 119:	6c                   	ins    BYTE PTR es:[rdi],dx
 11a:	2e 68 00 04 00 00    	cs push 0x400
 120:	00 05 01 00 09 02    	add    BYTE PTR [rip+0x2090001],al        # 2090127 <_end+0x208c10f>
 126:	29 12                	sub    DWORD PTR [rdx],edx
 128:	00 00                	add    BYTE PTR [rax],al
 12a:	00 00                	add    BYTE PTR [rax],al
 12c:	00 00                	add    BYTE PTR [rax],al
 12e:	03 0a                	add    ecx,DWORD PTR [rdx]
 130:	01 e4                	add    esp,esp
 132:	05 05 e5 05 04       	add    eax,0x405e505
 137:	08 12                	or     BYTE PTR [rdx],dl
 139:	05 06 4c 05 05       	add    eax,0x5054c06
 13e:	08 12                	or     BYTE PTR [rdx],dl
 140:	05 04 4c 05 0b       	add    eax,0xb054c04
 145:	bb a2 05 04 08       	mov    ebx,0x80405a2
 14a:	ad                   	lods   eax,DWORD PTR ds:[rsi]
 14b:	05 03 92 05 0a       	add    eax,0xa059203
 150:	bb 05 07 a0 05       	mov    ebx,0x5a00705
 155:	0a 02                	or     al,BYTE PTR [rdx]
 157:	2d 13 05 02 9e       	sub    eax,0x9e020513
 15c:	05 09 00 02 04       	add    eax,0x4020009
 161:	03 30                	add    esi,DWORD PTR [rax]
 163:	05 16 00 02 04       	add    eax,0x4020016
 168:	03 f0                	add    esi,eax
 16a:	05 02 00 02 04       	add    eax,0x4020002
 16f:	01 74 be 05          	add    DWORD PTR [rsi+rdi*4+0x5],esi
 173:	06                   	(bad)  
 174:	bb 9f 05 09 00       	mov    ebx,0x9059f
 179:	02 04 01             	add    al,BYTE PTR [rcx+rax*1]
 17c:	a1 05 07 00 02 04 01 	movabs eax,ds:0xac08010402000705
 183:	08 ac 
 185:	00 02                	add    BYTE PTR [rdx],al
 187:	04 01                	add    al,0x1
 189:	67 05 03 00 02 04    	addr32 add eax,0x4020003
 18f:	01 bb 05 07 00 02    	add    DWORD PTR [rbx+0x2000705],edi
 195:	04 01                	add    al,0x1
 197:	08 80 05 01 00 02    	or     BYTE PTR [rax+0x2000105],al
 19d:	04 01                	add    al,0x1
 19f:	36 06                	ss (bad) 
 1a1:	e4 02                	in     al,0x2
 1a3:	07                   	(bad)  
 1a4:	00 01                	add    BYTE PTR [rcx],al
 1a6:	01                   	.byte 0x1

Disassembly of section .debug_str:

0000000000000000 <.debug_str>:
   0:	6f                   	outs   dx,DWORD PTR ds:[rsi]
   1:	70 74                	jo     77 <_init-0xf89>
   3:	69 6e 64 00 6f 70 74 	imul   ebp,DWORD PTR [rsi+0x64],0x74706f00
   a:	61                   	(bad)  
   b:	72 67                	jb     74 <_init-0xf8c>
   d:	00 5f 6f             	add    BYTE PTR [rdi+0x6f],bl
  10:	6c                   	ins    BYTE PTR es:[rdi],dx
  11:	64 5f                	fs pop rdi
  13:	6f                   	outs   dx,DWORD PTR ds:[rsi]
  14:	66 66 73 65          	data16 data16 jae 7d <_init-0xf83>
  18:	74 00                	je     1a <_init-0xfe6>
  1a:	73 79                	jae    95 <_init-0xf6b>
  1c:	73 5f                	jae    7d <_init-0xf83>
  1e:	6e                   	outs   dx,BYTE PTR ds:[rsi]
  1f:	65 72 72             	gs jb  94 <_init-0xf6c>
  22:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
  25:	4f 5f                	rex.WRXB pop r15
  27:	73 61                	jae    8a <_init-0xf76>
  29:	76 65                	jbe    90 <_init-0xf70>
  2b:	5f                   	pop    rdi
  2c:	65 6e                	outs   dx,BYTE PTR gs:[rsi]
  2e:	64 00 2f             	add    BYTE PTR fs:[rdi],ch
  31:	68 6f 6d 65 2f       	push   0x2f656d6f
  36:	67 61                	addr32 (bad) 
  38:	69 66 77 2f e6 a1 8c 	imul   esp,DWORD PTR [rsi+0x77],0x8ca1e62f
  3f:	e9 9d a2 2f 47       	jmp    472fa2e1 <_end+0x472f62c9>
  44:	61                   	(bad)  
  45:	69 46 57 5f 43 2f 50 	imul   eax,DWORD PTR [rsi+0x57],0x502f435f
  4c:	72 6f                	jb     bd <_init-0xf43>
  4e:	63 2f                	movsxd ebp,DWORD PTR [rdi]
  50:	30 32                	xor    BYTE PTR [rdx],dh
  52:	5f                   	pop    rdi
  53:	65 78 65             	gs js  bb <_init-0xf45>
  56:	72 63                	jb     bb <_init-0xf45>
  58:	69 73 65 00 73 69 7a 	imul   esi,DWORD PTR [rbx+0x65],0x7a697300
  5f:	65 5f                	gs pop rdi
  61:	74 00                	je     63 <_init-0xf9d>
  63:	5f                   	pop    rdi
  64:	49                   	rex.WB
  65:	4f 5f                	rex.WRXB pop r15
  67:	6c                   	ins    BYTE PTR es:[rdi],dx
  68:	6f                   	outs   dx,DWORD PTR ds:[rsi]
  69:	63 6b 5f             	movsxd ebp,DWORD PTR [rbx+0x5f]
  6c:	74 00                	je     6e <_init-0xf92>
  6e:	5f                   	pop    rdi
  6f:	49                   	rex.WB
  70:	4f 5f                	rex.WRXB pop r15
  72:	77 72                	ja     e6 <_init-0xf1a>
  74:	69 74 65 5f 70 74 72 	imul   esi,DWORD PTR [rbp+riz*2+0x5f],0x727470
  7b:	00 
  7c:	6d                   	ins    DWORD PTR es:[rdi],dx
  7d:	61                   	(bad)  
  7e:	69 6e 00 6d 79 66 69 	imul   ebp,DWORD PTR [rsi+0x0],0x6966796d
  85:	66 6f                	outs   dx,WORD PTR ds:[rsi]
  87:	2e 63 00             	movsxd eax,DWORD PTR cs:[rax]
  8a:	5f                   	pop    rdi
  8b:	49                   	rex.WB
  8c:	4f 5f                	rex.WRXB pop r15
  8e:	62                   	(bad)  
  8f:	75 66                	jne    f7 <_init-0xf09>
  91:	5f                   	pop    rdi
  92:	62 61                	(bad)  
  94:	73 65                	jae    fb <_init-0xf05>
  96:	00 5f 5f             	add    BYTE PTR [rdi+0x5f],bl
  99:	65 6e                	outs   dx,BYTE PTR gs:[rsi]
  9b:	76 69                	jbe    106 <_init-0xefa>
  9d:	72 6f                	jb     10e <_init-0xef2>
  9f:	6e                   	outs   dx,BYTE PTR ds:[rsi]
  a0:	00 5f 6d             	add    BYTE PTR [rdi+0x6d],bl
  a3:	61                   	(bad)  
  a4:	72 6b                	jb     111 <_init-0xeef>
  a6:	65 72 73             	gs jb  11c <_init-0xee4>
  a9:	00 5f 66             	add    BYTE PTR [rdi+0x66],bl
  ac:	72 65                	jb     113 <_init-0xeed>
  ae:	65 72 65             	gs jb  116 <_init-0xeea>
  b1:	73 5f                	jae    112 <_init-0xeee>
  b3:	62                   	(bad)  
  b4:	75 66                	jne    11c <_init-0xee4>
  b6:	00 6f 70             	add    BYTE PTR [rdi+0x70],ch
  b9:	74 65                	je     120 <_init-0xee0>
  bb:	72 72                	jb     12f <_init-0xed1>
  bd:	00 73 68             	add    BYTE PTR [rbx+0x68],dh
  c0:	6f                   	outs   dx,DWORD PTR ds:[rsi]
  c1:	72 74                	jb     137 <_init-0xec9>
  c3:	20 69 6e             	and    BYTE PTR [rcx+0x6e],ch
  c6:	74 00                	je     c8 <_init-0xf38>
  c8:	73 74                	jae    13e <_init-0xec2>
  ca:	64 65 72 72          	fs gs jb 140 <_init-0xec0>
  ce:	00 6c 6f 6e          	add    BYTE PTR [rdi+rbp*2+0x6e],ch
  d2:	67 20 6c 6f 6e       	and    BYTE PTR [edi+ebp*2+0x6e],ch
  d7:	67 20 69 6e          	and    BYTE PTR [ecx+0x6e],ch
  db:	74 00                	je     dd <_init-0xf23>
  dd:	5f                   	pop    rdi
  de:	6c                   	ins    BYTE PTR es:[rdi],dx
  df:	6f                   	outs   dx,DWORD PTR ds:[rsi]
  e0:	63 6b 00             	movsxd ebp,DWORD PTR [rbx+0x0]
  e3:	5f                   	pop    rdi
  e4:	63 75 72             	movsxd esi,DWORD PTR [rbp+0x72]
  e7:	5f                   	pop    rdi
  e8:	63 6f 6c             	movsxd ebp,DWORD PTR [rdi+0x6c]
  eb:	75 6d                	jne    15a <_init-0xea6>
  ed:	6e                   	outs   dx,BYTE PTR ds:[rsi]
  ee:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
  f1:	4f 5f                	rex.WRXB pop r15
  f3:	46                   	rex.RX
  f4:	49                   	rex.WB
  f5:	4c                   	rex.WR
  f6:	45 00 75 6e          	add    BYTE PTR [r13+0x6e],r14b
  fa:	73 69                	jae    165 <_init-0xe9b>
  fc:	67 6e                	outs   dx,BYTE PTR ds:[esi]
  fe:	65 64 20 63 68       	gs and BYTE PTR fs:[rbx+0x68],ah
 103:	61                   	(bad)  
 104:	72 00                	jb     106 <_init-0xefa>
 106:	6c                   	ins    BYTE PTR es:[rdi],dx
 107:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 108:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 109:	67 20 6c 6f 6e       	and    BYTE PTR [edi+ebp*2+0x6e],ch
 10e:	67 20 75 6e          	and    BYTE PTR [ebp+0x6e],dh
 112:	73 69                	jae    17d <_init-0xe83>
 114:	67 6e                	outs   dx,BYTE PTR ds:[esi]
 116:	65 64 20 69 6e       	gs and BYTE PTR fs:[rcx+0x6e],ch
 11b:	74 00                	je     11d <_init-0xee3>
 11d:	47                   	rex.RXB
 11e:	4e 55                	rex.WRX push rbp
 120:	20 43 31             	and    BYTE PTR [rbx+0x31],al
 123:	37                   	(bad)  
 124:	20 39                	and    BYTE PTR [rcx],bh
 126:	2e 33 2e             	xor    ebp,DWORD PTR cs:[rsi]
 129:	30 20                	xor    BYTE PTR [rax],ah
 12b:	2d 6d 74 75 6e       	sub    eax,0x6e75746d
 130:	65 3d 67 65 6e 65    	gs cmp eax,0x656e6567
 136:	72 69                	jb     1a1 <_init-0xe5f>
 138:	63 20                	movsxd esp,DWORD PTR [rax]
 13a:	2d 6d 61 72 63       	sub    eax,0x6372616d
 13f:	68 3d 78 38 36       	push   0x3638783d
 144:	2d 36 34 20 2d       	sub    eax,0x2d203436
 149:	67 20 2d 66 61 73 79 	and    BYTE PTR [eip+0x79736166],ch        # 797362b6 <_end+0x7973229e>
 150:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 151:	63 68 72             	movsxd ebp,DWORD PTR [rax+0x72]
 154:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 155:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 156:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 157:	75 73                	jne    1cc <_init-0xe34>
 159:	2d 75 6e 77 69       	sub    eax,0x69776e75
 15e:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 15f:	64 2d 74 61 62 6c    	fs sub eax,0x6c626174
 165:	65 73 20             	gs jae 188 <_init-0xe78>
 168:	2d 66 73 74 61       	sub    eax,0x61747366
 16d:	63 6b 2d             	movsxd ebp,DWORD PTR [rbx+0x2d]
 170:	70 72                	jo     1e4 <_init-0xe1c>
 172:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 173:	74 65                	je     1da <_init-0xe26>
 175:	63 74 6f 72          	movsxd esi,DWORD PTR [rdi+rbp*2+0x72]
 179:	2d 73 74 72 6f       	sub    eax,0x6f727473
 17e:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 17f:	67 20 2d 66 73 74 61 	and    BYTE PTR [eip+0x61747366],ch        # 617474ec <_end+0x617434d4>
 186:	63 6b 2d             	movsxd ebp,DWORD PTR [rbx+0x2d]
 189:	63 6c 61 73          	movsxd ebp,DWORD PTR [rcx+riz*2+0x73]
 18d:	68 2d 70 72 6f       	push   0x6f72702d
 192:	74 65                	je     1f9 <_init-0xe07>
 194:	63 74 69 6f          	movsxd esi,DWORD PTR [rcx+rbp*2+0x6f]
 198:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 199:	20 2d 66 63 66 2d    	and    BYTE PTR [rip+0x2d666366],ch        # 2d666505 <_end+0x2d6624ed>
 19f:	70 72                	jo     213 <_init-0xded>
 1a1:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 1a2:	74 65                	je     209 <_init-0xdf7>
 1a4:	63 74 69 6f          	movsxd esi,DWORD PTR [rcx+rbp*2+0x6f]
 1a8:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 1a9:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
 1ac:	4f 5f                	rex.WRXB pop r15
 1ae:	6d                   	ins    DWORD PTR es:[rdi],dx
 1af:	61                   	(bad)  
 1b0:	72 6b                	jb     21d <_init-0xde3>
 1b2:	65 72 00             	gs jb  1b5 <_init-0xe4b>
 1b5:	5f                   	pop    rdi
 1b6:	73 68                	jae    220 <_init-0xde0>
 1b8:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 1b9:	72 74                	jb     22f <_init-0xdd1>
 1bb:	62                   	(bad)  
 1bc:	75 66                	jne    224 <_init-0xddc>
 1be:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
 1c1:	4f 5f                	rex.WRXB pop r15
 1c3:	72 65                	jb     22a <_init-0xdd6>
 1c5:	61                   	(bad)  
 1c6:	64 5f                	fs pop rdi
 1c8:	65 6e                	outs   dx,BYTE PTR gs:[rsi]
 1ca:	64 00 5f 49          	add    BYTE PTR fs:[rdi+0x49],bl
 1ce:	4f 5f                	rex.WRXB pop r15
 1d0:	77 72                	ja     244 <_init-0xdbc>
 1d2:	69 74 65 5f 62 61 73 	imul   esi,DWORD PTR [rbp+riz*2+0x5f],0x65736162
 1d9:	65 
 1da:	00 5f 75             	add    BYTE PTR [rdi+0x75],bl
 1dd:	6e                   	outs   dx,BYTE PTR ds:[rsi]
 1de:	75 73                	jne    253 <_init-0xdad>
 1e0:	65 64 32 00          	gs xor al,BYTE PTR fs:[rax]
 1e4:	5f                   	pop    rdi
 1e5:	49                   	rex.WB
 1e6:	4f 5f                	rex.WRXB pop r15
 1e8:	72 65                	jb     24f <_init-0xdb1>
 1ea:	61                   	(bad)  
 1eb:	64 5f                	fs pop rdi
 1ed:	70 74                	jo     263 <_init-0xd9d>
 1ef:	72 00                	jb     1f1 <_init-0xe0f>
 1f1:	5f                   	pop    rdi
 1f2:	73 79                	jae    26d <_init-0xd93>
 1f4:	73 5f                	jae    255 <_init-0xdab>
 1f6:	73 69                	jae    261 <_init-0xd9f>
 1f8:	67 6c                	ins    BYTE PTR es:[edi],dx
 1fa:	69 73 74 00 5f 49 4f 	imul   esi,DWORD PTR [rbx+0x74],0x4f495f00
 201:	5f                   	pop    rdi
 202:	62                   	(bad)  
 203:	75 66                	jne    26b <_init-0xd95>
 205:	5f                   	pop    rdi
 206:	65 6e                	outs   dx,BYTE PTR gs:[rsi]
 208:	64 00 5f 66          	add    BYTE PTR fs:[rdi+0x66],bl
 20c:	72 65                	jb     273 <_init-0xd8d>
 20e:	65 72 65             	gs jb  276 <_init-0xd8a>
 211:	73 5f                	jae    272 <_init-0xd8e>
 213:	6c                   	ins    BYTE PTR es:[rdi],dx
 214:	69 73 74 00 5f 5f 70 	imul   esi,DWORD PTR [rbx+0x74],0x705f5f00
 21b:	61                   	(bad)  
 21c:	64 35 00 73 68 6f    	fs xor eax,0x6f687300
 222:	72 74                	jb     298 <_init-0xd68>
 224:	20 75 6e             	and    BYTE PTR [rbp+0x6e],dh
 227:	73 69                	jae    292 <_init-0xd6e>
 229:	67 6e                	outs   dx,BYTE PTR ds:[esi]
 22b:	65 64 20 69 6e       	gs and BYTE PTR fs:[rcx+0x6e],ch
 230:	74 00                	je     232 <_init-0xdce>
 232:	5f                   	pop    rdi
 233:	49                   	rex.WB
 234:	4f 5f                	rex.WRXB pop r15
 236:	77 72                	ja     2aa <_init-0xd56>
 238:	69 74 65 5f 65 6e 64 	imul   esi,DWORD PTR [rbp+riz*2+0x5f],0x646e65
 23f:	00 
 240:	5f                   	pop    rdi
 241:	5f                   	pop    rdi
 242:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 243:	66 66 36 34 5f       	data16 data16 ss xor al,0x5f
 248:	74 00                	je     24a <_init-0xdb6>
 24a:	5f                   	pop    rdi
 24b:	5f                   	pop    rdi
 24c:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 24d:	66 66 5f             	data16 pop di
 250:	74 00                	je     252 <_init-0xdae>
 252:	5f                   	pop    rdi
 253:	63 68 61             	movsxd ebp,DWORD PTR [rax+0x61]
 256:	69 6e 00 5f 49 4f 5f 	imul   ebp,DWORD PTR [rsi+0x0],0x5f4f495f
 25d:	77 69                	ja     2c8 <_init-0xd38>
 25f:	64 65 5f             	fs gs pop rdi
 262:	64 61                	fs (bad) 
 264:	74 61                	je     2c7 <_init-0xd39>
 266:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
 269:	4f 5f                	rex.WRXB pop r15
 26b:	62 61                	(bad)  
 26d:	63 6b 75             	movsxd ebp,DWORD PTR [rbx+0x75]
 270:	70 5f                	jo     2d1 <_init-0xd2f>
 272:	62 61                	(bad)  
 274:	73 65                	jae    2db <_init-0xd25>
 276:	00 73 74             	add    BYTE PTR [rbx+0x74],dh
 279:	64 69 6e 00 5f 66 6c 	imul   ebp,DWORD PTR fs:[rsi+0x0],0x616c665f
 280:	61 
 281:	67 73 32             	addr32 jae 2b6 <_init-0xd4a>
 284:	00 5f 6d             	add    BYTE PTR [rdi+0x6d],bl
 287:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 288:	64 65 00 5f 49       	fs add BYTE PTR gs:[rdi+0x49],bl
 28d:	4f 5f                	rex.WRXB pop r15
 28f:	72 65                	jb     2f6 <_init-0xd0a>
 291:	61                   	(bad)  
 292:	64 5f                	fs pop rdi
 294:	62 61                	(bad)  
 296:	73 65                	jae    2fd <_init-0xd03>
 298:	00 5f 76             	add    BYTE PTR [rdi+0x76],bl
 29b:	74 61                	je     2fe <_init-0xd02>
 29d:	62                   	(bad)  
 29e:	6c                   	ins    BYTE PTR es:[rdi],dx
 29f:	65 5f                	gs pop rdi
 2a1:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 2a2:	66 66 73 65          	data16 data16 jae 30b <_init-0xcf5>
 2a6:	74 00                	je     2a8 <_init-0xd58>
 2a8:	5f                   	pop    rdi
 2a9:	49                   	rex.WB
 2aa:	4f 5f                	rex.WRXB pop r15
 2ac:	73 61                	jae    30f <_init-0xcf1>
 2ae:	76 65                	jbe    315 <_init-0xceb>
 2b0:	5f                   	pop    rdi
 2b1:	62 61                	(bad)  
 2b3:	73 65                	jae    31a <_init-0xce6>
 2b5:	00 73 79             	add    BYTE PTR [rbx+0x79],dh
 2b8:	73 5f                	jae    319 <_init-0xce7>
 2ba:	65 72 72             	gs jb  32f <_init-0xcd1>
 2bd:	6c                   	ins    BYTE PTR es:[rdi],dx
 2be:	69 73 74 00 6f 70 74 	imul   esi,DWORD PTR [rbx+0x74],0x74706f00
 2c5:	6f                   	outs   dx,DWORD PTR ds:[rsi]
 2c6:	70 74                	jo     33c <_init-0xcc4>
 2c8:	00 5f 66             	add    BYTE PTR [rdi+0x66],bl
 2cb:	69 6c 65 6e 6f 00 5f 	imul   ebp,DWORD PTR [rbp+riz*2+0x6e],0x665f006f
 2d2:	66 
 2d3:	6c                   	ins    BYTE PTR es:[rdi],dx
 2d4:	61                   	(bad)  
 2d5:	67 73 00             	addr32 jae 2d8 <_init-0xd28>
 2d8:	73 74                	jae    34e <_init-0xcb2>
 2da:	64 6f                	outs   dx,DWORD PTR fs:[rsi]
 2dc:	75 74                	jne    352 <_init-0xcae>
 2de:	00 5f 49             	add    BYTE PTR [rdi+0x49],bl
 2e1:	4f 5f                	rex.WRXB pop r15
 2e3:	63 6f 64             	movsxd ebp,DWORD PTR [rdi+0x64]
 2e6:	65 63 76 74          	movsxd esi,DWORD PTR gs:[rsi+0x74]
	...
