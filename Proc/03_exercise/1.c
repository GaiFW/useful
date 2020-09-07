#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

void func(int num)
{
    if(num==10)
    {
        printf("shodao 10\n");
    }
    if(num == 12)
    {
        printf("shoudao 12\n");
    }
}
int main()
{

    pid_t pid=fork();
    if(pid>0)
    {
        struct sigaction act;
        act.sa_handler = func;
        act.sa_flags=0;
        sigemptyset(&(act.sa_mask));
        sigaction(10,&act,NULL);
        sigaction(12,&act,NULL);

        sigset_t myset;
        sigemptyset(&myset);
        sigaddset(&myset,10);
        sigaddset(&myset,12);
        sigaddset(&myset,18);
        sigaddset(&myset,19);
        if(sigismember(&myset,18))
        {
            printf("zai\n");
            sigdelset(&myset,18);
            if(sigismember(&myset,18))
            {
                printf("haizai\n");
            }
            else
                printf("buzaile\n");
        }

        sigprocmask(SIG_BLOCK,&myset,NULL);
        sleep(5);
        sigprocmask(SIG_UNBLOCK,&myset,NULL);
        while(1);
    }
    else if(pid == 0)
    {
        //每10秒给父进程发信号
        execl("zi","xx",NULL);
        perror("execl");
        exit(0);
    }
    return 0;
}

