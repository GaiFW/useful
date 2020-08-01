#include <stdio.h>

int fish(int n)
{
	//边界条件
	if (n == 5)
	{
		//第5个人醒来看到的是能被4整除
		static int f = 0;
		do
		{
			f++;
		}
		while((f-1)%5 != 0);
		return f;
	}
	//递归公式
	else
	{
		//后面一个人醒来看到的鱼是t条
		int t;
		do
		{
			t = fish(n+1);
		}while(t%4 != 0);

		//fish(n) = fish(n+1)/4*5 + 1
		return t/4*5 + 1;
	}
}

int main(int argc, char const *argv[])
{
	printf("至少捕鱼：%d条\n", fish(1));
	return 0;
}

// n   1   2   3   4   5
// fish(n) = fish(n+1)/4*5 + 1