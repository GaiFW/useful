#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
void core(int num)
{
    wait(NULL);
}

int main()
{
    pid_t pid = fork();
    if(pid>0)
    {
        struct sigaction act;
        act.sa_handler = core;
        act.sa_flags=0;
        sigemptyset(&(act.sa_mask));
        /* sigaction(SIGSEGV,&act,NULL); */
        sigaction(17,&act,NULL);
    }
    else if(pid==0)
    {
        char* buf;
        strcpy(buf,"hhh");
    }
    return 0;
}

