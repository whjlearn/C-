#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//ͷ�ļ��İ���


//#pragma once 


//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�����
void PlayerMove(char board[ROW][COL], int row, int col);

//������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж��Ƿ�Ӯ�ñ���
//1���Ӯ�� *
//2����Ӯ�� #
//3ƽ��     Q  ���������������ζ����Ϸ����
// 
//4��Ϸ���� C
char IsWin(char board[ROW][COL], int row, int col);
