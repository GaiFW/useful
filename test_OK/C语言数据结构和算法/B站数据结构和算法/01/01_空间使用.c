#include <stdio.h>

void p(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	return;
}
void p1(int n)
{
	if(n)
	{
		p1(n-1);
		printf("%d\n",n);
	}
	return;
}

int main()
{
	int n;
	scanf("%d",&n);
	p(n);
	p1(n);
}
