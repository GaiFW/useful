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
} collect_table, *collect_table_p;

/*最大堆*/
#define MaxData 1000000
typedef struct
{
	collect_table * MaxHeap;
	int size;
	int capacity;//总容量
} HeapManeger, *HeapManeger_p;

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
void price_kuaipai(Train_bst_p head, Train_bst_p left, Train_bst_p right);
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
void insert_heap(HeapManeger_p theHeapManeger, collect_table data);
/*delete_heap
	调整删除*/
bool delete_heap(HeapManeger_p theHeapManeger, collect_table *data);
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


bool runping(int nian)
{
	if (nian / 4 == 0 && nian / 100 != 0 || nian / 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool run_yue(int  yue, int ri)
{
	switch (yue)
	{
	case 1:
		if (ri <= 31)
			return 1;
	case 3:
		if (ri <= 31)
			return 1;
	case 5:
		if (ri <= 31)
			return 1;
	case 7:
		if (ri <= 31)
			return 1;
	case 8:
		if (ri <= 31)
			return 1;
	case 10:
		if (ri <= 31)
			return 1;
	case 12:
		if (ri <= 31)
			return 1;
	case 2:
		if (ri <= 29)
			return 1;
	case 4:
		if (ri <= 30)
			return 1;
	case 6:
		if (ri <= 30)
			return 1;
	case 11:
		if (ri <= 30)
			return 1;
	}
}

bool ping_yue(int yue, int ri)
{
	switch (yue)
	{
	case 1:
		if (ri <= 31)
			return 1;
	case 3:
		if (ri <= 31)
			return 1;
	case 5:
		if (ri <= 31)
			return 1;
	case 7:
		if (ri <= 31)
			return 1;
	case 8:
		if (ri <= 31)
			return 1;
	case 10:
		if (ri <= 31)
			return 1;
	case 12:
		if (ri <= 31)
			return 1;
	case 2:
		if (ri <= 28)
			return 1;
	case 4:
		if (ri <= 30)
			return 1;
	case 6:
		if (ri <= 30)
			return 1;
	case 11:
		if (ri <= 30)
			return 1;
	}
}
//typedef unsigned long long type;
bool judge_infoid(char* data)
{

	char guishu_str[6] = {};
	for (int i = 0; i < 6; i++)
	{
		guishu_str[i] = data[i];
	}
	int guishu_data = atoi(guishu_str);
	// printf("17data:%c---\n",data[17] );

	char birthday_str[9] = {};
	char nian_str[5] = {};
	char yue_str[4] = {};
	char ri_str[4] = {};
	for (int i = 0; i < 8; i++)
	{

		birthday_str[i] = data[6 + i];
		if (i <= 3)
		{
			// printf("nian %c\n",data[6+i] );
			nian_str[i] = data[6 + i];

		}
		else if (i <= 5)
		{
			yue_str[i - 4] = data[6 + i];
		}
		else
		{
			ri_str[i - 6] = data[6 + i];
		}
	}
	long birthday_data = atol(birthday_str);
	int nian_data = atoi(nian_str);
	int yue_data = atoi(yue_str);
	int ri_data = atoi(ri_str);
	if (nian_data > 1900)
	{
		if (runping(nian_data))
		{
			if (run_yue(yue_data, ri_data))
			{
			}
			else
			{
				printf("不合法\n");
				return 0;
			}
		}
		else
		{
			if (ping_yue(yue_data, ri_data))
			{
			}
			else
			{
				printf("不合法\n");
				return 0;
			}
		}
	}
	else
	{
		printf("不合法\n");
		return 0;
	}

	char shunxu_str[3] = {};
	for (int i = 0; i < 3; i++)
	{
		shunxu_str[i] = data[14 + i];
	}
	int shuxu_data = atoi(shunxu_str);


	char jiaoyan = data[17];
	// printf("%c\n",jiaoyan );
	if (jiaoyan <= '9' && jiaoyan >= '0' || jiaoyan == 'X')
	{
	}
	else
	{
		printf("不合法\n");
		return 0;
	}
	return 1;

}

//注册
bool sign_up(int *super_num, int *user_num)
{
	User user1;
	User user_tmp;
	FILE* fp = NULL;
	printf("身份证：\n");
	scanf("%s", user1.info_id);
	if (!judge_infoid(user1.info_id))
	{
		printf("身份证不合格\n");
		return 0;
	}

	int is_super = 0;
	printf("是否是管理员1 0 \n");
	scanf("%d", &is_super);
	if (is_super)
	{
		fp = fopen("../db/管理员信息.txt", "r+");
		if (fp == NULL)
		{
			fp = fopen("../db/管理员信息.txt", "w");
			printf("姓名：\n");
			scanf("%s", user1.name);
			printf("性别：\n");
			scanf("%s", user1.gender);
			printf("密码：\n");
			scanf("%s", user1.psw);
			user1.id = ++(*user_num);
			user1.asset = 1000;
			fwrite(&user1, sizeof(user1), 1, fp);
			fclose(fp);
			return 1;
		}

		while (fread(&user_tmp, sizeof(user1), 1, fp) == 1)
		{
			if (strncmp(user_tmp.info_id, user1.info_id, strlen(user1.info_id)) == 0)
			{
				printf("已经有了该账户\n");
				fclose(fp);
				return 0;
			}
		}
		fclose(fp);

		fp = fopen("../db/管理员信息.txt", "a+");
		printf("姓名：\n");
		scanf("%s", user1.name);
		printf("性别：\n");
		scanf("%s", user1.gender);
		printf("密码：\n");
		scanf("%s", user1.psw);
		user1.id = ++(*super_num);
		user1.asset = 1000;
		fwrite(&user1, sizeof(User), 1, fp);
		fclose(fp);
		return 1;

	}
	else
	{
		fp = fopen("../db/用户信息.txt", "r+");
		if (fp == NULL)
		{
			fp = fopen("../db/用户信息.txt", "w");
			printf("姓名：\n");
			scanf("%s", user1.name);
			printf("性别：\n");
			scanf("%s", user1.gender);
			printf("密码：\n");
			scanf("%s", user1.psw);
			user1.id = ++(*user_num);
			user1.asset = 1000;
			fwrite(&user1, sizeof(User), 1, fp);
			fclose(fp);
			return 1;
		}
		while (fread(&user_tmp, sizeof(User), 1, fp) == 1)
		{
			if (strcmp(user_tmp.info_id, user1.info_id) == 0)
			{
				printf("已经有了该账户\n");
				fclose(fp);
				return 0;
			}
		}
		fclose(fp);

		fp = fopen("../db/用户信息.txt", "a+");
		printf("姓名：\n");
		scanf("%s", user1.name);
		printf("性别：\n");
		scanf("%s", user1.gender);
		printf("密码：\n");
		scanf("%s", user1.psw);
		user1.id = ++(*user_num);
		user1.asset = 1000;
		fwrite(&user1, sizeof(User), 1, fp);
		fclose(fp);
		return 1;
	}
}
//用户登陆
bool sign_in(char *info_id)
{
	User user1;
	strcpy(user1.info_id, info_id);
	FILE* fp = NULL;
	fp = fopen("../db/用户信息.txt", "r");
	if (fp == NULL)
	{
		printf("NO records");
		return 0;
	}
	User user_tmp;
	while (fread(&user_tmp, sizeof(User), 1, fp) == 1)
	{
		if (strcmp(user_tmp.info_id, user1.info_id) == 0)
		{
			printf("密码：\n");
			scanf("%s", user1.psw);
			if (strcmp(user_tmp.psw, user1.psw) == 0)
			{
				printf("登陆成功\n");
				fclose(fp);
				return 1;
			}
		}
	}
	fclose(fp);
	printf("登陆失败\n");
	return 0;
}
//管理员登陆
bool super_sign_in(char * info_id)
{

	User user1;
	strcpy(user1.info_id, info_id);
	FILE* fp = NULL;
	fp = fopen("../db/管理员信息.txt", "r+");
	if (fp == NULL)
	{
		printf("NO records");
		return 0;
	}
	User user_tmp;
	while (fread(&user_tmp, sizeof(User), 1, fp) == 1)
	{
		if (strcmp(user_tmp.info_id, user1.info_id) == 0)
		{
			printf("密码：\n");
			scanf("%s", user1.psw);
			if (strcmp(user_tmp.psw, user1.psw) == 0)
			{
				printf("登陆成功\n");
				fclose(fp);
				return 1;
			}
		}
	}
	fclose(fp);
	printf("登陆失败\n");
	return 0;
}
//注销
void log_out(char *info_id)
{
	FILE* fp = NULL;
	FILE* fp2 = NULL;
	User user1;
	fp = fopen("../db/用户信息.txt", "r");
	fp2 = fopen("../db/2.txt", "w");
	while (fread(&user1, sizeof(user1), 1, fp) == 1)
	{
		if (strcmp(user1.info_id, info_id) == 0)
		{
			continue;
		}
		fwrite(&user1, sizeof(user1), 1, fp2);
	}
	fclose(fp);
	fclose(fp2);
	remove("../db/用户信息.txt");
	rename("../db/2.txt", "用户信息.txt");
}
//查看个人信息
void look_my(char * info_id)
{
	FILE* fp = NULL;
	User user1;
	fp = fopen("../db/用户信息.txt", "r");
	while (fread(&user1, sizeof(user1), 1, fp) == 1)
	{
		if (strcmp(user1.info_id, info_id) == 0)
		{
			printf("%d\t%s\t%s\t%s\t%.2f\n", user1.id, user1.name, user1.gender, user1.info_id, user1.asset );
		}
	}
	fclose(fp);
}
//修改个人信息
void change_my(char *info_id)
{
	FILE* fp = NULL;
	User user1;
	fp = fopen("../db/用户信息.txt", "r+");
	while (fread(&user1, sizeof(user1), 1, fp) == 1)
	{
		if (strcmp(user1.info_id, info_id) == 0)
		{
			// printf("%d\t%s\t%s\t%s\t%.2f\n",user1.id,user1.name,user1.gender,user1.info_id,user1.asset );
			printf("修改名字 1 性别 2 金额 3 密码 4 退出0\n");
			int op = 1;
			scanf("%d", &op);
			char tmp[50];
			float tm;
			switch (op)
			{
			case 1:
				printf("输入你的新名字\n");
				scanf("%s", tmp);
				strcpy(user1.name, tmp);
				fseek(fp, -sizeof(user1), SEEK_CUR);
				fwrite(&user1, sizeof(user1), 1, fp);
				break;
			case 2:
				printf("输入你的新性别\n");
				scanf("%s", tmp);
				strcpy(user1.gender, tmp);
				fseek(fp, -sizeof(user1), SEEK_CUR);
				fwrite(&user1, sizeof(user1), 1, fp);
				break;
			case 3:
				printf("输入你的新金额\n");
				scanf("%f", &tm);
				user1.asset = tm;
				fseek(fp, -sizeof(user1), SEEK_CUR);
				fwrite(&user1, sizeof(user1), 1, fp);
				break;
			case 4:
				printf("输入你的旧密码\n");
				scanf("%s", tmp);
				if (strcmp(tmp, user1.psw) == 0)
				{
					printf("输入你的新密码\n");
					scanf("%s", tmp);
					strcpy(user1.name, tmp);
					fseek(fp, -sizeof(user1), SEEK_CUR);
					fwrite(&user1, sizeof(user1), 1, fp);
				}
				else
				{
					printf("密码错误，停止改密码！\n");
				}
				break;
			}
		}
	}
	fclose(fp);
}



/*比较发车时间 a < b 返回0 否则 1*/
int compare_time(Time a, Time b)
{
	if (a.month < b.month)
	{
		return 0;
	}
	else if (a.month == b.month)
	{
		if (a.day < b.day)
		{
			return 0;
		}
		else if (a.day == b.day)
		{
			if (a.shi < b.shi)
			{
				return 0;
			}
			else if (a.shi == b.shi)
			{
				if (a.fen < b.fen)
				{
					return 0;
				}
				else if (a.fen > b.fen)
				{
					return 1;
				}
				else
					return 2;
			}
		}
	}
	return 1;
}


//新车
Train* new_train(char *train_num, char * departure_place, \
                 char *destination, Time departure_time, Time using_time, \
                 int ticket_mount, float price)
{
	Train* new = malloc(sizeof(Train));
	if (new != NULL)
	{
		new->departure_time = departure_time;
		new->using_time = using_time;
		new->ticket_mount = ticket_mount;
		new->price = price;
		strcpy(new->train_num, train_num);
		strcpy(new->departure_place, departure_place);
		strcpy(new->destination, destination);
		return new;
	}
	return NULL;
}

//增加车次
void add_train(Train* new)
{
	FILE* fp = NULL;
	fp = fopen("../db/车次信息.txt", "r");
	if (fp == NULL)
	{
		fp = fopen("../db/车次信息.txt", "w");
		fwrite(new, sizeof(Train), 1, fp);
		fclose(fp);
		return;
	}
	else
	{
		fclose(fp);
		fp = fopen("../db/车次信息.txt", "r+");
		Train tmp;
		while (fread(&tmp, sizeof(tmp), 1, fp) == 1)
		{
			if (strcmp(tmp.train_num, new->train_num) == 0)
			{
				printf("有该车了\n");
				fclose(fp);
				return ;
			}
		}
		fwrite(new, sizeof(tmp), 1, fp);
		fclose(fp);
		printf("插入成功\n");
		return;
	}
}

//删除车次
void del_train(char * train_num)
{
	FILE* fp = NULL;
	FILE* fp2 = NULL;
	Train tmp;
	fp = fopen("../db/车次信息.txt", "r");
	if (fp == NULL)
	{
		printf("没有车次信息\n");
		return;
	}
	else
	{
		fp2 = fopen("../db/2.txt", "a");
		while (fread(&tmp, sizeof(tmp), 1, fp) == 1)
		{
			if (strcmp(tmp.train_num, train_num) == 0)
			{
				continue;
			}
			fwrite(&tmp, sizeof(tmp), 1, fp2);
		}
		fclose(fp);
		fclose(fp2);
		remove("../db/车次信息.txt");
		rename("../db/2.txt", "../db/车次信息.txt");
		printf("删除成功\n");
		return;
	}

}

//修改车次
void change_train(char * train_num)
{
	FILE*fp = NULL;
	fp = fopen("../db/车次信息.txt", "r");
	if (fp == NULL)
	{
		printf("没有车次信息\n");
		return ;
	}
	else
	{
		Train tmp;
		while (fread(&tmp, sizeof(tmp), 1, fp) == 1)
		{
			if (strcmp(tmp.train_num, train_num) == 0)
			{
				int op = 1;
				while (op)
				{
					printf("修改：出发时间1 到达时间2 价格3 退出0\n");
					scanf("%d", &op);
					Time time_change;
					float tm;
					int yes_no;
					switch (op)
					{
					case 1:
						printf("出发时间：");
						scanf("%d %d %d %d %d", &time_change.year, &time_change.month, \
						      &time_change.day, &time_change.shi, &time_change.fen);
						tmp.departure_time = time_change;
						fseek(fp, -sizeof(tmp), SEEK_CUR);
						fwrite(&tmp, sizeof(tmp), 1, fp);
						printf("修改成功\n");
						break;
					case 2:
						printf("到达时间：");
						scanf("%d %d %d %d %d", &time_change.year, &time_change.month, \
						      &time_change.day, &time_change.shi, &time_change.fen);
						tmp.departure_time = time_change;
						fseek(fp, -sizeof(tmp), SEEK_CUR);
						fwrite(&tmp, sizeof(tmp), 1, fp);
						printf("修改成功\n");
						break;
					case 3:
						printf("输入新票价\n");
						scanf("%f", &tm);
						tmp.price = tm;
						fseek(fp, -sizeof(tmp), SEEK_CUR);
						fwrite(&tmp, sizeof(tmp), 1, fp);
						printf("修改成功\n");
						printf("是否推送：1 yes， 0 no\n");
						scanf("%d", &yes_no);
						if (yes_no)
						{
							tuisong(tmp.train_num);
						}

						break;
					case 0:
						fclose(fp);
						return;
					}
				}
			}
		}

	}

	fclose(fp);
	return;

}

/*展示车信息*/
void show_train_info(Train* tmp)
{
	printf("----------------------------------------------------------------------\n");
	printf("%s\t%s到%s\n", tmp->train_num, tmp->departure_place, tmp->destination);
	printf("%d月%d日%d时%d到%d月%d日%d时%d\n", tmp->departure_time.month, \
	       tmp->departure_time.day, tmp->departure_time.shi, tmp->departure_time.fen, \
	       tmp->using_time.month, tmp->using_time.day, \
	       tmp->using_time.shi, tmp->using_time.fen);
	printf("%d\t%.2f\n", tmp->ticket_mount, tmp->price);
	printf("\n");
}




/*收集到的车次组成链表*/
/*空链表头*/
Train_bst_p head_train()
{
	Train_bst_p head = malloc(sizeof(Train_bst));
	head->data = NULL;
	head->left = head;
	head->right = head;
	return head;
}

/*新节点*/
Train_bst_p creat_train_node(Train* data)
{
	Train_bst_p new = malloc(sizeof(Train_bst));
	new->data = malloc(sizeof(Train));
	*(new->data) = *data;
	new->left = NULL;
	new->right = NULL;
	return new;
}


/*插入链表*/
void link_in(Train_bst_p new, Train_bst_p prev, Train_bst_p next)
{
	new->right = prev->right;
	new->left = next->left;
	prev->right = new;
	next->left = new;
}
/*删除链表*/
void link_del(Train_bst_p node)
{
	Train_bst_p left = node->left;
	Train_bst_p right = node->right;

	left->right = node->right;
	right->left = node->left;
}

/*插入链表*/
Train_bst_p insert_train(Train_bst_p head, Train_bst_p new)
{
	if (head->right == head)
	{
		new->left = head;
		new->right = head;
		head->left = new;
		head->right = new;
		return head;
	}
	link_in(new, head->left, head);
	return head;
}


/*票价-快速排序*/
void price_kuaipai(Train_bst_p head, Train_bst_p left, Train_bst_p right)
{
	if ( head->right == head)
	{
		printf("链表为空\n");
		return;
	}
	if (left == right || left == head || right == head)
	{
		return;
	}

	Train_bst_p r = left;
	Train* tmp = r->data;
	Train_bst_p l = right;
	while (r != l)
	{
		while (r != l && l->data->price >= tmp->price)
		{
			l = l->right;
		}
		if (r != l)
		{
			r->data = l->data;
			r = r->left;
		}
		while (r != l && r->data->price <= tmp->price)
		{
			r = r->left;
		}
		if (r != l)
		{
			l->data = r->data;
			l = l->right;
		}
	}
	r->data = tmp;
	price_kuaipai(r->right, r->right, right);
	price_kuaipai(head, left, l->left);
}

/*余票-选择排序*/
void mount_xuanpai(Train_bst_p head)
{
	Train_bst_p headptr = NULL;
	for (headptr = head; headptr->right != head; headptr = headptr->right)
	{
		Train_bst_p ptr = headptr->right;
		for (Train_bst_p tmp = headptr->right; tmp->right != head; tmp = tmp->right)
		{
			if (tmp->data->ticket_mount < tmp->right->data->ticket_mount)
			{
				ptr = tmp->right;
			}
		}
		Train* t = headptr->right->data;
		headptr->right->data = ptr->data;
		ptr->data = t;
	}

}

/*遍歷排序好的鍊表*/
void show_lianbiao_train_info(Train_bst_p head)
{
	Train_bst_p tmp = head;
	if (tmp->right == head)
	{
		printf("没有元素\n");
		return;
	}
	while (tmp->right != head)
	{
		tmp = tmp->right;
		show_train_info(tmp->data);
	}
}


/*空树*/
Train_bst_p init_train_root()
{
	return NULL;
}

/*插入树 时间顺序*/
Train_bst_p insert_train_bst(Train_bst_p root, Train_bst_p new)
{
	if (root == NULL)
	{
		return new;
	}
	else
	{
		if (compare_time(root->data->departure_time, new->data->departure_time) == 1) //new 小
		{
			root->left = insert_train_bst(root->left, new);
		}
		else if (compare_time(root->data->departure_time, new->data->departure_time) == 0)
		{
			root->right = insert_train_bst(root->right, new);
		}
		else
		{
			printf("不能同一时刻发车\n");
		}
	}

	return root;
}

/*中序遍历树*/
void mid_traverse(Train_bst_p root)
{
	if (root != NULL)
	{
		mid_traverse(root->left);
		show_train_info(root->data);
		mid_traverse(root->right);
	}
}



//查找车次
void sel_train(char* destination)
{
	/*打开文件*/
	FILE* fp = NULL;
	fp = fopen("../db/车次信息.txt", "r");
	if (fp == NULL)
	{
		printf("打不开文件\n");
		return ;
	}

	/*将车次信息组成链表*/
	Train_bst_p head = head_train();
	Train tmp;
	Train_bst_p new = NULL;
	for (; fread(&tmp, sizeof(Train), 1, fp) == 1; head = insert_train(head, new))
	{
		if (strcmp(tmp.destination, destination) == 0)
		{
			new = creat_train_node(&tmp);
		}
	}
	/*关闭文件*/
	fclose(fp);
	// return;

	int op = 0;
	printf("按时间排序 1； 按票价排序 2； 按余票数量 3\n");
	scanf("%d", &op);
	if (op == 1)
	{
		Train_bst_p root = init_train_root();
		Train_bst_p tmp = head;
		Train_bst_p real_tmp = tmp->right;
		while (real_tmp != head)
		{
			tmp = real_tmp;
			real_tmp = real_tmp->right;
			/*生成二叉树-时间左小右大*/
			link_del(tmp);
			tmp->right = NULL;
			tmp->left = NULL;
			root = insert_train_bst(root, tmp);
		}
		/*
		二分查找目的地-中序遍历查找-时间排序*/
		mid_traverse(root);
		printf("------------------------------------------------------------以上\n");
	}
	else if (op == 2)
	{
		/*价格由小到大-快速排序*/
		price_kuaipai(head, head->left, head->right);
		show_lianbiao_train_info(head);
		printf("------------------------------------------------------------以上\n");
	}
	else if (op == 3)
	{
		/*余票由大到小-选择排序*/
		mount_xuanpai(head);
		show_lianbiao_train_info( head);
		printf("-----------------------------------------------------------以上\n");
	}
	return;
}




/*初始化堆管理器
用数组存放堆元素；哨兵；当前实际元素个数，不算哨兵；最大容量；
*/
HeapManeger_p init_heap(int capacity)
{
	HeapManeger_p theHeapManeger = malloc(sizeof(HeapManeger));
	if (theHeapManeger != NULL)
	{
		theHeapManeger->MaxHeap = malloc(sizeof(collect_table) * capacity);
		if (theHeapManeger->MaxHeap != NULL)
		{
			(theHeapManeger->MaxHeap[0]).number = MaxData;
			theHeapManeger->size = 0;
			theHeapManeger->capacity = capacity;
			return theHeapManeger;
		}
	}
}

/*heap_empty*/
bool heap_empty(HeapManeger_p theHeapManeger)
{
	return theHeapManeger->size == 0;
}

/*heap_full*/
bool heap_full(HeapManeger_p theHeapManeger)
{
	return theHeapManeger->size == theHeapManeger->capacity - 1;
}

/*insert_heap
	调整插入*/
void insert_heap(HeapManeger_p theHeapManeger, collect_table data)
{
	if (!heap_full(theHeapManeger))
	{
		int i = 0;
		i = ++theHeapManeger->size; //记录当前元素数量
		for (; theHeapManeger->MaxHeap[i / 2].number < data.number; i /= 2) //插入的数放到合适的位置
		{
			theHeapManeger->MaxHeap[i] = theHeapManeger->MaxHeap[i / 2];
		}
		theHeapManeger->MaxHeap[i] = data;
	}
	return;
}

/*delete_heap
	调整删除*/
bool delete_heap(HeapManeger_p theHeapManeger, collect_table *data)
{
	if (!(heap_empty(theHeapManeger))) //不为空 说明至少有堆顶
	{
		int parent, child;
		collect_table tmp;
		*data = theHeapManeger->MaxHeap[1];//记录堆顶
		theHeapManeger->MaxHeap[1] = theHeapManeger->MaxHeap[theHeapManeger->size--];//把最后一个给删除，给到堆顶；
		for (parent = 1; parent * 2 <= theHeapManeger->size; parent = child) //如果有孩子
		{
			child = parent * 2; //记录左孩子
			if (child < theHeapManeger->size && \
			        theHeapManeger->MaxHeap[child].number < theHeapManeger->MaxHeap[child + 1].number)
			{
				child++;//记录最大的孩子下标
			}
			if (theHeapManeger->MaxHeap[parent].number < theHeapManeger->MaxHeap[child].number)
			{
				tmp = theHeapManeger->MaxHeap[parent];
				theHeapManeger->MaxHeap[parent] = theHeapManeger->MaxHeap[child];
				theHeapManeger->MaxHeap[child] = tmp;
			}
			else
				break;
		}
		return 1;
	}
	return 0;
}

/*adjust_heap
	调整堆*/
int adjust_heap(HeapManeger_p theHeapManeger)
{
	if (!heap_empty(theHeapManeger))
	{
		for (int k = theHeapManeger->size / 2; k > 0; k--)
		{
			int parent, child;
			for (parent = k; parent * 2 <= theHeapManeger->size; parent = child)
			{
				child = parent * 2;
				if (child < theHeapManeger->size && \
				        theHeapManeger->MaxHeap[child].number < theHeapManeger->MaxHeap[child + 1].number)
				{
					child++;
				}
				if (theHeapManeger->MaxHeap[parent].number < theHeapManeger->MaxHeap[child].number)
				{
					collect_table tmp;
					tmp = theHeapManeger->MaxHeap[parent];
					theHeapManeger->MaxHeap[parent] = theHeapManeger->MaxHeap[child];
					theHeapManeger->MaxHeap[child] = tmp;
				}
				else
					break;
			}
		}
		return 1;
	}
	return 0;
}



/*推送*/
void tuisong(char * train_num)
{
	FILE* fp = NULL;
	fp = fopen("../db/信息收集表.txt", "r");
	if (fp == NULL)
	{
		printf("还没有信息\n");
		return;
	}
	collect_table col;
	while (fread(&col, sizeof(col), 1, fp) == 1)
	{
		if (strcmp(col.train_num, train_num) == 0)
		{
			printf("send the 推送 to %s\n", col.info_id);
		}
	}
	fclose(fp);
}

/*购票*/
bool buy_tickts(char* info_id)
{
	char train_num[10] = "";
	FILE* cfp = NULL;
	FILE* ufp = NULL;
	FILE* buyfp = NULL;
	cfp = fopen("../db/车次信息.txt", "r+");
	ufp = fopen("../db/用户信息.txt", "r+");
	if (cfp == NULL)
	{
		printf("暂未发车信息\n");
		return 0;
	}
	printf("请输入你的车次号\n");
	scanf("%s", train_num);
	Train tmp;
	while (fread(&tmp, sizeof(tmp), 1, cfp) == 1)
	{
		if (strcmp(tmp.train_num, train_num) == 0)
		{
			if (tmp.ticket_mount > 0) //还有票
			{
				printf("票充足，是否购买：1 0\n");
				int op;
				scanf("%d", &op);
				if (!op)
				{
					fclose(cfp);
					fclose(ufp);
					printf("购买失败\n");
					return 0;
				}

				User utmp;
				while (fread(&utmp, sizeof(User), 1, ufp) == 1)
				{
					if (strcmp(utmp.info_id, info_id) == 0)
					{
						if (utmp.asset - tmp.price < 0)
						{
							printf("余额不足\n");
							fclose(cfp);
							fclose(ufp);
							printf("购买失败\n");
							return 0;
						}

						Ticket* myticket = malloc(sizeof(Ticket));
						tmp.ticket_mount--;
						(myticket->train) = tmp;
						char str[32] = "";
						sprintf(str, "%d", utmp.id);
						sprintf(myticket->number, "%s%s", str, tmp.train_num);
						strcpy(myticket->name, utmp.name);
						strcpy(myticket->info_id, utmp.info_id);
						strcpy(myticket->train_num, tmp.train_num);

						char user_buy_file[30] = "";
						sprintf(user_buy_file, "%s%s%s", "../db/", info_id, ".txt");
						buyfp = fopen(user_buy_file, "r+");
						if (buyfp == NULL)
						{
							buyfp = fopen(user_buy_file, "w");
							fwrite(myticket, sizeof(Ticket), 1, buyfp);
							fclose(buyfp);
						}
						else
						{
							Ticket tic;
							while (fread(&tic, sizeof(Ticket), 1, buyfp) == 1)
							{
								if (strcmp(tic.train_num, myticket->train_num) == 0 && \
								        compare_time(tic.train.departure_time, myticket->train.departure_time) == 2)
								{
									printf("不可重复购买\n");
									fclose(cfp);
									fclose(ufp);
									fclose(buyfp);
									printf("购买失败\n");
									return 0;
								}
							}
							fclose(buyfp);
							buyfp = fopen(user_buy_file, "r+");
							fwrite(myticket, sizeof(Ticket), 1, buyfp);
							fclose(buyfp);
						}

						utmp.asset = utmp.asset - tmp.price;

						fseek(ufp, -sizeof(utmp), SEEK_CUR);
						fwrite(&utmp, sizeof(utmp), 1, ufp);

						fseek(cfp, -sizeof(Train), SEEK_CUR);
						fwrite(&tmp, sizeof(tmp), 1, cfp);

						fclose(cfp);
						fclose(ufp);
						printf("购买成功\n");
						FILE* fp = NULL;
						fp = fopen(user_buy_file, "r");

						HeapManeger_p theHeapManeger = init_heap(100);
						int i = 1;
						Ticket temp;
						collect_table col;
						int flag = 0;
						while (fread(&temp, sizeof(Ticket), 1, fp) == 1)
						{
							for (int i = 1; i <= theHeapManeger->size; ++i)
							{
								if (strcmp(temp.train_num, theHeapManeger->MaxHeap[i].train_num) == 0)
								{
									flag = 1;
									theHeapManeger->MaxHeap[i].number++;
									adjust_heap(theHeapManeger);
								}
							}
							if (!flag)
							{
								strcpy(col.info_id, info_id);
								strcpy(col.train_num, train_num);
								col.number = 1;
								insert_heap(theHeapManeger, col);
							}
						}
						delete_heap(theHeapManeger, &col);

						//信息收集
						FILE* collect_table_fp = NULL;
						collect_table_fp = fopen("../db/信息收集表.txt", "r+");

						if (collect_table_fp == NULL)
						{
							collect_table_fp = fopen("../db/信息收集表.txt", "w");
							fwrite(&col, sizeof(collect_table), 1, collect_table_fp);
							fclose(collect_table_fp);
							return 1;
						}

						collect_table the_tmp;
						flag = 0;
						while (fread(&the_tmp, sizeof(collect_table), 1, collect_table_fp) == 1)
						{
							if (strcmp(the_tmp.info_id, info_id) == 0)
							{
								flag = 1;
								fseek(collect_table_fp, -sizeof(collect_table), SEEK_CUR);
								fwrite(&col, sizeof(col), 1, collect_table_fp);
								fclose(collect_table_fp);
							}
						}
						if (!flag)
						{
							fclose(collect_table_fp);
							collect_table_fp = fopen("../db/信息收集表.txt", "r+");
							fwrite(&col, sizeof(col), 1, collect_table_fp);
							fclose(collect_table_fp);
						}
						return 1;
					}
				}
			}
		}
	}
	printf("没有该车\n");
	return 0;

}

/*展示购票信息*/
void show_ticket(Ticket* tick)
{
	printf("票面number：%s\n", tick->number);
	printf("用户id:%d\n", tick->id);
	printf("用户姓名：%s\n", tick->name);
	printf("用户身份证：%s\n", tick->info_id);
	printf("车次号：%s\n", tick->train_num);
	printf("出发地：%s\n", tick->train.departure_place);
	printf("目的地：%s\n", tick->train.destination);
	printf("出发时间：%d/%d/%d/%d/%d\n", tick->train.departure_time.year, tick->train.departure_time.month, \
	       tick->train.departure_time.day, tick->train.departure_time.shi, \
	       tick->train.departure_time.fen);
	printf("出发时间：%d/%d/%d/%d/%d\n", tick->train.using_time.year, tick->train.using_time.month, \
	       tick->train.using_time.day, tick->train.using_time.shi, \
	       tick->train.using_time.fen);
	printf("票价：%.2f\n", tick->train.price);
	printf("\n");
}
void show_ticket_info(char* info_id)
{
	FILE* fp = NULL;
	char user_buy_file[30] = "";
	sprintf(user_buy_file, "%s%s%s", "../db/", info_id, ".txt");
	fp = fopen(user_buy_file, "r");
	if (fp == NULL)
	{
		printf("没有记录\n");
		return;
	}


	Time now_time;
	time_t ptime;
	struct tm *p;

	time(&ptime);
	p = gmtime(&ptime);

	printf("%d/%d/%d", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
	printf(" %d:%d:%d\n", p->tm_hour, p->tm_min, p->tm_sec);
	now_time.year = 1900 + p->tm_year;
	now_time.month = 1 + p->tm_mon;
	now_time.day = p->tm_mday;
	now_time.shi = p->tm_hour;
	now_time.fen = p->tm_min;

	int op = 0;
	printf("历史记录：1 未发车 2\n");
	scanf("%d", &op);

	if (op == 1)
	{
		Ticket tmp;
		while (fread(&tmp, sizeof(Ticket), 1, fp) == 1)
		{
			show_ticket(&tmp);
		}
	}
	else
	{
		Ticket tmp;
		while (fread(&tmp, sizeof(Ticket), 1, fp) == 1)
		{
			if (compare_time(tmp.train.departure_time, now_time) == 1)
			{
				show_ticket(&tmp);
			}
		}
	}
	fclose(fp);
}


/*退票*/
bool reback_ticket(char* info_id)
{
	/*从文件中删除*/

	FILE* fp = NULL;
	FILE* cfp = NULL;
	FILE* ufp = NULL;

	char user_buy_file[30] = "";
	sprintf(user_buy_file, "%s%s%s", "../db/", info_id, ".txt");
	fp = fopen(user_buy_file, "r+");
	FILE* fp4 = NULL;

	if (fp == NULL)
	{
		printf("没有记录\n");
		return 0;
	}

	Time now_time;
	time_t ptime;
	struct tm *p;

	time(&ptime);
	p = gmtime(&ptime);

	printf("%d/%d/%d", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
	printf(" %d:%d:%d\n", p->tm_hour, p->tm_min, p->tm_sec);
	now_time.year = 1900 + p->tm_year;
	now_time.month = 1 + p->tm_mon;
	now_time.day = p->tm_mday;
	now_time.shi = p->tm_hour;
	now_time.fen = p->tm_min;

	Ticket tmp;
	char train_num[30] = "";
	Time flag_time;
	printf("输入你的车次号\n");
	scanf("%s", train_num);

	printf("输入你的发车时间\n");
	scanf("%d %d %d %d %d", &flag_time.year, &flag_time.month, &flag_time.day, &flag_time.shi, &flag_time.fen);

	if (compare_time(flag_time, now_time) == 0 || compare_time(flag_time, now_time) == 2)
	{
		printf("该车票显示列车已经发车了，不能退\n");
		fclose(fp);
		return 0;
	}
	while (fread(&tmp, sizeof(tmp), 1, fp) == 1)
	{
		if (compare_time(flag_time, now_time) == 1 && strcmp(train_num, tmp.train_num) == 0)
		{
			printf("找到该车票\n");

			//用户信息表 余额加price
			ufp = fopen("../db/用户信息.txt", "r");
			FILE* fp2 = NULL;
			User user1;
			fp2 = fopen("../db/2.txt", "w");
			while (fread(&user1, sizeof(user1), 1, ufp) == 1)
			{
				if (strcmp(user1.info_id, info_id) == 0)
				{
					user1.asset = user1.asset + tmp.train.price;
				}
				fwrite(&user1, sizeof(user1), 1, fp2);
			}
			fclose(ufp);
			fclose(fp2);
			remove("../db/用户信息.txt");
			rename("../db/2.txt", "../db/用户信息.txt");

			//车次信息表 余票加1
			cfp = fopen("../db/车次信息.txt", "r");
			FILE* fp3 = NULL;
			Train train1;
			fp3 = fopen("../db/2.txt", "w");
			while (fread(&train1, sizeof(train1), 1, cfp) == 1)
			{
				if (strcmp(train1.train_num, train_num) == 0)
				{
					train1.ticket_mount = train1.ticket_mount + 1;
				}
				fwrite(&train1, sizeof(train1), 1, fp3);
			}
			fclose(cfp);
			fclose(fp3);
			remove("../db/车次信息.txt");
			rename("../db/2.txt", "../db/车次信息.txt");

			//个人购票表 删除该记录
			Ticket ticket1;
			fp4 = fopen("../db/2.txt", "w");
			while (fread(&ticket1, sizeof(ticket1), 1, fp) == 1)
			{
				if (strcmp(ticket1.train_num, train_num) == 0)
				{
					continue;
				}
				fwrite(&ticket1, sizeof(ticket1), 1, fp4);
			}
			fclose(fp);
			fclose(fp4);
			remove(user_buy_file);
			rename("../db/2.txt", user_buy_file);


		}
	}

}

int main()
{
	int op = 1;
	int login_flag = 0;
	int is_super = 0;
	char info_id[20];
	while (op)
	{
		if (login_flag == 0)
		{
			printf("----------------1 注册-----------------\n");
			printf("----------------2 登陆-----------------\n");
			printf("----------------0 退出-----------------\n");
		}
		else if (is_super == 0)
		{
			//-------------------个人---------------------
			printf("----------------1 注销-----------------\n");
			printf("----------------2 查看个人信息-----------------\n");
			printf("----------------3 修改个人信息-----------------\n");
			printf("----------------4 查找车次-----------------\n");//双向链表提取文件信息
			printf("----------------4.1 排序（时间）-----------------\n");//二叉树 中序遍历
			printf("----------------4.2 排序（价格将序）-----------------\n");//快速排序
			printf("----------------4.3 排序（余票升序）-----------------\n");//选择排序
			printf("----------------5 购票-----------------\n");//个人购票表->信息收集表
			printf("----------------6 退票-----------------\n");//从表中删除
			printf("----------------7 查看购票信息-----------------\n");//筛选比今天00：00往后的
			printf("----------------0 退出-----------------\n");//
		}
		else
		{
			//--------------------管理员-------------------
			printf("----------------1 增加车次-----------------\n");//遍历查找显示
			printf("----------------2 删除车次-----------------\n");//
			printf("----------------3 修改车次-----------------\n");//哈夫曼，选出最多的
			printf("----------------3.1 推送-----------------\n");//遍历个人购票表，
			printf("----------------4 查找车次-----------------\n");//双向链表提取文件信息
			printf("----------------4.1 排序（时间）-----------------\n");//二叉树 中序遍历
			printf("----------------4.2 排序（价格将序）-----------------\n");//快速排序
			printf("----------------4.3 排序（余票升序）-----------------\n");//选择排序

			printf("----------------0 退出-----------------\n");
		}
		printf("输入你的选择：");
		scanf("%d", &op);
		if (login_flag == 0)
		{
			if (op == 1)
			{
				if (sign_up(&super_num, &user_num))
				{
					printf("注册成功\n");
					continue;
				}
				else
				{
					printf("注册失败\n");
					continue;
				}
			}
			else if (op == 2)
			{
				printf("输入身份号：\n");
				scanf("%s", info_id);
				printf("是否是管理员 1 0\n");
				scanf("%d", &is_super);
				if (is_super)
				{
					login_flag = super_sign_in(info_id);
				}
				else
					login_flag = sign_in(info_id);
				continue;
			}
		}
		else if (is_super == 0)
		{
			char train_num[6];
			char departure_place[100];
			char destination[32];
			Time departure_time;
			Time using_time;
			switch (op)
			{
			case 1://注销
				log_out(info_id);
				login_flag = 0;
				break;
			case 2://查看个人信息
				look_my(info_id);
				break;
			case 3://修改个人信息
				change_my(info_id);
				break;
			case 4://查找车次--目的地
				printf("你的目的地\n");
				scanf("%s", destination);
				sel_train(destination);
				break;
			case 5://购票
				buy_tickts( info_id);
				break;
			case 6://退票
				reback_ticket( info_id);
				break;
			case 7://查看购票信息-未发车，历史记录
				show_ticket_info(info_id);
				break;
			case 0://退出
				break;
			}
		}
		else
		{
			char train_num[6];
			char departure_place[100];
			char destination[32];
			Time departure_time;
			Time using_time;
			int ticket_mount;
			float price;
			int op1 = 0;
			switch (op)
			{
			case 1://增加车次--车次 时间
				while (1)
				{
					printf("车次num：\n");
					scanf("%s", train_num);
					printf("出发地：\n");
					scanf("%s", departure_place);
					printf("目的地：\n");
					scanf("%s", destination);
					printf("出发时间：");
					scanf("%d %d %d %d %d", &departure_time.year, &departure_time.month, \
					      &departure_time.day, &departure_time.shi, &departure_time.fen);
					printf("到达时间：");
					scanf("%d %d %d %d %d", &using_time.year, &using_time.month, \
					      &using_time.day, &using_time.shi, &using_time.fen);
					printf("票的数量\n" );
					scanf("%d", &ticket_mount);

					printf("票价\n");
					scanf("%f", &price);

					add_train(new_train(train_num, departure_place, \
					                    destination, departure_time, using_time, \
					                    ticket_mount, price));
					printf("继续增加？1 0\n");
					scanf("%d", &op1);
					if (!op1)
					{
						break;
					}
				}
				break;
			case 2://删除车次--车次 时间
				printf("车次num%d：\n", op);
				scanf("%s", train_num);
				del_train(train_num);
				break;
			case 3://修改车次--车次 时间
				printf("车次num：\n");
				scanf("%s", train_num);
				change_train(train_num);
				break;
			case 4://查找车次--目的地
				printf("你的目的地\n");
				scanf("%s", destination);
				sel_train(destination);
				break;
			case 5://推送

				break;
			case 0://退出
				break;
			}
		}
	}

}

