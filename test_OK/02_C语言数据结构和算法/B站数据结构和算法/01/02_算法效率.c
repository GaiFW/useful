//f(x)=a0 + a1x + a2x^2 + a3x^3 + ... + anx^n;
//clock() 捕捉从程序开始到clock() 被调用时所消耗的时间，这个单位是 clock tick 即时钟打点，就是多少个点
//常数 CLK_TCK 机器时钟每秒所走的时钟打点数，除以每秒这么多点 就是多少秒
#include <stdio.h>
#include <time.h>
#include <math.h>
double f(int n,double a[], double x)
{
	int i;
	double p = a[n];
	for(i=n;i>0;i--)
	{
		p = a[i-1] + x*p;
		return p;
	}
}
double f1(int n, double a[], double x)
{
	int i;
	double p=a[n];
	for (i=1;i<=n;i++)
	{
		p+=(a[i]*pow(x,i));
	}

	return p;
}
double (double (*p)(int n,double a[],double x),int n,double a[],double x)
{
	double (*p_f) (int n,double a[],double x) = p;
	*p_f(int n,double a[],double x);
}
clock_t start,stop;
double duration;
int main()
{
	
	double a[10]={0,1,2,3,4,5,6,7,8,9};
	start = clock();
	f(9,a,1.1);
	//f1(9,a,1.1);
	stop = clock();
	duration = ((double)(stop-start))/CLOCKS_PER_SEC;
	printf("%lf\n",duration);

	return 0;
	
}
