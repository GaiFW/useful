#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys.types.h>

int main()
{
    if(access("myfifo",F_OK))
    {
        if(mkfifo("myfifo",0644))
        {
            perror("mkfifo");
            return -1;
        }
    }
    int fifo_fd = open("myfifo",O_RDONLY);
    if(fifo_fd==-1)
    {
        perror("open");
        return -1;
    }

    char buf[128];
    while(1)
    {
        bzero(buf,sizeof());
    }
}


