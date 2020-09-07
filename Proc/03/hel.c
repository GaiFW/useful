#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
void func(int num)
{
    int n;
    int ret;
    while(1)
    {
        ret = waitpid(-1,&n,WNOHANG);
        if(ret > 0)
        {
            printf("回收了%d\n",ret);
        }
        else if(ret==0)
        {
            printf("本次接受信号，处理完毕，还没死完\n");
            break;
        }
        else if(ret == -1)
        {
            printf("siwanle\n");
            break;
        }
    }
}
int main()
{
    pid_t pid;
        struct sigaction act;
        act.sa_handler = func;
        act.sa_flags=0;
        sigemptyset(&(act.sa_mask));
        sigaction(SIGCHLD,&act,NULL);
        printf("注册好了\n");
    for(int i=0;i<20;i++)
    {
        pid = fork();
        if(pid==0)
        {
            break;
        }
    }
    if(pid>0)
    {
    printf("活完了\n");
    wait(NULL);
    }
    else if(pid ==0)
    {
            printf("%d 活了\n",getpid());
    }
    return 0;
}

