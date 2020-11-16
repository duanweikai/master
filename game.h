#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<time.h>
#include<windows.h>

#define ROW 3
#define COL 3

#define P_COLOR 'X'
#define C_COLOR 'O'

void Menu();                                                  //菜单显示函数
void DrawBoard(char board[][COL], int row, int col);          //棋盘显示函数
void PlayMove(char board[][COL], int row, int col);           //玩家走
void ComputerMove(char board[][COL], int row, int col);       //电脑走	
char Judge(char board[][COL], int row, int col);              //判断哪一方胜出函数
void Game();                                                  //主游戏函数

#pragma warning(disable:4996)

#endif