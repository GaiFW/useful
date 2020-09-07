#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
    int i=3;
    while(i--)
    {
        pid_t p = fork();
        char* a = itoa(i);
        if(p > 0)
        {
            execl(a,a,NULL);
        }
    }
    int k;
    pid_t kk = waitpid()
    return 0;
}

