#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int i=5;
    pid_t pid;
    while(i--!=0)
    {
        pid = fork();
        if(pid==0)
        {
            printf("mypid=%d,myfather=%d\n",getpid(),getppid());
        }
        else if(pid > 0)
        {
            sleep(1);
            printf("i am father :%d\n",getpid());
            break;
        }
    }
    return 0;
}
