#include<stdio.h>


#define CO 3.34e25
int main()
{
	int a;
	printf("你的水多少升---");
	scanf("%d",&a);
	printf("\033[1;32;43m%e\033[0m",a*CO);

	return 0;


}
