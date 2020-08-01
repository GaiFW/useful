//
#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = {'h','e','l','l','o'};
	char b[] = {'h','e','l','l','o','\0','w','o','r','l','d'};
	char c[] = "hello\0world";
	char *d = "helloworld";
	char *e = "hello\0world";

	printf("打印出的：%s\n",a);
	//hellohello
	printf("strlen：%lu\n",strlen(a));
	//10
	printf("sizeof：%lu\n",sizeof(a));
	//5

	printf("打印出的：%s\n",b);
	//hello
	printf("strlen：%lu\n",strlen(b));
	//5
	printf("sizeof：%lu\n",sizeof(b));
	//11

	printf("打印出的：%s\n",c);
	//hello
	printf("strlen：%lu\n",strlen(c));
	//5
	printf("sizeof：%lu\n",sizeof(c));
	//12

	printf("打印出的：%s\n",d);
	//helloworld
	printf("strlen：%lu\n",strlen(d));
	//10
	printf("sizeof：%lu\n",sizeof(d));
	//8

	printf("打印出的：%s\n",e);
	//hello
	printf("strlen：%lu\n",strlen(e));
	//5
	printf("sizeof：%lu\n",sizeof(e));
	//8
	return 0;
}
