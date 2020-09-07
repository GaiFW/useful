#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define gongzi(a) gongzi1(a)

float gongzi1(float a)
{
	if(a<=2000)
	{
		return 0;
	}
	else if(a<=5000)
	{
		return a*0.08+5000;
	}
	else if(a<=10000)
	{
		return a*0.1+5000;
	}
	else 
	{
		return a*0.12+5000;
	}
}
int main()
{
	struct pe
	{
		char name[32];
		int num;
		float qian;
	};
	struct pe* arr = (struct pe *) malloc (sizeof(struct pe)*5);

	//p判断
	
	for(int i=0;i<5;i++)
	{
		printf("第%d个员工:",i+1);
		printf("name num qian\n");
		scanf("%s %d %f",arr[i].name,&arr[i].num,&arr[i].qian);
	}
	float max = 0;
	int max_i=0;
	for(int i=0;i<5;i++)
	{
		if(max<gongzi(arr[i].qian))
		{
			max_i=i;
			max = gongzi(arr[i].qian);
		}
		printf("%s 的工资是 %.2f\n",arr[i].name,gongzi(arr[i].qian));
	}
	printf("最高的是%s:%.2f\n",arr[max_i].name,max);
	printf("奖金是%.2f\n",max-5000);



	return 0;
	
	
	
}
