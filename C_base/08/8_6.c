#include <stdio.h>
#include <string.h>

int main()
{
	char *a[5]={"童话.mp3", "喜欢的明星.txt","东风破.mp3", "江南.mp3", "杀破狼.mp4"};

	for(int i=0;i<5;i++)
	{
		if(strstr(a[i],".mp3")!=NULL)
		{
			for(int j=0;j<(strstr(a[i],".mp3")-a[i]);j++)
			{
				printf("%c",a[i][j]);
				
			}
			printf("\n");
		}
	}

	return 0;
	

}
