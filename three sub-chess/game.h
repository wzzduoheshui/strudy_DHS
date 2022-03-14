#define  _CRT_SECURE_NO_WARNINGS

#define Row 3
#define Col 3

#include <stdio.h>

//初始化棋盘为全空格
void Intboard(char board[Row][Col], int row, int col);

//打印棋盘
void printboard(char board[Row][Col], int row, int col);

//玩家下棋
void plarermove(char board[Row][Col], int row, int col);