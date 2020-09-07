#include <stdio.h>

int main()
{
	char *a = "hello world";
	char b[20] = "hel";
	char *c=b;
	int i=0;
	while(*c++=*a++)
	{
		++i;
	}
	printf("%s\n",b);
	printf("%d ",i);
	return 0;


}
