#include <stdio.h>
#include <string.h>

int main()
{
	char a[20]={};

	printf("input your string:");
	gets(a);

	char *p = a+1;
	while(*p != '\0')
	{
		if(*p ==*(p-1))
		{
			strcpy(p-1,p);
			
		}
		else
		{
			p++;
		}
	}
	puts(a);

	return 0;
}
