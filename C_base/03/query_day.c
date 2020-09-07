#include <stdio.h>

void queryDay(int a, int b)
{
	int day = 0;
	switch(a)
	{
		case 1:
			day = b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 2:
			day = 31+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 3:
			day = 31+29+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 4:
			day = 31+29+31+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 5:
			day = 31+29+31+30+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 6:
			day = 31+29+31+30+31+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 7:
			day = 31+29+31+30+31+30+b;
			printf("This is the %dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 8:
			day = 31*4+30*2+29+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 9:
			day = 31*5+30*2+29+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 10:
			day = 31*5+30*3+29+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 11:
			day = 31*6+30*3+29+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		case 12:
			day = 31*6+30*4+29+b;
			printf("This is the%dth day of 2020,and today is 星期%d\n",day,day%7+2);
			break;
		
	}
}

int main()
{
	int month;
	int day;
	char point;
	printf("input you month and you day :");
	scanf("%d%c%d",&month,&point,&day);
	queryDay(month,day);


	return  0;

}
