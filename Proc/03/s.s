
s：     文件格式 elf64-x86-64


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
    1020:	ff 35 72 2f 00 00    	push   QWORD PTR [rip+0x2f72]        # 3f98 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 73 2f 00 00 	bnd jmp QWORD PTR [rip+0x2f73]        # 3fa0 <_GLOBAL_OFFSET_TABLE_+0x10>
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

Disassembly of section .plt.got:

0000000000001090 <__cxa_finalize@plt>:
    1090:	f3 0f 1e fa          	endbr64 
    1094:	f2 ff 25 5d 2f 00 00 	bnd jmp QWORD PTR [rip+0x2f5d]        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    109b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .plt.sec:

00000000000010a0 <puts@plt>:
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	f2 ff 25 fd 2e 00 00 	bnd jmp QWORD PTR [rip+0x2efd]        # 3fa8 <puts@GLIBC_2.2.5>
    10ab:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010b0 <signal@plt>:
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	f2 ff 25 f5 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ef5]        # 3fb0 <signal@GLIBC_2.2.5>
    10bb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010c0 <kill@plt>:
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	f2 ff 25 ed 2e 00 00 	bnd jmp QWORD PTR [rip+0x2eed]        # 3fb8 <kill@GLIBC_2.2.5>
    10cb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010d0 <getppid@plt>:
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	f2 ff 25 e5 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ee5]        # 3fc0 <getppid@GLIBC_2.2.5>
    10db:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010e0 <exit@plt>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	f2 ff 25 dd 2e 00 00 	bnd jmp QWORD PTR [rip+0x2edd]        # 3fc8 <exit@GLIBC_2.2.5>
    10eb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000010f0 <fork@plt>:
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	f2 ff 25 d5 2e 00 00 	bnd jmp QWORD PTR [rip+0x2ed5]        # 3fd0 <fork@GLIBC_2.2.5>
    10fb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .text:

0000000000001100 <_start>:
_start():
    1100:	f3 0f 1e fa          	endbr64 
    1104:	31 ed                	xor    ebp,ebp
    1106:	49 89 d1             	mov    r9,rdx
    1109:	5e                   	pop    rsi
    110a:	48 89 e2             	mov    rdx,rsp
    110d:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
    1111:	50                   	push   rax
    1112:	54                   	push   rsp
    1113:	4c 8d 05 d6 02 00 00 	lea    r8,[rip+0x2d6]        # 13f0 <__libc_csu_fini>
    111a:	48 8d 0d 5f 02 00 00 	lea    rcx,[rip+0x25f]        # 1380 <__libc_csu_init>
    1121:	48 8d 3d 8d 01 00 00 	lea    rdi,[rip+0x18d]        # 12b5 <main>
    1128:	ff 15 b2 2e 00 00    	call   QWORD PTR [rip+0x2eb2]        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    112e:	f4                   	hlt    
    112f:	90                   	nop

0000000000001130 <deregister_tm_clones>:
deregister_tm_clones():
    1130:	48 8d 3d d9 2e 00 00 	lea    rdi,[rip+0x2ed9]        # 4010 <__TMC_END__>
    1137:	48 8d 05 d2 2e 00 00 	lea    rax,[rip+0x2ed2]        # 4010 <__TMC_END__>
    113e:	48 39 f8             	cmp    rax,rdi
    1141:	74 15                	je     1158 <deregister_tm_clones+0x28>
    1143:	48 8b 05 8e 2e 00 00 	mov    rax,QWORD PTR [rip+0x2e8e]        # 3fd8 <_ITM_deregisterTMCloneTable>
    114a:	48 85 c0             	test   rax,rax
    114d:	74 09                	je     1158 <deregister_tm_clones+0x28>
    114f:	ff e0                	jmp    rax
    1151:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1158:	c3                   	ret    
    1159:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001160 <register_tm_clones>:
