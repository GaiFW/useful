#include <stdio.h>

	
int main()
{
//	const int a=10;

//	const int *p=&a;
	const int b=10;
	int * const p=&b;
	*p = 20;

	printf("%d",b);
//	int * const p1 = &a;
//	int * const p2 = &b;
	return 0;

}
