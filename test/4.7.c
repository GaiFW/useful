#include<stdio.h>

int main()
{
	int a, b, c;
	for(a=1; a<=3; a++)
	{
		for(b=1; b<=3; b++)
		{
			for(c=1; c<=3; c++)
			{
				if(a != 1 && c != 1 && c != 3 && a != b && b != c && a != c )
				{
					printf("%c将嫁给a\n", 'w'+a);
					printf("%c将嫁给b\n", 'w'+b);
					printf("%c将嫁给c\n", 'w'+c);
				}
			}
		}
	}
}