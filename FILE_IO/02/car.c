#include <stdio.h>
#include <errno.h>
#include <time.h>
#include <string.h>
typedef struct
{
	char time[128];
    char num[32];
    char color[10];
    char username[32];
}car;

int main()
{
    FILE* fp=fopen("car.txt","w");

    car car1;
    char buf[1024];
    fprintf(stdin,"请输入您的车辆信息：");

    /*时间*/
    fscanf(stdin,"%s %s %s",car1.num,car1.color,car1.username);
    time_t s=time((time_t*)NULL);
    strcpy(car1.time,ctime(&s));


    fprintf(fp,"时间：%s,车牌号：%s，颜色：%s,车主姓名：%s",car1.time,car1.num,car1.color,car1.username);
    fclose(fp);


    fp = fopen("car.txt","r");
    fscanf(fp,"时间：%s,车牌号：%s，颜色：%s,车主姓名：%s",car1.time,car1.num,car1.color,car1.username);

    sprintf(buf,"时间：%s,车牌号：%s，颜色：%s,车主姓名：%s",car1.time,car1.num,car1.color,car1.username);

    fputs(buf,stdout);
    fclose(fp);
    return 0;
}

