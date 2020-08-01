#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BOOK1 "水浒传"
#define BOOK2 "西游记"
#define BOOK3 "西厢记"
#define BOOK4 "红楼梦"
#define BOOK5 "三国演义"
#define BOOK6 "邯郸记"
struct Book
{
	int numb;
	char name[64];
	char type[32];
	int count;
};

void Add(struct Book *b,int  a);

void Jieshu(struct Book *b,int a);

void Sel(struct Book *b);
void Print(struct Book *b);


#endif
