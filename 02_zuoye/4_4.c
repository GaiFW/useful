#include<stdio.h>

void test(char a)
{

	int o=a-64;
	while(a>64)//通过a的减少控制打印的行数
	{
		//打印每一行
		while(a-64>0)
		{

			int i=0;
			while(i<(a-65))//空格数和字符数加起来是 o ,空格数就是a-65
			{
			printf(" ");
			i++;
			}
			int j=0;
			while(j<(o-i))//头一段字符数就是 o - 空格数
			{
			printf("%c",65+j);
			j++;
			}
			int k=j-2;//j-1 是头一段字符数
			if(j!=1)
			{
			while(k>=0)//头一段字符数，减一个 就是第二段字符数
			{
				printf("%c",65+k);
				k--;
			}
			
			}
			printf("\n");
			a--;

		}
	}
}

int main()
{
	char a;
	printf("you char");
	scanf("%c",&a);
	test(a);
	return 0;
}
