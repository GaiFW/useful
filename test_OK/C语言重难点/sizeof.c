
#include <stdio.h>
int main()
{
	char a[]="hello\0world";
	char b[5]="hellow";

	printf("a:%d\n",sizeof(a));
	printf("b:%d\n",sizeof(b));
	return 0;
}
