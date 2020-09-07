#include <stdio.h>

	int fun_a(int a)
	{
		return 0;
		
	}
int main()
{
	int int_a=10;
	int arr_sig[5]={1,2,3,4,5};
	//一维数组 数组名 取地址 一个方括号的区别
	printf("arr_sig:数组名：%p,对数组名取地址%p,[0]:%d,对[0]取地址:%p\n",arr_sig,&arr_sig,arr_sig[0],&arr_sig[0]);
	printf("arr_sig:数组名+1：%p,对数组名取地址+1:%p,[0]+1:%d,对[0]取地址+1:%p\n",arr_sig+1,&arr_sig+1,arr_sig[0]+1,&arr_sig[0]+1);
	int arr_dou[5][2]={1,2,3,4,5,6,7,8,9,0};
	//二维数组 数组名 取地址 一个方括号 两个方括号的区别
	printf("arr_dou:数组名p:%p,对数组名取地址%p,[0]:%p,对[0]取地址:%p,[0][0]:%d,对[0][0]取地址：%p\n",arr_dou,&arr_dou,arr_dou[0],&arr_dou[0],arr_dou[0][0],&arr_dou[0][0]);
	printf("arr_dou:数组名p+1:%p,对数组名取地址+1%p,[0]+1:%p,对[0]取地址+1:%p,[0][0]+1:%d,对[0][0]取地址+1：%p\n",arr_dou+1,&arr_dou+1,arr_dou[0]+1,&arr_dou[0]+1,arr_dou[0][0]+1,&arr_dou[0][0]+1);
	int *point_arr[4]={&int_a};
	//指针数组。。。

	int *int_p=&int_a;

	int (*arr_p)[5]=&arr_sig;//一维数组指针
	//一维数组的取地址，加一，数组名，和一个方括号的区别
	int (*arr_dp)[2][5]=&arr_dou;//二维数组指针
	//二维数组的取地址 加一 数组名 和 一个方括号 和两个方括号的区别
	int (*fun_p)(int a)=&fun_a;//函数指针
	//函数用函数指针 调用 函数名 指针的解引用调用的区别
	
	


	return 0;
}
