#include<stdio.h>

void test()
{
	static int b;
	static int a;
	printf("b:%p\n",&b);
	printf("\n");
	printf("%p\n",&a);
	printf("%d\n",a++);
	printf("%p\n",&a);
	printf("\n");
}

int main()
{
	test();
	test();
	test();
	return 0;
}
