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

//玩家输入坐标与雷区做比较
void play_board(char arr1[Rows][Cols], char arr2[Row][Col], int row, int col);

//统计周围有几个雷方法（这个可以放在game.c中）
int get_mine(char arr[Rows][Cols], int x, int y);