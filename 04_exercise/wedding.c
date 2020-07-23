#include <stdio.h>

void wedding(char women, char man)
{

	if(women == 'x')
	{
		if(man == 'a')
		{
			wedding(women, man+1);
		}
		else if(man == 'c')
		{
			wedding(women, man-1);
		}
		else
		{
			printf("%c->%c\n",women, man);
			wedding(women+1,man+1);
		
		}
	}
	else if(man == 'c')
	{
		if(women == 'x')
		{
			wedding(women+1,man);

		}
		else if(women == 'z')
		{
			wedding(women-1,man);
		}
		else
		{
			printf("%c->%c\n",women, man);
			wedding(women+1,man-1);
		
		}
			
	}
	else 
			printf("%c->%c\n",women, man-1);


	
}
int main()
{
	char women='x';
	char man='a';
	wedding(women,man);

	return 0;
	
}
