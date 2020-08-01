#include <stdio.h>

#define AGE(a, t) \
({\
	if(a <=2000)\
		{\
		 t = 5000;\
	}\
	else if ( a <=5000)\
		{\
			t = a*0.08+5000;\
	}\
		else if (a <=10000)\
			{\
				t = a*0.1+5000;\
		}\
			else\
				{\
				t = a*0.12+5000;\
			}\
})

// #define AGE(a, t) ((a<=2000)?(t=5000):(a>2000&&a<=5000)?\
// 					(t=a*0.08+5000):(a>5000&&a<=10000)?\
// 					(t=a*0.1+5000):(t=a*0.12+5000))

// #define AGE(a) ((a<=2000)?(5000):(a>2000&&a<=5000)?\
// 					(a*0.08+5000):(a>5000&&a<=10000)?\
// 					(a*0.1+5000):(a*0.12+5000))

struct Employee
{
	char name[20];
	int num;
	float saleroom;
	float mon;

};

// float func(struct Employee staff[], int i)
// {
// 	if(staff[i].saleroom <=2000)
// 	{
// 		return 5000;
// 	}
// 	else
// 		if (staff[i].saleroom > 2000 && staff[i].saleroom <=5000)
// 		{
// 			return staff[i].saleroom*0.08+5000;
// 		}
// 		else
// 			if (staff[i].saleroom > 5000 && staff[i].saleroom <=10000)
// 			{
// 				return staff[i].saleroom*0.1+5000;
// 			}
// 			else
// 				return staff[i].saleroom*0.12+5000;
// }

void display(struct Employee staff[])
{
	printf("姓名\t工号\t销售额\t工资\n");
	for(int i=0; i<6; i++)
	{
		printf("%s\t%d\t%.1f\t%.1f\n", staff[i].name, staff[i].num, staff[i].saleroom, staff[i].mon);
	}
}

int main(int argc, char const *argv[])
{
	struct Employee staff[6] = {
		{"谭孟锦", 1000, 12000},
		{"左鑫", 1001, 8000},
		{"邬昌银", 1002, 13000},
		{"蒋涛", 1003, 2000},
		{"张宴斌", 1004, 6500},
		{"蔡强", 1005, 1500}
	};

	display(staff);


	// for (int i = 0; i < 6; ++i)
	// {
	// 	staff[i].mon = func(staff, i);
	// }
	printf("\n");
	float t = 0;
	// for (int i = 0; i < 6; ++i)
	// {
	// 	AGE(staff[i].saleroom, t);
	// 	staff[i].mon = t;
	// }

	for (int i = 0; i < 6; ++i)
	{
		printf("%.2f\n", AGE(staff[i].saleroom));
		staff[i].mon = AGE(staff[i].saleroom);
		// AGE(staff[i].saleroom, t);
		// staff[i].mon = t;
	}	

	display(staff);

	float max;
	int xia = 0;
	max = staff[0].mon;
	for (int i = 1; i < 6; ++i)
	{
		if (max < staff[i].mon)
		{
			max = staff[i].mon;
			xia = i;
		}
	}	
	printf("%s是本月的销售冠军，当月奖金：%.2f元\n", staff[xia].name, max - 5000);

	return 0;
}