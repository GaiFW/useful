#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>


typedef struct
{
    int data;
    char name[21];
}mydata;

void func(int num)
{
    
}
int main()
{
    
    pid_t pid = fork();
    
    if(pid>0)
    {
        mydata data;
        data.data=21;
        strcpy(data.name,"lll");
        union sigval mysigval;
        mysigval.sival_ptr = &data;
        sigqueue(pid,SIGUSR1,mysigval);
    }
    else if(pid==0)
    {
        struct sigaction act;
        act.sa_sigaction = sac_func;
        act.sa_flags|=SA_SIGINGO;
        sigemptyset(&(act.sa_mask));
        sigaction(SIGUSR1,&act,NULL);

    }
    return 0;
}

