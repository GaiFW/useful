#include "../inc/main.h"


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
	sprintf(user_buy_file, "%s%s", info_id, ".txt");
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