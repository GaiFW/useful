//分鱼问题（用递归实现）
//	ABCDE五个人在某天夜里合伙去捕鱼，到凌晨都疲惫不堪，于是各自找地方睡觉。第二天，A第一个醒来，他将鱼平均分成5份，把多余的一条鱼扔掉，拿走自己的一份。B第二个醒来，将剩下的鱼平均分成5份，把多余的一条扔掉，拿走自己的一份。C、D、E依次醒来，也按同样的方法拿鱼。问他们合伙至少捕了多少条鱼？（注意，每次分鱼都是整条分的，不能切块，鱼的数量保持整数）
#include <stdio.h>
int i=6;
int sum=0;

int fishProblem(int q)//q是4的倍数，每个总数必须不能是5的倍数---记得验证
{
	--i;
	if(q%4!=0)
	{
		printf("第%d个人剩下了%d个不合理，因为剩下这些四个不够分----------------\n",i,q);
		i=6;
		sum=0;
		printf("\n");
		return 0;
	}
	
	sum=q/4*5+1;//第i个，把这些分配
	
	if(sum%5==0)
	{
		printf("第%d个人手里有%d个不合理(因为可以除以5-----------------------------)\n ",i,sum);
		i=6;
		sum=0;
		printf("\n");
		return 0;
	}
	printf("第%d个人认为总数有%d个(把这些分配) \n",i,sum);
	printf("剩下了%d个\n",(sum-1)/5*4);
	if(i==1)
	{
		printf("\nthey got %d fish at least\n\n",sum);
		return 0;
	}
	fishProblem(sum);
}

int main()
{
	printf("--------------1------------");
	for(int j=1;i!=1;j++)
	{
		printf("猜第五个人剩下了%d个\n",j*4);
		fishProblem(4*j);

	}
	return 0;
}
