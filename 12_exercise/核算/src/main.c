#include "main.h"

int main()
{
	struct Stu *arr = (struct Stu*)malloc(sizeof(struct Stu));
	if(arr==NULL)
	{
		printf("error\n");
	}
	int len=0;
	printf("数组长度：");
	scanf("%d",&len);

	arr = realloc(arr,sizeof(struct Stu)*len);
	if(arr==NULL)
	{
		printf("error\n");
	}
	memset(arr,0,sizeof(struct Stu)*len);

	//输入信息
	for(int i=0;i<len;i++)
	{
		printf("%d个学生的信息：name numi:",i+1);
		scanf("%s %d",arr[i].name,&arr[i].num);
		printf("语 数 外：\n");
		for(int j=0;j<3;j++)
		{
			scanf("%f",&arr[i].grade[j]);
		}
	}
	
	//显示总成绩
	for(int i=0;i<len;i++)
	{
		printf("%s的总成绩是：%.2f\n",arr[i].name,sumGrade(arr[i]));
	}

	//显示语文最高成绩学生学号
	printf("语文成绩最高的学生学号是：%d\n",yuMax(arr,len));
	//显示数学最高成绩学生学号
	printf("数学成绩最高的学生学号是：%d\n",shuMax(arr,len));
	//显示英语最高成绩学生学号
	printf("英语成绩最高的学生学号是：%d\n",waiMax(arr,len));
	//显示总分最高成绩学生学号
	printf("总分成绩最高的学生学号是：%d\n",sumMax(arr,len));

	free(arr);
	arr = NULL;
	return 0;
}
