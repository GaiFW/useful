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

void leapYear(int year)
{
	if(year%4==0)
	{
		if(year%400==0)
		{
			printf("this is 世纪闰年\n");
		}
		else if(year%100==0)
		{
			printf("不是闰年\n");
		}
		else
			printf("普通闰年\n");
	}
	else
	{
			printf("不是闰年\n");
	}
}

int main()
{
	int m_year;
	printf("input your year:");
	scanf("%d",&m_year);

	leapYear(m_year);

	return 0;
}
