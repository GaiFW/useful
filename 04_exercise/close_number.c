
#include <stdio.h>

//全局变量
int flag=0;//截停递归变量
int remo=0;//去重变量

/*
Function name: closeNumber
		
Description: 递归：求数A A的因数和为B  B的因数和 与A比较

Input: 数A

Return: 数A 或者 数B 的因数和

*/
int closeNumber(int num)//上一个的因数和是这个的num
{
	flag++;//计数递归

	//begin 求num因数和
	int sum_y;
	sum_y=(-num*2);

	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum_y+=(num/i+i);//因数和
		}
	}
	sum_y/=2;
	//end 求num的因数和

	if(flag==2)//截停递归
	{
		flag=0;//重置
		return sum_y;
	}//递归终止

	if(num==closeNumber(sum_y) && num!=sum_y && num!=remo)
	{
		remo = sum_y;//定义要去重的值
		printf("%d和%d是亲密数\n\n",num,sum_y);
	
	}
	return sum_y;
}

int main()
{
	for(int i=1;i<10000;i++)
	{
		closeNumber(i);
	}

	return 0;
}






