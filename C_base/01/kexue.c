#include<stdio.h>

int main()
{
	int a;
	printf("输入你的数");
	scanf("%d",&a);

	printf("\033[4;32;40m%d\033[0m\n",a);
	printf("\033[4;32;40m%o\033[0m\n",a);
	printf("\033[4;32;40m%x\033[0m\n",a);
	printf("\033[4;32;40m%e\033[0m\n",(float)a);

	return 0;
}
