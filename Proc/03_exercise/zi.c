#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/time.h>
void func(int num)
{
    kill(getppid(),10);
    kill(getppid(),12);
}
int main()
{
    struct sigaction act;
    act.sa_handler = func;
    act.sa_flags=0;
    sigemptyset(&(act.sa_mask));
    sigaction(SIGALRM,&act,NULL);
    struct itimerval newa;
    newa.it_value.tv_sec=3;
    newa.it_value.tv_usec=3;
    newa.it_interval.tv_sec=2;
    newa.it_interval.tv_usec=0;
    
    setitimer(ITIMER_REAL,&newa,NULL);
    while(1);
    return 0;
}

