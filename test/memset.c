#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char buf[32]="helloworld";

	printf("%s\n",buf);

	memset(buf,'a',32);
	printf("%s\n",buf);
	return 0;
}
