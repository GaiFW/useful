#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <string.h>

int log_fd;
void myalarm(int num)
{
    char  buf[1024]="";
    sprintf(buf,"%d,to,%d,at,time\n",getpid(),getppid());
    write(log_fd,buf,strlen(buf)+1);
    /* printf("oooo\n"); */
}
int main()
{
    struct sigaction act;
    act.sa_handler = myalarm;
    act.sa_flags=0;
    sigemptyset(&(act.sa_mask));
    sigaction(SIGALRM,&act,NULL);

    log_fd = open("mylog",O_WRONLY);
    if(log_fd==-1)
    {
        perror("open log\n");
        return 0;
    }

    struct itimerval newi;
    newi.it_interval.tv_sec = 2;
    newi.it_interval.tv_usec = 0;
    newi.it_value.tv_sec=5;
    newi.it_value.tv_usec=0;
    setitimer(ITIMER_REAL,&newi,NULL);
    while(1);
    return 0;
}