register_tm_clones():
    1160:	48 8d 3d a9 2e 00 00 	lea    rdi,[rip+0x2ea9]        # 4010 <__TMC_END__>
    1167:	48 8d 35 a2 2e 00 00 	lea    rsi,[rip+0x2ea2]        # 4010 <__TMC_END__>
    116e:	48 29 fe             	sub    rsi,rdi
    1171:	48 89 f0             	mov    rax,rsi
    1174:	48 c1 ee 3f          	shr    rsi,0x3f
    1178:	48 c1 f8 03          	sar    rax,0x3
    117c:	48 01 c6             	add    rsi,rax
    117f:	48 d1 fe             	sar    rsi,1
    1182:	74 14                	je     1198 <register_tm_clones+0x38>
    1184:	48 8b 05 65 2e 00 00 	mov    rax,QWORD PTR [rip+0x2e65]        # 3ff0 <_ITM_registerTMCloneTable>
    118b:	48 85 c0             	test   rax,rax
    118e:	74 08                	je     1198 <register_tm_clones+0x38>
    1190:	ff e0                	jmp    rax
    1192:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    1198:	c3                   	ret    
    1199:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000011a0 <__do_global_dtors_aux>:
__do_global_dtors_aux():
    11a0:	f3 0f 1e fa          	endbr64 
    11a4:	80 3d 65 2e 00 00 00 	cmp    BYTE PTR [rip+0x2e65],0x0        # 4010 <__TMC_END__>
    11ab:	75 2b                	jne    11d8 <__do_global_dtors_aux+0x38>
    11ad:	55                   	push   rbp
    11ae:	48 83 3d 42 2e 00 00 	cmp    QWORD PTR [rip+0x2e42],0x0        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    11b5:	00 
    11b6:	48 89 e5             	mov    rbp,rsp
    11b9:	74 0c                	je     11c7 <__do_global_dtors_aux+0x27>
    11bb:	48 8b 3d 46 2e 00 00 	mov    rdi,QWORD PTR [rip+0x2e46]        # 4008 <__dso_handle>
    11c2:	e8 c9 fe ff ff       	call   1090 <__cxa_finalize@plt>
    11c7:	e8 64 ff ff ff       	call   1130 <deregister_tm_clones>
    11cc:	c6 05 3d 2e 00 00 01 	mov    BYTE PTR [rip+0x2e3d],0x1        # 4010 <__TMC_END__>
    11d3:	5d                   	pop    rbp
    11d4:	c3                   	ret    
    11d5:	0f 1f 00             	nop    DWORD PTR [rax]
    11d8:	c3                   	ret    
    11d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000011e0 <frame_dummy>:
frame_dummy():
    11e0:	f3 0f 1e fa          	endbr64 
    11e4:	e9 77 ff ff ff       	jmp    1160 <register_tm_clones>

00000000000011e9 <fun1>:
fun1():
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:11
#include <stdlib.h>

