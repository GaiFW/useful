#include <stdio.h>

int main()
{
	float s[4][3]={0};
	for(int i=0;i<4;i++)
	{
		printf("第%d个学生：\n",i+1);

		for(int j=0;j<3;j++)
		{
			if(j==0)
			{
				printf("input Chinese Grade:");
			}
			else if(j==1)
			{
				printf("input Math Grade:");
			}
			else 
				printf("input English Grade");
			scanf("%f",&s[i][j]);

		}
	}
	for(int i=0;i<4;i++)
	{
		float sum_s=0;
		for(int j=0;j<3;j++)
		{
			sum_s += s[i][j];
		}
		printf("第%d个学生的总成绩是%.1f,平均成绩是%.1f\n",i+1,sum_s,sum_s/3);
	}

	return 0;
}
