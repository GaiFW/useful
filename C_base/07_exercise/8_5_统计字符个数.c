#include <stdio.h>

void count(char *a)
{
	int eng_num=0,math_num=0,other_num=0;

	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]<=57 && a[i]>=48)
		{
			math_num++;
		}
		else if((a[i]<=122 && a[i]>=97) || (a[i]<=90 && a[i]>=65))
		{
			eng_num++;
		}
		else
			other_num++;
		i++;
	}
	printf("字母数：%d\n数字数：%d\n其他数：%d\n",eng_num,math_num,other_num);
}

int main()
{
	char arr[100]={0};
	printf("input your str:");
	scanf("%s",arr);
	count(arr);

	return 0;

}
