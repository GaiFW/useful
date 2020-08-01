#include <stdio.h>

	const int b=10;
int main()
{
//	const int a=10;

//	const int *p=&a;
	const int *p=&b;

	int *p6 = &b;
	*p6 = 20;

	printf("%d",b);
//	int * const p1 = &a;
//	int * const p2 = &b;
	return 0;

}