//父进程信号处理
pid_t c_pid;
void fun1(int sig)
{
    11e9:	f3 0f 1e fa          	endbr64 
    11ed:	55                   	push   rbp
    11ee:	48 89 e5             	mov    rbp,rsp
    11f1:	48 83 ec 10          	sub    rsp,0x10
    11f5:	89 7d fc             	mov    DWORD PTR [rbp-0x4],edi
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:12
    switch(sig)
    11f8:	83 7d fc 14          	cmp    DWORD PTR [rbp-0x4],0x14
    11fc:	74 30                	je     122e <fun1+0x45>
    11fe:	83 7d fc 14          	cmp    DWORD PTR [rbp-0x4],0x14
    1202:	7f 46                	jg     124a <fun1+0x61>
    1204:	83 7d fc 0a          	cmp    DWORD PTR [rbp-0x4],0xa
    1208:	74 08                	je     1212 <fun1+0x29>
    120a:	83 7d fc 0c          	cmp    DWORD PTR [rbp-0x4],0xc
    120e:	74 10                	je     1220 <fun1+0x37>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:24
            break;
        case SIGTSTP:
        	kill(c_pid,SIGUSR1);
        	exit(0);
    }
}
    1210:	eb 38                	jmp    124a <fun1+0x61>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:15
            printf("开车了..\n");
    1212:	48 8d 3d ef 0d 00 00 	lea    rdi,[rip+0xdef]        # 2008 <_IO_stdin_used+0x8>
    1219:	e8 82 fe ff ff       	call   10a0 <puts@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:16
            break;
    121e:	eb 2a                	jmp    124a <fun1+0x61>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:18
            printf("靠站..\n");
    1220:	48 8d 3d ed 0d 00 00 	lea    rdi,[rip+0xded]        # 2014 <_IO_stdin_used+0x14>
    1227:	e8 74 fe ff ff       	call   10a0 <puts@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:19
            break;
    122c:	eb 1c                	jmp    124a <fun1+0x61>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:21
        	kill(c_pid,SIGUSR1);
    122e:	8b 05 e0 2d 00 00    	mov    eax,DWORD PTR [rip+0x2de0]        # 4014 <c_pid>
    1234:	be 0a 00 00 00       	mov    esi,0xa
    1239:	89 c7                	mov    edi,eax
    123b:	e8 80 fe ff ff       	call   10c0 <kill@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:22
        	exit(0);
    1240:	bf 00 00 00 00       	mov    edi,0x0
    1245:	e8 96 fe ff ff       	call   10e0 <exit@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:24
}
    124a:	90                   	nop
    124b:	c9                   	leave  
    124c:	c3                   	ret    

000000000000124d <func2>:
func2():
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:27
//子进程信号处理
void func2(int sig)
{
    124d:	f3 0f 1e fa          	endbr64 
    1251:	55                   	push   rbp
    1252:	48 89 e5             	mov    rbp,rsp
    1255:	48 83 ec 10          	sub    rsp,0x10
    1259:	89 7d fc             	mov    DWORD PTR [rbp-0x4],edi
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:28
    switch(sig)
    125c:	83 7d fc 0a          	cmp    DWORD PTR [rbp-0x4],0xa
    1260:	74 3a                	je     129c <func2+0x4f>
    1262:	83 7d fc 0a          	cmp    DWORD PTR [rbp-0x4],0xa
    1266:	7f 4a                	jg     12b2 <func2+0x65>
    1268:	83 7d fc 02          	cmp    DWORD PTR [rbp-0x4],0x2
    126c:	74 08                	je     1276 <func2+0x29>
    126e:	83 7d fc 03          	cmp    DWORD PTR [rbp-0x4],0x3
    1272:	74 15                	je     1289 <func2+0x3c>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:40
            break;
        case SIGUSR1:
        	printf("终点站到了，请所有乘客下车！\n");
        	exit(0);
    }
}
    1274:	eb 3c                	jmp    12b2 <func2+0x65>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:31
            kill(getppid(),SIGUSR1);
    1276:	e8 55 fe ff ff       	call   10d0 <getppid@plt>
    127b:	be 0a 00 00 00       	mov    esi,0xa
    1280:	89 c7                	mov    edi,eax
    1282:	e8 39 fe ff ff       	call   10c0 <kill@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:32
            break;
    1287:	eb 29                	jmp    12b2 <func2+0x65>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:34
            kill(getppid(),SIGUSR2);
    1289:	e8 42 fe ff ff       	call   10d0 <getppid@plt>
    128e:	be 0c 00 00 00       	mov    esi,0xc
    1293:	89 c7                	mov    edi,eax
    1295:	e8 26 fe ff ff       	call   10c0 <kill@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:35
            break;
    129a:	eb 16                	jmp    12b2 <func2+0x65>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:37
        	printf("终点站到了，请所有乘客下车！\n");
    129c:	48 8d 3d 7d 0d 00 00 	lea    rdi,[rip+0xd7d]        # 2020 <_IO_stdin_used+0x20>
    12a3:	e8 f8 fd ff ff       	call   10a0 <puts@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:38
        	exit(0);
    12a8:	bf 00 00 00 00       	mov    edi,0x0
    12ad:	e8 2e fe ff ff       	call   10e0 <exit@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:40
}
    12b2:	90                   	nop
    12b3:	c9                   	leave  
    12b4:	c3                   	ret    

