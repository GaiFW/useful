/*
 *File name: swap.c
 *
 *Author: GaiFW
 *
 *Description: 实现两个数的交换
 *
 *Function List: swap()
 *
 *Version: 1.0
 *
 *Date: 2020/7/17
 * */
#include<stdio.h>

void swap(int num1,int num2)
{
	/*
	 *Function: swap
	 *
	 *Description: 实现两个数的交换
	 *
	 *Calls: 
	 * 
	 *Called By: main()
	 *
	 *Input: num1, num2
	 *
	 *Output: printf()
	 *
	 *Return: void
	 * */
	int tmp = 0;
	tmp = num1;
	num1 = num2;
	num2 = tmp;

	printf("%d %d\n", num1, num2);
}

int main()
{
	int num_1, num_2;
	printf("input you number,space slipe----:");
	scanf("%d %d", &num_1, &num_2);
	swap(num_1, num_2);

	return 0;
}
