#include "../inc/main.h"

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

