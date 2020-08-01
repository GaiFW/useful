#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i = n; i>=2; i--)
	{
		//printf("%d--\n",i );
		for(int j = i-1; j>=1; j--)
		{
			if(i%j == 0 )
			{		
				if(j != 1)
				{
					break;
				}
				else
				{
					printf("%d ",i);
				}
			}			
		}
	}
	return 0;
}