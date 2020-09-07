#include<stdio.h>
void p(int a)
{
	int b=a;
	int j=0;
	if(b<2)
	{
		printf("这个数太小--\n");
	}
	else
	{
		while(b>=2)
		{
			j=b-1;//这是b从比b小的数开始除
			while(b%j!=0)//余数为0的时候就是验证是否是素数的时候
			{
				j--;
			}
			if(j==1)//余数为0，但是除的那个数不是1的时候，就说明不是素数。是1的时候，就说明是素数，打印出来
			{
			printf("%d ",b);
			}
			b--;//b完了之后，递减看后面的数是否是素数
		}
	}
}

int main()
{
	int ac;
	printf("输入你的数字：");
	scanf("%d",&ac);
	p(ac);
	return 0;

}
