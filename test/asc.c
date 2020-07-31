#include <stdio.h>

int main()
{
	char a[] = "\xhehe";

	printf("sizeof(a):%d\n",sizeof(a));
	printf("sizeof(a):%s\n",a);

	return 0;
}
