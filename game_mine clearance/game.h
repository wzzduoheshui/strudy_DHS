#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Row 9
#define Col 9

#define Rows Row+2
#define Cols Col+2

//��ʼ������
void init_board(char arr[Rows][Cols], int rows, int cols,char str);

//��������
void mine_board(char arr[Rows][Cols], int row, int col);

//��ӡ�������
void print_show(char arr[Rows][Cols], int row, int col);