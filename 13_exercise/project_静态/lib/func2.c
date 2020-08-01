#include"main.h"
int yuMax(struct Stu a[],int len)
{
	float max=0;
	int max_i=0;
	for(int i=0;i<len;i++)
	{
		if(max<a[i].grade[0])
		{
			max = a[i].grade[0];
			max_i = a[i].num;	
		}
	}
	return max_i;
}

int shuMax(struct Stu a[],int len)
{
	float max=0;
	int max_i=0;
	for(int i=0;i<len;i++)
	{
		if(max<a[i].grade[1])
		{
			max = a[i].grade[1];
			max_i = a[i].num;	
		}
	}
	return max_i;
}

int waiMax(struct Stu a[],int len)
{
	float max=0;
	int max_i=0;
	for(int i=0;i<len;i++)
	{
		if(max<a[i].grade[2])
		{
			max = a[i].grade[2];
			max_i = a[i].num;	
		}
	}
	return max_i;
}
int sumMax(struct Stu a[],int len)
{
	float max=0;
	int max_i=0;
	for(int i=0;i<len;i++)
	{
		if(max<(a[i].grade[0]+a[i].grade[1]+a[i].grade[2]))
		{
			max = a[i].grade[0]+a[i].grade[1]+a[i].grade[2];
			max_i = a[i].num;	
		}
	}
	return max_i;
}
