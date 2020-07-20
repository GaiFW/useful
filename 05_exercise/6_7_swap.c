// 设计一个函数，传入两个数组a和b，将两个数组的所有元素进行交换，在主函数中打印交换过后的两个数组所有元素

#include <stdio.h>

void swap(int a[],int b[])
{
	int temp=0;
	for(int i=0;i<6;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	for(int i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<6;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int b[]={9,8,7,6,9,0};
	swap(a,b);

	return 0;
}
