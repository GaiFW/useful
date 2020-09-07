#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int rw[2];
    int n = pipe(rw);
    if(n==-1)
    {
        perror("pipe");
        return 0;
    }
    pid_t pid = fork();
    while(1)
    {
    if(pid==0)
    {
        sleep(1);
        char buf[1024];
        read(rw[0],buf,strlen(buf)+1);
        fprintf(stdout,"子get:%s",buf);
        bzero(buf,sizeof(buf));
        fgets(buf,sizeof(buf),stdin);
        write(rw[1],buf,strlen(buf)+1);

    }
    else if(pid > 0)
    {
        char buf[1024];
        fgets(buf,sizeof(buf),stdin);

        write(rw[1],buf,strlen(buf)+1);
        sleep(1);
        read(rw[0],buf,sizeof(buf));
        fprintf(stdout,"父get:%s",buf);
        bzero(buf,sizeof(buf));
    }   

    }
    return 0;
}

