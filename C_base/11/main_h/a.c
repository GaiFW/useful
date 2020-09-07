#include "main.h"

float sum_g(struct Student a)
{
	float sum=0;
	for(int i=0;i<3;i++)
	{
		sum+=a.grade[i];		
	}
	return sum;
}

float avg_g(float (*fa)(struct Student a),struct Student b)
{
	return fa(b)/3;
}
