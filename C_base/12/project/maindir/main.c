#include "main.h"

int main()
{
	int a=10;
	int b=2;

	char a1[]="hello";
	char b1[]="world";

	printf("a+b:%d\n",add(a,b));
	printf("a-b:%d\n",sub(a,b));
	stringcat(a1,b1);


	return 0;
}
