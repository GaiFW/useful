#include<stdio.h>

int main()
{
	int n=0;
	printf("input your number:");
	scanf("%d",&n);

	if(n==0)
	{
		printf("the result is 0\n");
	}
	else if(n==1)
	{
		printf("the result is 1\n");
	}
	else if(n%2==1)
	{
		double sum=1.0;
		for(int i=3;i<=n;i+=2)
		{
			sum+=1.0/(i*i-i);
		}
		printf("the result is %lf",sum);
	}
	else if(n%2==0)
	{
		double sum=3.0;
		for(int i=2;i<=n;i+=2)
		{
			sum-=(2*i-1.0)/(i*i-i);
		}
		printf("the result is %lf",sum);

	}
	return 0;
}
