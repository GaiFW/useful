#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void func(int sig)
{
    printf("sd 普通\n");
}
void sac_func(int sig, siginfo_t* siginfo,void*ptr)
{
    if(siginfo->si_code==SI_QUEUE)
    {
        printf("data:%d\n",siginfo->si_int);
    }
}
int main()
{
    pid_t pid = fork();
    if(pid > 0)
    {sleep(1);
        union sigval value;
        value.sival_int = 100;
        sigqueue(pid,SIGUSR1,value);
        wait(NULL);
        printf("---\n");
        sleep(2);
        
    }
    else if(pid == 0)
    {
        struct sigaction act;
        act.sa_handler = func;
        act.sa_sigaction = sac_func;
        sigset_t myset;
        sigaddset(&myset,SIGUSR2);
        act.sa_mask=myset;
        act.sa_flags |= SA_SIGINFO;

        sigaction(SIGUSR1,&act,NULL);
        pause();

    }
    return 0;
}

