#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int fd = open("myfifo",O_RDONLY);
    if(fd ==-1)
    {
        perror("opne ");
        return -1;
    }

    char buf[512];
    while(strncmp(buf,":quit",5)!=0)
    {
        bzero(buf,sizeof(buf));
       read(fd,buf,sizeof(buf));
       fprintf(stdout,"受到：%s\n",buf);
    }
    close(fd);
    return 0;
}

