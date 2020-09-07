#include <stdio.h>
#include <string.h>

int main()
{
	char a[100]={};
	char b[100]={};

	printf("input your a:");
	scanf("%s",a);
	printf("input your b:");
	scanf("%s",b);
	int la=strlen(a);
	int lb=strlen(b);
	strcat(a,b);
	strcpy(b,a);
	strncpy(a,b+la,lb);
	a[lb]=0;
	b[la]=0;
	printf("a:%s\n",a);
	printf("b:%s\n",b);
	
	return 0;
}
