#include <stdio.h>
#include<stdlib.h>
int main()
{
	int p_num=0;
	int flag=0;
	int l=0;
	printf("input your number:");
	scanf("%d",&p_num);
	float ** score=(float**)malloc(4*sizeof(float*));
	if(score==NULL)
	{
		printf("error!\n");
	}
	for(;l<p_num;l++)
	{
		score[l]=(float*)malloc(sizeof(float)*p_num);
	if(score[l]==NULL)
	{
		printf("error!\n");
	}

	}
	
	
	for(int i=0;i<4;i++)
	{
	printf("第%d位裁判：\n",i+1);
	for(int j=0;j<p_num;j++)
	{

		printf("%d位选手：",j+1);
		scanf("%f",&score[i][j]);
		
	}

	}	
	for(int i=0;i<p_num;i++)
	{
	float p_sum=0;
	float p_max=0;
		for(int j=0;j<4;j++)
		{
			p_sum+=score[j][i];
		}
		printf("第%d位成绩是%f\n",i+1,p_sum/4);
		if(p_max<p_sum)
		{
			p_max=p_sum;
			flag=i+1;//第几位选手高
			if(i==(p_num-1))
			{
				printf("第%d位选手是冠军：成绩是%f\n",flag,p_max/4);
			}
		}
	}
	for(int i=0;i<p_num;i++)
	{
		free(score[i]);
	}
	free(score);

	return 0;
	
}
