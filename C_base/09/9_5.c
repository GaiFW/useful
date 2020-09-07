#include<stdio.h>

struct People
{
	char name[20];
	int num;
	char gender;//f表示女， m表示男
	char profession;//老师 t，学生 s
	union
	{
		char course[20];//科目
		float score;//成绩
	}cs;
};


int main()
{
	struct People p1;
	struct People p2;
	struct People p3;
	struct People p4;
	struct People p5;
	struct People p6;
	printf("input name num gender pro union");
	for(int i=0;i<6;i++)
	{
		scanf("%s %d %c %c");
		if(p1.profession == 't')
		{
		
		}
		else 
		{
			
		}
	}
}
