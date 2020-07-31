#include <stdio.h>
#include <string.h>
void find_num(char *a)
{
	int n=0;
	for(int i=0;i<strlen(a);i++)
	{
		if('l'==a[i])
		{
			++n;
		}
	}
	printf("次数是%d\n",n);
}

int main()
{
	char a[]="hellllllllo";

	find_num(a);

	return 0;
}
