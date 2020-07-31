#include "main.h"

void sumAndAvg(student a[],int b)
{
	for(int i=0; i<b; i++)
	{
		float sum=0;
		for(int j=0; j<3; j++)
		{
			sum+=a[i].grade[j];
		}
		printf("%s的总成绩是%.2f,平均成绩是%.2f\n",a[i].name,sum,sum/3);
	}
}


