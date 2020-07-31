#include "main.h"
float sumGrade(struct Stu a)
{
	float sum=0;
	for(int i=0;i<3;i++)
	{
		sum+=a.grade[i];
	}	

	return sum;
}


