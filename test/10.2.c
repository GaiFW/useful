#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	int n, i = 1;
	int *u = (int *)malloc(sizeof(int));
	int *p=NULL;
	scanf("%d",&n);
	
	//u[0] = n;
	p = (int *)realloc(u, 4);
	p[0] = n;
	//printf("%d  ", p[0]);
	int t;
	do
	{
		int m = 0;
		scanf("%d", &m);
		getchar();
		//printf("%d  ", p[0]);
		
		 if(m<0)
		 {
		 	
		 	for(int d=0;d<i;d++)
		 	{
		 		//printf("d:%d\n", d);
		 		if(p[d] == -m)
		 		{
		 			//strcpy(&p[i],&p[i+1]);
		 			for(int g=d; g<i; g++)
					{
						p[g] = p[g+1];
						//printf("g:%d\n", g);
					}
					
				//	printf("d:%d\n", d);
				//	printf("m:%d\n", m);	
					break;
		 		} 		
		 	}
		 	
		 	//printf("m:%d\n", m);	
		 	continue;
		 	//printf("d:%d\n", d);
		 }

		 printf("p:%d\n", p[4]);	
		 	int h=0,flag = 0;

			while( h<i)
			{
				if(p[h] == m)
				{
					flag = 1;
				
					//printf("h:%d\n", flag);
						break;
				}
				h++;
			}

			if(flag == 1)
				continue;
		
		p = (int *)realloc(u, 4*(i+1));
		p[i] = m;
		i++;
		//printf("%d  ", p[i]);

		t = m;

	}while(t!=0);
	
	for(int j=0; j<i-1; j++)
	{
		printf("%d  ", p[j]);
	}
	printf("\n");
	return 0;
}