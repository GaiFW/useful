#include <stdio.h>

int main()
{
	int stu_gra[4][3]={};
	for(int i=0;i<4;i++)
	{
		printf("NO.%d student:\n",i+1);
		for(int j=0;j<3;j++)
		{
		if(j==0)
		{
			printf("Chinese:");
			scanf("%d",&stu_gra[i][j]);
		}
		else if(j==1)
		{
			printf("Math:");
			scanf("%d",&stu_gra[i][j]);
		}
		else if(j==2)
		{
			printf("English:");
			scanf("%d",&stu_gra[i][j]);
		}
		}

	}

	int* p = &stu_gra[0][0];
	for(int i=0;i<12;i++)
	{
		if(*(p+i)<60)
		{
			printf("NO.%d个学生成绩有不合格\n",(i/3)+1);
			for(int j=0;j<3;j++)
			{
			if(j==0)
			{
				printf("Chinese:%d\n",*(p+(i/3)*3+j));
			}
			else if(j==1)
			{
				printf("Math:%d\n",*(p+(i/3)*3+j));
			}
			else if(j==2)
			{
				printf("English:%d\n",*(p+(i/3)*3+j));
			}
			}
			i=(i/3*3)+2;
		}
	}
		return 0;
}
