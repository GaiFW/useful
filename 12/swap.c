#include <stdio.h>
#include<stdlib.h>

#define SWAP(a,b) ({\
	typeof(a) *_a =&a;\
	typeof(a) *_b =&b;\
	typeof(a) tmp = *_a;\
	*_a = *_b;\
	*_b = tmp;\	       
 })

#define TYPE  1

int main()
{
//	printf("which ?");
//	scanf("%d",&TYPE);

#if TYPE
	int * arr1  = (int *)malloc(sizeof(int));
	int * arr2  = (int *)malloc(sizeof(int));
	int len;
	printf("多少个？");
	scanf("%d",&len);
	arr1 = realloc(arr1,sizeof(int)*len);
	//是否 NULL
	//先 清空
	arr2 = realloc(arr2,sizeof(int)*len);

	printf("input 第一个:\n");
	for(int i=0;i<len;i++)
	{
		printf("第%d个",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("input 第二个:\n");
	for(int i=0;i<len;i++)
	{
		printf("第%d个",i+1);
		scanf("%d",&arr2[i]);
	}

	printf("开始交换。。。\n");
	for(int i=0;i<len;i++)
	{
		SWAP(arr1[i],arr2[i]);
	}

	printf("显示结果\n");
	printf("第一个\n");
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n第二个\n");
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr2[i]);
	}

	free(arr1);
	//置NULL
	free(arr2);
#else
	char* arr1  = (char*)malloc(sizeof(char));
	char* arr2  = (char*)malloc(sizeof(char));
	int len;
	printf("多少个？");
	scanf("%d",&len);
	arr1 = realloc(arr1,sizeof(char)*len);
	//是否 NULL
	//先 清空
	arr2 = realloc(arr2,sizeof(char)*len);

	printf("input 第一个:\n");
	for(int i=0;i<len;i++)
	{
		printf("第%d个",i+1);
		scanf("%c",&arr1[i]);
		getchar();
	}
	printf("input 第二个:\n");
	for(int i=0;i<len;i++)
	{
		printf("第%d个",i+1);
		scanf("%c",&arr2[i]);
		getchar();
	}

	printf("开始交换。。。\n");
	for(int i=0;i<len;i++)
	{
		SWAP(arr1[i],arr2[i]);
	}

	printf("显示结果\n");
	printf("第一个\n");
	for(int i=0;i<len;i++)
	{
		printf("%c ",arr1[i]);
	}
	printf("\n第二个\n");
	for(int i=0;i<len;i++)
	{
		printf("%c ",arr1[i]);
	}

	free(arr1);
	//置NULL
	free(arr2);
#endif
	return 0;

}
