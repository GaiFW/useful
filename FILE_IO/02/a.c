#include <sys/types.h>
#include <sys/stat.h>
#include<unistd.h>
#include <stdio.h>
#include <sys/sysmacros.h>


 int main(int argc, char const *argv[])
{
	struct stat s;
	lstat("/dev/fb0",&s);
	printf("%u",minor(s.st_rdev));
	return 0;
}
