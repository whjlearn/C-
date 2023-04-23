#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//头文件的包含


//#pragma once 


//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);

//判断是否赢得比赛
//1玩家赢了 *
//2电脑赢了 #
//3平局     Q  上面三种情况都意味着游戏结束
// 
//4游戏继续 C
char IsWin(char board[ROW][COL], int row, int col);
