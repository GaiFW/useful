#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	char name[32];
	int age;
	int num;
	float grade[3];
	
}student;

void sumAndAvg(student a[],int b);
void maxGrade(student a[],int b);


#endif
