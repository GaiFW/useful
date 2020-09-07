#include "../inc/main.h"
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
