#include <stdio.h>
#include <string.h>
char * new_str(char *str,char a,int n)//n-1
{
	char tmp[20]={0};
	tmp[0]=a;
	strcpy(tmp+1,str+n-1);
	strcpy(str+n-1,tmp);

	return str;
}

int main()
{
	int n=0;
	char str[20]={0};
	char c=0;

	printf("your string:");
	scanf("%s",str);
	printf("which:");
	scanf("%d",&n);
	getchar();
	printf("what:");
	scanf("%c",&c);
	printf("\n");

	printf("new_string:%s\n",new_str(str,c,n));

	return 0;
}
