#define  _CRT_SECURE_NO_WARNINGS

#define Row 3
#define Col 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��ʼ������Ϊȫ�ո�
void Intboard(char board[Row][Col], int row, int col);

//��ӡ����
void printboard(char board[Row][Col], int row, int col);

//�������
void plarermove(char board[Row][Col], int row, int col);

//ϵͳ����
void computmove(char board[Row][Col], int row, int col);

//�ж���Ӯ
char win_game(char board[Row][Col], int row, int col);