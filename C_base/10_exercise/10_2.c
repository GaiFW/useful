#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int in_num;//
	int n_num=1;//
	int* arr=(int *)malloc(sizeof(int));
	if(arr==NULL)
	{
		printf("arr:error\n");
	}
	arr[0]=0;
	while(1)
	{
		printf("input you number:");
		scanf("%d",&in_num);

		if(in_num>0)
		{
			for(int i=0;i<n_num;i++)
			{
				if(in_num==arr[i])
				{
					printf("%d haved--------\n",in_num);
					n_num--;
					memmove(arr+i,arr+i+1,(n_num-i)*sizeof(int));
					arr = (int *)realloc(arr,sizeof(int)*n_num);
					if(arr==NULL)
					{
						printf("error\n");
					}
				}

			}
			n_num++;
			arr = (int *)realloc(arr,sizeof(int)*n_num);
			
			if(arr==NULL)
			{
				printf("error\n");
			}
			arr[n_num-1]=in_num;
		
		}
		else if(in_num<0)
		{
			for(int i=0;i<n_num;i++)
			{
				if((-in_num)==arr[i])
				{
					n_num--;
					memmove(arr+i,arr+i+1,(n_num-i)*sizeof(int));
					arr = (int *)realloc(arr,sizeof(int)*n_num);
				}
			}
		}
		else
			break;
	}

	n_num--;//头一个0
	memmove(arr,arr+1,n_num*(sizeof(int)));
	arr = (int *)realloc(arr,sizeof(int)*n_num);
	for(int j=0;j<n_num;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");


	free(arr);
	return 0;
}
