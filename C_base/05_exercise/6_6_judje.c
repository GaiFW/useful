// 设计一个函数，传入一个数组和一个整型变量，判断这个整数的值是不是数组中某个元素，如果是返回0，如果不是返回-1，并在主函数中打印出来
#include <stdio.h>

int judge(int a[],int b)
{
	for(int i=0;i<sizeof(a)/4;i++)
	{
		if(a[i]==b)
		{
			return 0;
		}
	}
	return -1;
}

int main()
{
	int arr[3]={1,2,3};
	int b=2;

	printf("%d\n",judge(arr,b));

	return 0;
}
