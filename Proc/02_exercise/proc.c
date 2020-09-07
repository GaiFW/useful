#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
int main()
{
    pid_t pid;
    for(int i=0;i<5;i++)
    {
        pid_t p = fork();
        if(p==0)
        {
            pid=getpid();
            break;
        }
    }
    if(pid==0)
    {
        printf("%d\n",getpid());
    }
    else if(pid>0)
    {
        while(wait(NULL)!=-1);
    }
    return 0;
}

