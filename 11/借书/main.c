#include "main.h"

int main()
{

	int b_num=0;
	printf("how many books you have:");
	scanf("%d",&b_num);
	struct Book * b_arr=(struct Book*)malloc(sizeof(struct Book)*b_num);
	
	for(int i=0;i<b_num;i++)
	{
		printf("第%d本书",i+1);
		printf("type count\n");
		scanf("%s %s %d",b_arr[i].name,b_arr[i].type,&b_arr[i].count);
		Add(b_arr,i+1);
	}

	while(1)
	{
		int op=0;
		int j_id=0;
		int h_id=0;
		Print(b_arr);
		printf("input you oprate_num:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("jieshu id\n");
				scanf("%d",&j_id);
				Jieshu(b_arr,j_id);
				break;
			case 2:
				printf("huanshu id\n");
				scanf("%d",&h_id);
				Add(b_arr,h_id);
				break;
			case 3:
				Sel(b_arr);
				break;
			case 0:
				break;
			default:
				printf("wrong opration!");
				break;
		}
		
	}

	return 0;



}

