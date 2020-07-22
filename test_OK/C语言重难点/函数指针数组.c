#include<stdio.h>

void function1(int );
void function2(int );
void function3(int );

int main()
{
	void(*f[3])(int)={function1,function2,function3};

	int choice;
	printf("输入一个数：");
	scanf("%d",&choice);

	*f[choice](3);

	printf("程序结束！\n");


	return 0;
}
	
