#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<time.h>
#include<windows.h>

#define ROW 3
#define COL 3

#define P_COLOR 'X'
#define C_COLOR 'O'

void Menu();                                                  //�˵���ʾ����
void DrawBoard(char board[][COL], int row, int col);          //������ʾ����
void PlayMove(char board[][COL], int row, int col);           //�����
void ComputerMove(char board[][COL], int row, int col);       //������	
char Judge(char board[][COL], int row, int col);              //�ж���һ��ʤ������
void Game();                                                  //����Ϸ����

#pragma warning(disable:4996)

#endif