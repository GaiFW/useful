//分鱼问题（用递归实现）
#include <stdio.h>
int i=6;
int sum=0;

int fishProblem(int q)
{
	--i;
	if(q%4 != 0 || (q/4*5+1)==0)
	{
		i=6;
		sum=0;
		printf("\n");
		return 0;
	}
	if(i==1)
	{
		printf("\nthey got %d fish at least\n\n",q/4*5+1);
		return 0;
	}
	fishProblem(q/4*5+1);
}

int main()
{
	for(int j=1;i!=1;j++)
	{
		fishProblem(4*j);
	}
	return 0;
}