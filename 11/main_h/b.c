#include <stdio.h>
#include "main.h"
void max_g(struct Student a,struct Student b)
{
	float sum1=0;
	for(int i=0;i<3;i++)
	{
		sum1+=a.grade[i];		
	}
	float sum2=0;
	for(int i=0;i<3;i++)
	{
		sum2+=b.grade[i];		
	}

	if(sum1>sum2)
	{
		printf("%s高\n",a.name);
	}
	else if(sum1==sum2)
	{
		printf("一样高\n");
		
	}
	else
	{
		printf("%s高\n",b.name);
		
	}
}
