#include <stdio.h>

int main()
{
	char c_arr[5]={0};

	printf("input your number<0,255>\n");
	for(int i=0;i<5;i++)
	{
		printf("%d:",i);
		scanf("%d",&c_arr[i]);
		printf("\n");
	}

	int max=0;
	int min=0;	
	for( int j=0;j<5;j++)
	{
		max=(max<c_arr[j])?c_arr[j]:max;
		min=(min>c_arr[j])?c_arr[j]:min;
	}

	printf("the max:%d,the min:%d\n",max,min);

	return 0;
	
}
