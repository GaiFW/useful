#include <stdio.h>

int main()
{
	int a=(10,11);
	int b=12;
	int c=(a++,b+2);

	printf("a:%d \nb:%d \nc:%d\n",a,b,c);

	return 0;
}
