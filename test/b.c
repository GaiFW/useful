#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	for (int i = 2; i <= 10000; ++i)
	{
	/* code */
		int s=0;
		int s1=0;
		for (int j = 1; j< i; ++j)//求数A的因数和 为B
		{
			/* code */
			if (i%j==0)
			{
				s+=j;
			}
		}
		for (int k = 1; k < s; ++k)//求数B的因数和
		{
			/* code */
			if(s%k==0)
			{
				s1+=k;
			}
		}
		if (s1 == i && s!=s1 )
		{
			printf("%d和%d是亲密数\n\n",i,s1 );
		}
	}
	return 0;
}
