#include "game.h"
#define  _CRT_SECURE_NO_WARNINGS

//��ʼ������Ϊȫ�ո�
void Intboard(char board[Row][Col], int row, int col)
{
	int r = 0;
	for (r = 0; r < row; r++);
	{
		int c = 0;
		for (c = 0; c < col; c++)
		{
			board[r][c] = ' ';
		}
	}
}

//��ӡ����
void printboard(char board[Row][Col],int row,int col)
{
	int r = 0;//��
	for (r = 0; r < Row; r++)//��ӡ������
	{
		int c = 0;//��
		for (c = 0; c < Col; c++)//������ȷ��ÿһ�д�ӡ���ٸ�
		{
			if (c < Col - 1)
				printf(" %c  |", board[r][c]);//��ӡ�����һ�����������Ԫ��
			else
				printf(" %c \n", board[r][c]);//��ӡ���һ��Ԫ��
		}
		if (r < Row - 1)//���һ�в���ӡ�ָ���
		{
			//��ӡ�ָ���
			for (c = 0; c < Col; c++)
			{
				if (c < Col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}

//�������
void plarermove(char board[Row][Col], int row, int col)
{

}