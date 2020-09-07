#include <stdio.h>

void test()
{
	char a=0;
	while(a<26)
	{
		printf("%c ",97+a);
		a++;
		
	}
}

int main()
{
	test();
	return 0;
}
