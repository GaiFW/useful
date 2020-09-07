
#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include<time.h>
int user_num = 0;
int super_num = 0;

//时间-年月日时分
typedef struct
{
	int year;
	int month;
	int day;
	int shi;
	int fen;
} Time;
//车次信息
typedef struct train_info
{
	char train_num[6];//车次number
	char departure_place[32];//出发地
	char destination[32];//目的地
	Time departure_time;//出发时间
	Time using_time;//到达时间
	int ticket_mount;//余票数量
	float price;//价格
} Train;

//票面信息
typedef struct ticket_info
{
	char number[30];//时间+车次号+用户id
	int id;//用户id
	char name[32];//用户姓名
	char info_id[20];//用户身份证
	char train_num[6];//车次number
	Train train;
} Ticket;
//用户信息
typedef struct user_info
{
	int id;//用户信息
	char name[32];//用户姓名
	char gender[3];//性别
	char info_id[20];//身份证号
	char psw[16];//密码
	float asset;//钱包余额;

} User;

/*二叉树节点结构 链表节点结构*/
typedef struct train_bst
{
	Train* data;
	struct train_bst* left, *right;
	int flag;
} Train_bst, *Train_bst_p;

typedef struct a
{
	int number;
	char info_id[32];
	char train_num[32];
}collect_table,*collect_table_p;

/*最大堆*/
#define MaxData 1000000
typedef struct
{
	collect_table * MaxHeap;
	int size;
	int capacity;//总容量
}HeapManeger,*HeapManeger_p;

/*-------------身份证部分---------------*/
bool runping(int nian);
bool run_yue(int  yue, int ri);
bool ping_yue(int yue, int ri);
bool judge_infoid(char* data);

/*-------------用户部分----------------*/
//注册
bool sign_up(int *super_num, int *user_num);
//用户登陆
bool sign_in(char *info_id);
//管理员登陆
bool super_sign_in(char * info_id);
//注销
void log_out(char *info_id);
//查看个人信息
void look_my(char * info_id);
//修改个人信息
void change_my(char *info_id);

/*-------------车次部分---------------*/
/*比较发车时间 a < b 返回0 否则 1*/
int compare_time(Time a, Time b);
//新车
Train* new_train(char *train_num, char * departure_place, \
                 char *destination, Time departure_time, Time using_time, \
                 int ticket_mount, float price);
//增加车次
void add_train(Train* new);
//删除车次
void del_train(char * train_num);
//推送
void tuisong(char * train_num);
//修改车次
void change_train(char * train_num);
/*展示车信息*/
void show_train_info(Train* tmp);


/*--------------快速排序和选择排序部分------------------*/
/*收集到的车次组成链表*/
/*空链表头*/
Train_bst_p head_train();
/*新节点*/
Train_bst_p creat_train_node(Train* data);
/*插入链表*/
void link_in(Train_bst_p new, Train_bst_p prev, Train_bst_p next);
/*删除链表*/
void link_del(Train_bst_p node);
/*插入链表*/
Train_bst_p insert_train(Train_bst_p head, Train_bst_p new);
/*票价-快速排序*/
void price_kuaipai(Train_bst_p head,Train_bst_p left, Train_bst_p right);
/*余票-选择排序*/
void mount_xuanpai(Train_bst_p head);
/*遍歷排序好的鍊表*/
void show_lianbiao_train_info(Train_bst_p head);

/*--------------二叉树部分---------------------------*/
/*空树*/
Train_bst_p init_train_root();
/*插入树 时间顺序*/
Train_bst_p insert_train_bst(Train_bst_p root, Train_bst_p new);
/*中序遍历树*/
void mid_traverse(Train_bst_p root);
//查找车次
void sel_train(char* destination);


/*---------------堆排序到信息收集表-------------------*/
/*初始化堆管理器
用数组存放堆元素;哨兵;当前实际元素个数，不算哨兵;最大容量;
*/
HeapManeger_p init_heap(int capacity);
/*heap_empty*/
bool heap_empty(HeapManeger_p theHeapManeger);
/*heap_full*/
bool heap_full(HeapManeger_p theHeapManeger);
/*insert_heap
	调整插入*/
void insert_heap(HeapManeger_p theHeapManeger,collect_table data);
/*delete_heap
	调整删除*/
bool delete_heap(HeapManeger_p theHeapManeger,collect_table *data);
/*adjust_heap
	调整堆*/
int adjust_heap(HeapManeger_p theHeapManeger);

/*----------------购票部分------------------------*/
/*推送*/
void tuisong(char * train_num);
/*购票*/
bool buy_tickts(char* info_id);
/*展示购票信息*/
void show_ticket(Ticket* tick);
void show_ticket_info(char* info_id);
/*退票*/
bool reback_ticket(char* info_id);

/*------------------------------------------------------------------------------------*/


#endif