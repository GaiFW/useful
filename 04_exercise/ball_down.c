/***************************
 *File name:leap_year.c
 * 
 *Description:Implement leap year calculations
 *
 *Function List:
 *
 *Author:GaiFW
 *Date:2020/7/18
 *Version:1.0
 *
 ***************************/
#include <stdio.h>
int j=0;
//循环
void ballDown(float high, float length)
{
	for(int i=0;i<=9;i++)
	{
		length+=high*2;
		high/=2;
	}
	printf("路程是%f\n,高度是%f\n",length, high);

}
//递归
void ballDown2(float high, float length)
{
	++j;
	length+=high*2;
	high/=2;
	if(j==10)
	{
		printf("路程是%f\n,高度是%f\n",length, high);
	}
	ballDown2(high, length);
}
int main()
{
	float high=100;
	float length=-100;
	ballDown(high, length);
	ballDown2(high, length);

	return 0;
}
