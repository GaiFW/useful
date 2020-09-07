#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	if(access("myfifo",F_OK))
	{
		if(mkfifo("myfifo",0644))
		{
			perror("mkfifo");
			return -1;
		}
	}

	int fd = open("myfifo",O_RDONLY);
	if(fd ==-1)
	{
		perror("open ");
		return -1;
	}

	int ret = 0;
	int sum=0;
	char buf[1024];
	while(1)
	{
		sleep(3);
		ret = read(fd,buf,sizeof(buf));
		sum+=ret;
		printf("%d\n",sum);
		sleep(3);
	}
	close(fd);
	return 0;
}