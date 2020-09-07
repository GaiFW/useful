#include<stdio.h>

void married()
{
	for(int a=1;a<=3;a++)
	{
		for(int b=1;b<=3;b++)
		{
			for(int c=1;c<=3;c++)
			{
				if(a != 1 && c != 1 && c != 3 && a != b && a != c && c != b)
				{
					printf("a 娶了%c\n",'w'+a);
					printf("b 娶了%c\n",'w'+b);
					printf("c 娶了%c\n",'w'+c);
				}
			}
		}
	}

}
int main()
{
	married();
	return 0;
}
