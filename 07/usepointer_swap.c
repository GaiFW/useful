#include <stdio.h>
int * max_p(int *a)
{
	int* p=a;
	for(int i=0;i<5;i++)
	{
		p=*p<a[i]?&a[i]:p;
	}
	return p;
	
}
void swap(int *(*m)(int *a),int* a,int* b)
{
	int tmp=0;
	int *p=m(a);
	int *p1=m(b);	
	tmp = *p;
	*p  = *p1;
	*p1 = tmp;
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}

}

int main()
{
	printf("input you number\n");
	int a[5]={0};
	int b[5]={0};
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("input you number\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	swap(max_p,a,b);
	return 0;

}
