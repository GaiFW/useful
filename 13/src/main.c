//输入学生信息 
//显示总成绩和平均成绩 
//以及哪个学生成绩最高
//
#include "main.h"

int main()
{
	student *arr = (student*)malloc(sizeof(student));

	int len=0;
	printf("input 几个学生：");
	scanf("%d",&len);

	arr = realloc(arr,sizeof(student)*len);
	if(arr == NULL)
	{
		perror("arr");
		return 0;
	}

	printf("输入学生信息：\n");
	for(int i=0; i<len; i++)
	{
		printf("第%d个学生:name、age、num:\n",i+1);
		scanf("%s %d %d",(arr+i)->name,&(arr+i)->age,&(arr+i)->num);
		printf("输入该学生的期末成绩：语数外:\n");
		for(int j=0; j<3; j++)
		{
			scanf("%f",&(arr+i)->grade[j]);
		}
	}


	printf("显示学生的总成绩平均成绩：\n");
	sumAndAvg(arr,len);

	printf("最高成绩是：\n");
	maxGrade(arr,len);

	free(arr);
	arr=NULL;
	

}
