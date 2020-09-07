#include<stdio.h>

void sort(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				printf("%d %d %d",a,b,c);
			}
			else if(b<c)
			{
				printf("%d %d %d",a,c,b);
			}
		}
		else if(a<c)
		{
			printf("%d %d %d",c,a,b);
		}
	}
	else if(a<b)
	{
		if(b<c)
		{
			printf("%d %d %d",c,b,a);	
		}
		else if(c<a)
		{
			printf("%d %d %d",b,a,c);
		}
		else
			printf("%d %d %d",b,c,a);
	}
}

int main()
{
	int a=0,b=0,c=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sort(a,b,c);

	return 0;
}
