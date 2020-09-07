#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        printf("1\n");
        pause();
        break;
    }
    printf("over");
    return 0;
}

