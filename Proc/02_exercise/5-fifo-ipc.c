#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    if(access("myfifo",F_OK))
    {
        if(mkfifo("myfifo",0644))
        {
            perror("mkfifo");
            return 0;
        }
    }


    int fd = open("myfifo",O_WRONLY);
    if(fd==-1)
    {
        perror("open myfifo");
        return -1;
    }

    char buf[516];
    while(strncmp(buf,":quit",5)!=0)
    {
        memset(buf,0,sizeof(buf));
        fgets(buf,sizeof(buf),stdin);
        write(fd,buf,strlen(buf)+1);
    }
    close(fd);
    return 0;
}

