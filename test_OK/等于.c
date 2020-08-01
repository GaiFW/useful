#include <stdio.h>

int main()
{
	int m=0;
	int n=0;
	int a=0;

	a+=a-=(m=4)*(n=3);

	printf("%d",a);

	return 0;
}
