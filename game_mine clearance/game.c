#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"



//��ʼ������
void init_board(char arr[Rows][Cols], int rows, int cols, char str)
{
	int r = 0;
	int c = 0;
	if (str=='m')//��ʼ����̨����--'0'
	{
		for (r = 0; r < Rows; r++)
		{
			for (c = 0; c < Cols; c++)
			{
				arr[r][c] = '0';
			}
		}
	}
	else if (str == 's')//��ʼ���������--'*'
	{
		for (r = 0; r < Rows; r++)
		{
			for (c = 0; c < Cols; c++)
			{
				arr[r][c] = '*';
			}
		}
	}

}



//��������
void mine_board(char arr[Rows][Cols],int row,int col)
{
	int x = 0;
	int y = 0;
	int i = 0;//���ù����׵�����
	for (i = 0;i<10;)//ע�������Ǹ���ѭ��
	{
		x = rand() % Row;//�׵�����λ��
		y = rand() % Col;
		if (arr[x+1][y+1] == '0')
		{
			arr[x+1][y+1] = '1';
			i++;//����һ����i++
		}
	}
}



//��ӡ�������
void print_show(char arr[Rows][Cols], int row, int col)
{
	//��ӡ���������Լ��ָ���
	int i = 1;
	for (i = 1; i <= Row; i++)//��ӡ������̵ĺ�������
	{
		if (i == 1)//��һ������
			printf("    %d |", i);
		else if (i > 1 && i < Row)//�м�������
			printf(" %d |", i);
		else if (i == 9)//��������
			printf(" %d \n", i);
	}
	i = 1;
	for (i = 1; i <= Row; i++)//��ӡ������̵ĵ�һ�зָ���
	{
		if (i == 1)//��һ������
			printf("   ---|");
		else if (i > 1 && i < Row)//�м�������
			printf("---|");
		else if (i == 9)//��������
			printf("---\n");
	}
	int r = 0;
	int c = 0;
	for (r = 0; r < Row; r++)
	{
		//��ӡ�����Լ���������
		for (c = 0; c < Col; c++)
		{
			if (c == 0)
			{
				printf(" %d  %c |", r + 1, arr[r][c]);
			}
			else if (c > 0 && c < Col-1)
			{
				printf(" %c |", arr[r][c]);
			}
			else if (c == Col-1)
			{
				printf(" %c \n", arr[r][c]);
			}
		}
		c = 0;
		if (r == Row - 1)//����ӡ���һ�зָ���
			break;
		//��ӡ�ָ���
		for (c = 0; c < Col; c++)
		{
			if (c == 0)
			{
				printf("   ---|");
			}
			else if (c > 0 && c < Col - 1)
			{
				printf("---|");
			}
			else if (c == Col - 1)
			{
				printf("---\n");
			}
		}
	}
}
