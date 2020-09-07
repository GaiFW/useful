#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    pid_t pid = fork();
    if(pid > 0)
    {
    printf("111");
    sleep(1);
        printf("waitting...");
        int n;
        /* pid_t id = wait(&n); */
        printf("OK---");
    }
    else if(pid== 0)
    {
        printf("i am son:%d\n",getpid());
        sleep(20);
    }
    return 0;
}

