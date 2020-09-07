#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
    pid_t p = fork();
    if(p==0)
    {
    	/*new */
        printf("i am child:%d\n",getpid());
        printf("father is :%d\n",getppid());

        int a=0;
        scanf("%d",&a);
        switch(a)
        {
            
            case 1:
                execl("1","1",NULL);
                perror("1");
                break;
            case 2:
                execl("2","2",NULL);
                perror("2");
                break;
            case 12:
                execl("3","3",NULL);
                perror("3");
                break;
        }
    }
    else if(p>0)
    {
        printf("i am father:%d",getpid());
        sleep(1);
    }
    else
        perror("fork");
    return 0;
}

