#include <stdio.h>

int n=0;
int sum=0;

int Sum(int n,int a[])
{
	int sum_every=0;
	for(int i=n;i<7;i++)
	{
		sum_every+=a[i];
		sum=sum>sum_every?sum:sum_every;
	}
	n++;
	if(n==5)
	{
		return sum;
	}
	Sum(n,a);
}
int main()
{
	int a[7]={1,2,3,4,5,6,7};

	printf("最大和是%d\n",Sum(n,a));
	return 0;
}
