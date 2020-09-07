#include<stdio.h>

int accumulator(int n)
{
	int x=n;
	if(n==1)
	{
		return 1;
	}
	return x+accumulator(n-1);
}

int main()
{
	int num = 0;
	printf("input you number:");
	scanf("%d",&num);
	printf("the result is %d\n",accumulator(num));

	return 0;
}
