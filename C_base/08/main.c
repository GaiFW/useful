#include <stdio.h>
#include <stdlib.h>

int main(int a,char **ch)
{
	//int y=atoi(*ch+1);//售价
	int y=atoi(ch[1]);//售价

	int num=1;
	int sum=0;
	int i=1;
	for(;num<100;i++)
	{
		num *=2 ;
		if(num>100)
		{
			num/=2;
			break;
		}
		sum +=num;
		printf("%d %d %d\n",num,sum,i);
	}
	printf("%d\n",i);
	printf("%d\n",sum*y/(i-1));

	return 0;

	
}
