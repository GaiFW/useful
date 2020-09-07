#include <stdio.h>
#include <stdlib.h>

int len=0;
struct Goods
{
	char name[32];
	float price;
	int mount;
};

void prin(struct Goods *a)//遍历数组
{
	printf("序号\t名字\t价格\t数量\n");
	for(int i=0;i<len;i++)
	{
		printf("%d\t%s\t%.2f\t%d\n",i+1,a[i].name,a[i].price,a[i].mount);
	}
}

void add(struct Goods **a)
{
	int num=0;//商品数
	printf("duoshaoge?\n");
	scanf("%d",&num);
	*a = realloc(*a,(len+num)*sizeof(struct Goods));//len 全局变量几个元素
	len+=num;//数组长度

	for(int i=0;i<num;i++)//赋值
	{
		printf("第%d个：name price mount \n",i+1);
		scanf("%s %f %d",(*a)[i].name,&(*a)[i].price,&(*a)[i].mount);
	}
}
void Buy(struct Goods *a)
{
	int buy_i;//序号
	int many;//个数
	printf("which?duoshao?");
	scanf("%d %d",&buy_i,&many);

	printf("%d\n-----------------",a[buy_i-1].mount);//
	a[buy_i-1].mount-=many;
	printf("%d\n++++++++++++++++",a[buy_i-1].mount+1);//
	printf("需要%.2f\n",many*a[buy_i-1].price);
}

int main()
{
	struct Goods *arr = (struct Goods*)malloc(sizeof(struct Goods));
	if(arr == NULL)
	{
		printf("error!");
	}

	add(&arr);
	while(1)
	{
		prin(arr);
		Buy(arr);
	}

	free(arr);
	return 0;
	
}
