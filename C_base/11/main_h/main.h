
#ifndef __MAIN_H__
#define __MAIN_H__

struct Student
{
	char name[32];
	int age;
	long long num;
	float grade[3];

};

float sum_g(struct Student a);

float avg_g(float (*fa)(struct Student a),struct Student b);

void max_g(struct Student a,struct Student b);
#endif