00000000000012b5 <main>:
main():
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:42
int main()
{
    12b5:	f3 0f 1e fa          	endbr64 
    12b9:	55                   	push   rbp
    12ba:	48 89 e5             	mov    rbp,rsp
    12bd:	48 83 ec 10          	sub    rsp,0x10
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:43
    pid_t pid = fork();
    12c1:	e8 2a fe ff ff       	call   10f0 <fork@plt>
    12c6:	89 45 fc             	mov    DWORD PTR [rbp-0x4],eax
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:44
    if(pid > 0)//父进程
    12c9:	83 7d fc 00          	cmp    DWORD PTR [rbp-0x4],0x0
    12cd:	7e 5c                	jle    132b <main+0x76>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:46
    {
    	c_pid=pid;
    12cf:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    12d2:	89 05 3c 2d 00 00    	mov    DWORD PTR [rip+0x2d3c],eax        # 4014 <c_pid>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:49 (discriminator 1)
    	while(1)
    	{
    		signal(SIGINT,SIG_IGN);
    12d8:	be 01 00 00 00       	mov    esi,0x1
    12dd:	bf 02 00 00 00       	mov    edi,0x2
    12e2:	e8 c9 fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:50 (discriminator 1)
	        signal(SIGQUIT,SIG_IGN);
    12e7:	be 01 00 00 00       	mov    esi,0x1
    12ec:	bf 03 00 00 00       	mov    edi,0x3
    12f1:	e8 ba fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:51 (discriminator 1)
	        signal(SIGTSTP,fun1);
    12f6:	48 8d 35 ec fe ff ff 	lea    rsi,[rip+0xfffffffffffffeec]        # 11e9 <fun1>
    12fd:	bf 14 00 00 00       	mov    edi,0x14
    1302:	e8 a9 fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:52 (discriminator 1)
	        signal(SIGUSR1,fun1);
    1307:	48 8d 35 db fe ff ff 	lea    rsi,[rip+0xfffffffffffffedb]        # 11e9 <fun1>
    130e:	bf 0a 00 00 00       	mov    edi,0xa
    1313:	e8 98 fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:53 (discriminator 1)
	        signal(SIGUSR2,fun1);
    1318:	48 8d 35 ca fe ff ff 	lea    rsi,[rip+0xfffffffffffffeca]        # 11e9 <fun1>
    131f:	bf 0c 00 00 00       	mov    edi,0xc
    1324:	e8 87 fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:49 (discriminator 1)
    		signal(SIGINT,SIG_IGN);
    1329:	eb ad                	jmp    12d8 <main+0x23>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:57
    	}
	        
    }
    else if(pid==0)
    132b:	83 7d fc 00          	cmp    DWORD PTR [rbp-0x4],0x0
    132f:	75 44                	jne    1375 <main+0xc0>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:61 (discriminator 1)
    {
    	while(1)
    	{
    		signal(SIGINT,func2);
    1331:	48 8d 35 15 ff ff ff 	lea    rsi,[rip+0xffffffffffffff15]        # 124d <func2>
    1338:	bf 02 00 00 00       	mov    edi,0x2
    133d:	e8 6e fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:62 (discriminator 1)
        signal(SIGQUIT,func2);
    1342:	48 8d 35 04 ff ff ff 	lea    rsi,[rip+0xffffffffffffff04]        # 124d <func2>
    1349:	bf 03 00 00 00       	mov    edi,0x3
    134e:	e8 5d fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:63 (discriminator 1)
        signal(SIGTSTP,SIG_IGN);
    1353:	be 01 00 00 00       	mov    esi,0x1
    1358:	bf 14 00 00 00       	mov    edi,0x14
    135d:	e8 4e fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:64 (discriminator 1)
        signal(SIGUSR1,func2);
    1362:	48 8d 35 e4 fe ff ff 	lea    rsi,[rip+0xfffffffffffffee4]        # 124d <func2>
    1369:	bf 0a 00 00 00       	mov    edi,0xa
    136e:	e8 3d fd ff ff       	call   10b0 <signal@plt>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:61 (discriminator 1)
    		signal(SIGINT,func2);
    1373:	eb bc                	jmp    1331 <main+0x7c>
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:68
    	}
        
    }
    return 0;
    1375:	b8 00 00 00 00       	mov    eax,0x0
/home/gaifw/桌面/GaiFW_C/Proc/03/siji.c:69
}
    137a:	c9                   	leave  
    137b:	c3                   	ret    
    137c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000001380 <__libc_csu_init>:
