#define  _CRT_SECURE_NO_WARNINGS

#define Row 3
#define Col 3

#include <stdio.h>

//��ʼ������Ϊȫ�ո�
void Intboard(char board[Row][Col], int row, int col);

//��ӡ����
void printboard(char board[Row][Col], int row, int col);

//�������
void plarermove(char board[Row][Col], int row, int col);