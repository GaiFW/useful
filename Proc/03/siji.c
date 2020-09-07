#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>

//父进程信号处理
pid_t c_pid;
void fun1(int sig)
{
    switch(sig)
    {
        case SIGUSR1:
            printf("开车了..\n");
            break;
        case SIGUSR2:
            printf("靠站..\n");
            break;
        case SIGTSTP:
        	kill(c_pid,SIGUSR1);
        	exit(0);
    }
}
//子进程信号处理
void func2(int sig)
{
    switch(sig)
    {
        case SIGINT:
            kill(getppid(),SIGUSR1);
            break;
        case SIGQUIT:
            kill(getppid(),SIGUSR2);
            break;
        case SIGUSR1:
        	printf("终点站到了，请所有乘客下车！\n");
        	exit(0);
    }
}
int main()
{
    pid_t pid = fork();
    if(pid > 0)//父进程
    {
    	c_pid=pid;
    	while(1)
    	{
    		signal(SIGINT,SIG_IGN);
	        signal(SIGQUIT,SIG_IGN);
	        signal(SIGTSTP,fun1);
	        signal(SIGUSR1,fun1);
	        signal(SIGUSR2,fun1);
    	}
	        
    }
    else if(pid==0)
    {
    	while(1)
    	{
    		signal(SIGINT,func2);
        signal(SIGQUIT,func2);
        signal(SIGTSTP,SIG_IGN);
        signal(SIGUSR1,func2);
    	}
        
    }
    return 0;
}

