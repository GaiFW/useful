#include <stdio.h>

int n=0;
int sum=0;
int len_arr=7;

int Sum(int n,int a[])
{
	int sum_every=0;
	for(int i=n;i<len_arr;i++)
	{
		sum_every+=a[i];
		sum=sum>sum_every?sum:sum_every;
	}
	n++;
	if(n==(len_arr-2))
	{
		return sum;
	}
	Sum(n,a);
}
int main()
{
	int a[7]={};
	printf("input your arrays number:\n");
	for(int i=0;i<len_arr;i++)
	{
		printf("%d :",i+1);
		scanf("%d",&a[i]);
	}

	printf("最大和是%d\n",Sum(n,a));
	return 0;
}
