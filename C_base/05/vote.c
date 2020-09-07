#include <stdio.h>

int main()
{
	int vote_arr[3]={};
	int n=0;
	printf("input your number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a=0;
		printf("第%d个人投票:\n",i+1);
		scanf("%d",&a);
		if(a==1)
		{
			vote_arr[0]+=1;
		}
		else if(a==2)
		{
			vote_arr[1]+=1;
		}
		else if(a==3)
		{
			vote_arr[2]+=1;
		}
		else 
		{
			printf("wrong input!! input again!\n");
			i--;
			continue;
		}
	}

	for(int i=0;i<3;i++)
	{
		printf("第%d个候选人，得票为%d\n",i+1,vote_arr[i]);
	}

	return 0;
}
