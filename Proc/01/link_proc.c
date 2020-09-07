#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
    pid_t pid = fork();
    if(pid==0)
    {
        sleep(1);
        printf("i am child:myid:%d\n",getpid());
        printf("my father id:%d\n",getppid());
        pid = fork();
        if(pid == 0)
        {
            sleep(1);
            printf("i am child:myid:%d\n",getpid());
            printf("my father id:%d\n",getppid());
            pid = fork();
            if(pid==0)
            {
            sleep(1);
            printf("i am child:myid:%d\n",getpid());
            printf("my father id:%d\n",getppid());
            }
            else if(pid > 0)
            {
                printf("i am father:myid:%d\n",getpid());
            }
        }
        else if(pid > 0)
        {
            printf("i am father:myid:%d\n",getpid());
        }
    }
    else if(pid>0)
    {
        printf("i am father:myid:%d\n",getpid());
    }

    return 0;
}

