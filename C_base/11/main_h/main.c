#include <stdio.h>
#include "main.h"

int main()
{
	struct Student st1,st2;

	printf("输入第一个学生的信息");
	scanf("%s %d %ld",st1.name,&st1.age,&st1.num);
	printf("输入他的成绩yu shu wai\n");
	for(int i=0;i<3;i++)
	{
		scanf("%f",&st1.grade[i]);
	}
	printf("输入第二个学生的信息");
	scanf("%s %d %ld",st2.name,&st2.age,&st2.num);
	printf("输入他的成绩yu shu wai\n");
	for(int i=0;i<3;i++)
	{
		scanf("%f",&st2.grade[i]);
	}
	//1的总成绩
	printf("1的总成绩%.2f\n",sum_g(st1));
	//1的平均成绩
	printf("1的平均成绩%.2f\n",avg_g(sum_g,st1));
	//2的总成绩
	printf("2的总成绩%.2f\n",sum_g(st2));
	
	//2的平均成绩
	printf("2的平均成绩%.2f\n",avg_g(sum_g,st2));
	//最高成绩
	max_g(st1,st2);

	return 0;

}
