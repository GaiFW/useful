//	n级台阶，一次只能走一阶或者两阶，问有多少种走法？
//
#include <stdio.h>

int taiJie(int n)
{
	if(n==1||n==2)
	{
		return n;
	}
	return taiJie(n-1)+taiJie(n-2);

}
int main()
{
	int n;
	printf("you count:");
	scanf("%d",&n);

	printf("there are %d ways!\n",taiJie(n));
	return 0;
}
