#include <stdio.h>
#include <string.h>
void del_str(char *a,int c,int b)
{
	char new_str[20]={};
	strcpy(new_str,a);
	strcpy(new_str+c-1,a+c+b-1);

	printf("the new string:%s\n",new_str);
}

int main()
{

	int n1=0,n2=0;
	char str[20]={0};

	printf("input your string:");
	scanf("%s",str);
	printf("which:");
	scanf("%d",&n1);
	printf("how much:");
	scanf("%d",&n2);
	printf("%s\n%d\n%d\n",str,n1,n2);
	del_str(str,n1,n2);
	return 0;
	
}
