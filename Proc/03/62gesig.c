#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <errno.h>
void func(int sig)
{
    printf("收到%d信号\n",sig);
}
int main()
{
    pid_t pid = fork();
    if(pid>0)
    {
        sleep(1);
        for(int i=1;i<=64;i++)
        {
            /* if(i!=9 && i!=19 && i!=32 && i!=33) */
            if(i!=32 && i!= 33)
            {
                kill(pid,i);
                /* printf("%d:%d\n",pid,i); */
            }
        }
    }
    else if(pid == 0 )
    {
        for(int i=1;i<=64;i++)
        {
            /* if(i!=9 && i!=19 && i!=32 && i!=33) */
            if(i!=32 && i!= 33)
            {
               void(*a)(int sig)= signal(i,func);
               printf("%p\n",a);
               /* if(a==(void*)-1) */
               if(a==MAP_FAILED)
               {
                printf("%d\n",i);
               }

            }
        }
        sigset_t mysigset;
        sigemptyset(&mysigset);
        /* sigfillset(&mysigset); */
        for(int i=1;i<=64;i++)
        {
            if(i!=32 && i!= 33)
            /* if(i!=9 && i!=19 && i!=32 && i!=33) */
            {
                sigaddset(&mysigset,i);
            }
        }
        sigprocmask(SIG_BLOCK,&mysigset,NULL);
        sleep(2);
        sigprocmask(SIG_UNBLOCK,&mysigset,NULL);


    }
    return 0;
}

