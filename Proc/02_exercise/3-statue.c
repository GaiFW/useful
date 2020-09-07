#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid ;
    int i=3;
    while(i--!=0)
    {
        pid = fork();
        if(pid==0)
        {
            if(i==2)
                execl("11","xx",NULL);
            else if(i==1)
                execl("22","x",NULL);
            else
                execl("33","x",NULL);
        }
    }
    while(1)
    {
        int s;
        int n = wait(&s);
        if(n==-1)
        {
            printf("no children\n");
        }
        if(WIFEXITED(s))
        {
            printf("died of %d\n",WEXITSTATUS(s));
        }
        if(WIFSIGNALED(s))
        {
            printf("died of %d\n",WTERMSIG(s));
        }
        if(WIFSTOPPED(s))
        {
            printf("died of %d\n",WSTOPSIG(s));
        }
    }
    return 0;
}

