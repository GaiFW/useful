#include <stdio.h>

int main()
{
	char a;
	printf("输入你的字符：----");
	scanf("%c",&a);
	printf("\033[1;31;40m%d\033[0m",a);	

	return 0;
}
