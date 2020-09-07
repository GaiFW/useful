#include <stdio.h>

int age_n(int n)
{
	if(n==1)
	{
		return 10;
	}
	return 2+age_n(n-1);
}

int main()
{
	int n=4;
	printf("age:%d",age_n(n));

	return 0;
}
