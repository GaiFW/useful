#include<stdio.h>

int main()
{
	int a;
	int b=0;
	printf("输入你的数：");
	scanf("%d",&a);
	while(a!=1)
	{
	if(a%2==0)
	{
		a=a/2;
		b++;
		printf("%d ",a);
	}
	else if(a%2==1)
	{
		a=3*a+1;
		b++;
		printf("%d ",a);
	
	}
	
	}

	return 0;
}
