#include <stdio.h>

void prime_num(int n)
{
	if(n>1)
	{
		int i=n;
		while(i>=2)
		{
			int j=i-1;
			while(i%j!=0)
			{
				j--;
			}
			if(j==1)
			{
				printf("%d ",i);
			}
			i--;
		}
		
	}
	else
	{
		printf("该数太小---\n");	
	}
}

int main()
{
	int num;
	printf("input you number:");
	scanf("%d",&num);

	prime_num(num);

	return 0;
	
}
