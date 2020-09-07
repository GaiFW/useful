#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	int pipe_arr[2];
	int mypipw = pipe(pipe_arr);

	pid_t thepid = fork();
	int ret=0;
	int sum=0;
	char buf[1020]="";
	for(int i=0;i<1020;i++)
	{
		buf[i]=1;
	}
	if(thepid==0)
	{
		while(1)
		{
			ret = write(pipe_arr[1],buf,sizeof(buf));
			sum += ret;
			printf("%d\n",sum );
			if(ret==0)
			{
				break;
			}
		}
	}
	if(thepid>0)
	{
		wait(NULL);
		printf("%d",sum);
	}
	return 0;
}