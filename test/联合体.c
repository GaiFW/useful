#include <stdio.h>

int main()
{
	union char_int
	{	
		int a;
		char b;
	
	};

	union char_int c_i;
	c_i.a = 0x12345678;

	printf("%0x \n",c_i.b);


	return 0;
}
