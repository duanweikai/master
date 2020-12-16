#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#pragma warning(disable:4996)


#define SIZE 128
#define TOTAL 1000


//姓名、性别、年龄、电话、住址
typedef struct person {
	char name[SIZE/4];
	char sex; 
	int age;
	char telphone[SIZE/8];   //key
	char address[SIZE];
}person_t;

typedef struct contact {
	int size; //当前人数
	int cap; //总容量
	person_t persons[TOTAL];
}contact_t;

void Menu();
void ADD(contact_t* ct);
int Isfull(contact_t* ct);
int IsExist(contact_t* ct, const char* telphone);
void Show(contact_t* ct);
#endif
