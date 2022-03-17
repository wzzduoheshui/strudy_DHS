#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Row 9
#define Col 9

#define Rows Row+2
#define Cols Col+2

//初始化棋盘
void init_board(char arr[Rows][Cols], int rows, int cols,char str);

//布置雷区
void mine_board(char arr[Rows][Cols], int row, int col);

//打印玩家棋盘
void print_show(char arr[Rows][Cols], int row, int col);