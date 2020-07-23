#include<stdio.h>

void set1(int a)
{
	if(num_ed&(1<<(a))
	{
		printf("该位是第%d位,并且为1",a,);

	}
}

void set0(int a)
{
	
}


int main()
{
	int set_num=0;
	int num_ed=0;
	printf("please input your number_inttype_0btype\n");
	scanf("%d",&num_ed);
	printf("select set1,please input number 1---\n");
	printf("select set0,please input number 2---\n");
	scanf("%d",&set_num);

	if(set_num == 1)
	{
		int set1_num=0;
		printf("please input the bit which you want set");
		scanf("%d",&set1_num);
		set1(set1_num);
	}
	else if(set_num == 2)
	{
		int set2_num=0;
		printf("please input the bit which you want set");
		scanf("%d",&set2_num);
		set0(set2_num);
	}

}
