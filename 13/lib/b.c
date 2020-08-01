#include"main.h"

void maxGrade(student a[],int b)
{
	float max1=0;
	char max_name[32]="";
	for(int i=0; i<b; i++)
	{
		float max=0;
		for(int j=0; j<3; j++)
		{
			max += a[i].grade[j];
		}
		if(max1 < max)
		{
			max1 = max;
			strcpy(max_name,a[i].name);
		}
	}
	printf("得最高总成绩的%.2f的人是%s\n",max1,max_name);
}
