#include <stdio.h>

int main()
{
	int arr[10]={};

	printf("inout you number \n");
	for(int i=0;i<10;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&arr[i]);
	}

	int *p = arr;
	int max=0;
	int min=0;
	for(int i=0;i<10;i++)
	{
		max=max>*(p+i)?max:*(p+i);
		min=min<*(p+i)?min:*(p+i);
	}

	printf("max:%d,min:%d\n",max,min);
	return 0;

}
