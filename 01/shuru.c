#include<stdio.h>

int main()
{
	//第一种
	int a;
	char b;
	printf("输入两个字符");
	scanf("%d %c",&a,&b);
	getchar();
	printf("a:%d\nb:%c\n",a,b);
	//第二种
	//用第一种的时候注释第二种，反之亦然
//char a;
//char b;
//printf("输入两个字符");
//scanf("%c",&a);
//scanf("%c",&b);
//printf("a:%c\nb:%c\n",a,b);

	return 0;

}
