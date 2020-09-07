#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int i=0;
    printf("i am father:%d\n",getpid());
    pid_t pid;
    while(++i!=5)
    {
        pid = fork();
        if(pid==0)
        {
        printf("the %d 个",i);
            break;
        }
    }
    if(pid==0)
    {
        printf("my pid:%d,my father :%d\n",getpid(),getppid());
        sleep(10);
    }
    else if(pid>0)
    {
        int s=0;
        while(1)
        {
            int n = wait(&s);
            if(WIFEXITED(s))
            {
                printf("被%d干掉？\n",WEXITSTATUS(s));
            }   
            if( WIFSIGNALED(s))
            {
                printf("被%d干掉？\n",WTERMSIG(s));
            }
            if(n == -1)
            {
                printf("no children");
                break;
            }
        }
    }
}
