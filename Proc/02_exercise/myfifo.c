#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
	if(access("myfifo",F_OK))//0-exite 
	{
		if(mkfifo("myfifo",0644))
		{
			perror("mypipe");
			return 0;
		}
	}

	int fd = open("myfifo",O_WRONLY);
	if(fd == -1)
	{
		perror("open write");
		return -1;
	}
	char buf[1024]="";
	for(int i=0;i<1024;i++)
	{
		buf[i]=1;
	}
	printf("------------\n");
	int ret=0;
	int sum=0;
	while(1)
	{
		ret = write(fd,buf,sizeof(buf));
		sum +=ret;
		printf("%d",sum);
	}

	close(fd);
	return 0;

}