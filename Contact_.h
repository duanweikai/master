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


//�������Ա����䡢�绰��סַ
typedef struct person {
	char name[SIZE/4];
	char sex; 
	int age;
	char telphone[SIZE/8];   //key
	char address[SIZE];
}person_t;

typedef struct contact {
	int size; //��ǰ����
	int cap; //������
	person_t persons[TOTAL];
}contact_t;

void Menu();
void ADD(contact_t* ct);
void Show(contact_t* ct);
void Del(contact_t* ct);
void Search(contact_t* ct);
void Clear(contact_t* ct);
void Mod(contact_t* ct);
void Sort(contact_t* ct);

#endif
