#include "main.h"

void Add(struct Book *b,int  a)
{
	b[a-1].numb++;	
}

void Jieshu(struct Book *b,int a)
{
	if(b[a-1].numb==0)
	{
		printf("没了\n");
	}
	else
	{
	b[a-1].numb--;
	}
	
}
void Sel(struct Book *b)
{
	for(int i=0;i<(sizeof(b)/sizeof(*b));i++)
	{
		printf("%d\t%s\t%s\t%d\n",b->numb,b->name,b->type,b->count);
	}

}
void Print(struct Book *b)
{
	
	printf("-------------借书----------------\n");
	printf("-编号--书名------类型-----数量---\n");
	Sel(b);
	printf("---------------------------------\n");

}
