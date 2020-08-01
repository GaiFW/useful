#include <stdio.h>

void f(int a[],int b)
{

	for(int i=0;i<b;i++)
	{
		printf("%d ",a[i]);
	}
	a[1]=5;
}

int main()
{
	int arr[] ={1,2,3};

	f(arr,3);
	printf("%d-------------------------",arr[1]);

	printf("sizeof(arr):%u\n",sizeof(arr));

	return 0;
	


}
