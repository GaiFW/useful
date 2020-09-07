#include<stdio.h>

float my_power1(float x,int n)
{
	if(n==1)
	{
		return x;
	}
	return x*my_power1(x,n-1);
}

float my_power2(float x,int n)
{
	float mi = 1;
	while(n>=1)
	{
		mi*=x;
		n--;
	}
	return mi;
}

int main()
{
	float a;
	int N=0;

	printf("input you 底数和次幂：");
	scanf("%f %d",&a,&N);
	printf("%.4f\n",my_power1(a,N));
	printf("%.4f\n",my_power2(a,N));

	return 0;
}
