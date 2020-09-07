#include <stdio.h>

int main()
{	
	int b=0x12345678;
	char *a=(char *)&b;
	
	printf("%0#x\n",a[0]);
	printf("%0#x\n",a[1]);
	printf("%0#x\n",a[2]);

	return 0;
}
