#include <stdio.h>
#include <unistd.h>
int main()
{
    
    printf("Hello i am 1:%d\n",getpid());
    printf("and my father is %d\n",getppid());
    return 0;
}

