#include <stdio.h>

int main()
{
	char sum_arr[10]={};
	printf("inout your number \n");

	for(int i=0;i<10;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&sum_arr[i]);
	}
	int sum;
	for(int i=0;i<10;i++)
	{
		sum+=sum_arr[i];

	}
		printf("结果是%d\n",sum);


	return 0;
}
