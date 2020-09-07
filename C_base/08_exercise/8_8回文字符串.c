#include<stdio.h>
#include <string.h>

int main()
{
	char a[20]={};

	printf("input you string:");
	gets(a);

	for(int i=0;i<=(strlen(a)-i-1);i++)
	{
		if(a[i]!=a[strlen(a)-1-i])
		{
			printf("不是\n");
			return 0;
		}
	}
	printf("是\n");


	return 0;
}
