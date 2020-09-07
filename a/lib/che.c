#include "../inc/main.h"


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
				else if(a.fen>b.fen)
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
						scanf("%d",&yes_no);
						if(yes_no)
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

