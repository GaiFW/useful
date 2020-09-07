#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/time.h>
#include <string.h>

int main()
{
    if(access("mylog",F_OK))
    {
        if(mkfifo("mylog",0644))
        {
            perror("mylog mkfifo\n");
            exit(0);
        }
    }
    pid_t pid;
    for(int i=1;i<5;++i)
    {
        pid = fork();
        if(pid==0)
        {
            char buf[32]="";
            sprintf(buf,"p%d",i);
            execl(buf,buf,NULL);
            perror("execl\n");
            exit(1);
        }
    }

    int log_fd = open("mylog",O_RDONLY);
    FILE* a_fp = fopen("a.txt","w+");
    if(log_fd==-1||a_fp==NULL)
    {
        perror("open mylog or a\n");
        return 0;
    }

    while(1)
    {
        char buf[1024];
        memset(buf,0,1024);

        int ret=0;
        ret = read(log_fd,buf,sizeof(buf));
        if(read==0)
        {
            printf("对方关了\n");
        }
        fputs(buf,a_fp);
        fwrite(buf,sizeof(buf),1,a_fp);
        fputs(buf,stdout);
    }
    close(log_fd);
    fclose(a_fp);
    return 0;
}

