#include <stdio.h>

void strcop(char *a,char *b)
{
	int i=0;
	while(b[i] != '\0')
	{
		a[i]=b[i];
		i++;
	
	}
	a[i]='\0';
	printf("%s\n",a);
	printf("%s\n",b);
}

int main()
{
	char a[]="hello";
	char b[]="worldsafa";


	strcop(a,b);

	return 0;
}
