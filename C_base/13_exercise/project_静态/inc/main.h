#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu 
{
	char name[32];
	int num;
	float grade[3];
};


int yuMax(struct Stu a[],int len);
int shuMax(struct Stu a[],int len);
int waiMax(struct Stu a[],int len);
int sumMax(struct Stu a[],int len);
float sumGrade(struct Stu a);





#endif
