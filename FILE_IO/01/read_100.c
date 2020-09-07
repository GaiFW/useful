#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<string.h>
 #include<unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	int fd = open("1.txt", O_RDONLY, 0777);
	if (fd == -1)
	{
		perror("1.txt");
		return -1;
	}
	lseek(fd, 100, SEEK_SET);
	char buf[100] = {0};
	int ret = read(fd, &buf, 10);
	if (ret == -1)
	{
		perror("read");
		return -1;
	}
	buf[10] = 0;
	printf("%s", buf);

	close(fd);
	return 0;
}