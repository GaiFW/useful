#include <stdio.h>

int main()
{
	int arr[4]={1,2,3};
	arr[4]=7;
	arr[5]=9;
	int a=10;
	printf("a的地址--%p,a[5]的地址%p\n",&a,&arr[5]);
	printf("%d\n",arr[5]);
	printf("%d\n",arr[6]);
	printf("%d\n",arr[7]);
	printf("%d\n",arr[8]);

	return 0;
}