__libc_csu_init():
    1380:	f3 0f 1e fa          	endbr64 
    1384:	41 57                	push   r15
    1386:	4c 8d 3d 03 2a 00 00 	lea    r15,[rip+0x2a03]        # 3d90 <__frame_dummy_init_array_entry>
    138d:	41 56                	push   r14
    138f:	49 89 d6             	mov    r14,rdx
    1392:	41 55                	push   r13
    1394:	49 89 f5             	mov    r13,rsi
    1397:	41 54                	push   r12
    1399:	41 89 fc             	mov    r12d,edi
    139c:	55                   	push   rbp
    139d:	48 8d 2d f4 29 00 00 	lea    rbp,[rip+0x29f4]        # 3d98 <__do_global_dtors_aux_fini_array_entry>
    13a4:	53                   	push   rbx
    13a5:	4c 29 fd             	sub    rbp,r15
    13a8:	48 83 ec 08          	sub    rsp,0x8
    13ac:	e8 4f fc ff ff       	call   1000 <_init>
    13b1:	48 c1 fd 03          	sar    rbp,0x3
    13b5:	74 1f                	je     13d6 <__libc_csu_init+0x56>
    13b7:	31 db                	xor    ebx,ebx
    13b9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    13c0:	4c 89 f2             	mov    rdx,r14
    13c3:	4c 89 ee             	mov    rsi,r13
    13c6:	44 89 e7             	mov    edi,r12d
    13c9:	41 ff 14 df          	call   QWORD PTR [r15+rbx*8]
    13cd:	48 83 c3 01          	add    rbx,0x1
    13d1:	48 39 dd             	cmp    rbp,rbx
    13d4:	75 ea                	jne    13c0 <__libc_csu_init+0x40>
    13d6:	48 83 c4 08          	add    rsp,0x8
    13da:	5b                   	pop    rbx
    13db:	5d                   	pop    rbp
    13dc:	41 5c                	pop    r12
    13de:	41 5d                	pop    r13
    13e0:	41 5e                	pop    r14
    13e2:	41 5f                	pop    r15
    13e4:	c3                   	ret    
    13e5:	66 66 2e 0f 1f 84 00 	data16 nop WORD PTR cs:[rax+rax*1+0x0]
    13ec:	00 00 00 00 

00000000000013f0 <__libc_csu_fini>:
__libc_csu_fini():
    13f0:	f3 0f 1e fa          	endbr64 
    13f4:	c3                   	ret    

Disassembly of section .fini:

00000000000013f8 <_fini>:
_fini():
    13f8:	f3 0f 1e fa          	endbr64 
    13fc:	48 83 ec 08          	sub    rsp,0x8
    1400:	48 83 c4 08          	add    rsp,0x8
    1404:	c3                   	ret    
