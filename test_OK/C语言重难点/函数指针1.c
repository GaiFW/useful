//函数指针的应用，函数指针将函数的入口地址通过放入指针变量，被另一个函数调用该指针，就相当于调用了该函数，然后用传入的指针解引用，就可以使用这个传入的函数的功能。
//
//函数指针 函数名子就是地址，指针变量 解不解引用 都可以用。
#include <stdio.h>

int add(int num1, int num2)
{
	return num1+num2;
}

int sub(int num1, int num2)
{
	return num1-num2;
}

int calculate(int (*fp)(int,int),int num1, int num2)
{
	return (*fp)(num1,num2);
}

int main()
{
	printf("3+5=%d\n",calculate(add,3,5));
	printf("3-5=%d\n",calculate(sub,3,5));

	return 0;
}
