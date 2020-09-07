#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <error.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int read_write[2];
    int mypipe = pipe(read_write);
    if(mypipe==-1)
    {
        perror("mypipe");
        return 0;
    }
    struct stat mystat;
    int flag=0;
    pid_t thepid =fork();
    while(1)
    {
    if(thepid>0)
    {
        char buf[100];
        int fs = fstat(read_write[0],&mystat);
        
        if(flag==1)
        {
        flag=0;
        read(read_write[0],buf,sizeof(buf));
        fprintf(stdout,"父收到:%s",buf);
        }
        else
        {
        flag=1;
        fgets(buf,sizeof(buf),stdin);
        write(read_write[1],buf,sizeof(buf));
        }
    }
    else if(thepid==0)
    {
        char buf1[100];
        int fs = fstat(read_write[0],&mystat);
        
        if(flag==1)
        {
        flag=0;
        read(read_write[0],buf1,sizeof(buf1));
        fprintf(stdout,":子收到:%s",buf1);
        }
        else
        {
        flag=1;
        fgets(buf1,sizeof(buf1),stdin);
        write(read_write[1],buf1,sizeof(buf1));
        }
    }
    }
    return 0;
}

