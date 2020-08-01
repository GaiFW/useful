#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
	int week;

};

int main()
{
	struct Date d1={2020,6,5,4};
	struct Date d2={2020,6,7,6};

	struct Date d3  = d2-d1;

	printf("%d %d %d %d",d1.year,d1.month,d1.day,d1.week);


	return 0;
}
