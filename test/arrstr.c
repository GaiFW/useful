#include <stdio.h>

void display(char arr[][20])
// void display(char (*arr)[20])
{
	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n", arr[i]);
	}
}

void display1(char *arr[])
// void display1(char **arr)
{
	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n", arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	char names[][20] = {
		"zhangsan",
		"lisi",
		"wangwu"
	};

	char s1[] = "zhangsan";
	char s2[] = "lisi";
	char s3[] = "wangwu";
	char *names2[] = {s1, s2, s3};

	printf("%c\n", names[0][2]);
	printf("%c\n", names2[0][2]);

	//names表示第0个char [20]的地址
	display(names);
	//names表示第0个char *的地址
	display1(names2);
	return 0;
}