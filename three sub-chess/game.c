#include "game.h"
#define  _CRT_SECURE_NO_WARNINGS

//��ʼ������Ϊȫ�ո�
void Intboard(char board[Row][Col], int row, int col)
{
	int r = 0;
	for (r = 0; r < row; r++)
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
	printf("    0 | 1 | 2 \n");
	for (r = 0; r < Row; r++)//��ӡ������
	{
		int c = 0;//��
		for (c = 0; c < Col; c++)//������ȷ��ÿһ�д�ӡ���ٸ�
		{
			//��ӡ����
			if (c == 0)//��ӡÿ�еĵ�һ��Ԫ��
			{
				printf(" %d ", r);
				printf(" %c |", board[r][c]);
				c++;
			}
			if (c > 0 &&c < Col - 1)
				printf(" %c |", board[r][c]);//��ӡÿ�е��м�Ԫ��
			else
				printf(" %c \n", board[r][c]);//��ӡ���һ��Ԫ��
		}
		if (r < Row - 1)//���һ�в���ӡ�ָ���
		{
			//��ӡ�ָ���
			for (c = 0; c < Col; c++)
			{
				if (c == 0)
				{
					printf("   ---|");
					c++;
				}
				if (c > 0 && c < Col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}

//�������
void playermove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");
	while (1)
	{
		printf("�������������>\n");
		scanf("%d %d", &x, &y);
		if ((0 <= x && x<=row) && (0 <= y && y <= col))
		{
			if (board[x][y]== ' ')
			{
				board[x][y] = '*';
				break;
			}
			else
				printf("���걻ռ�ã����������룡\n");
		}
		else
			printf("�������ݲ����Ϲ涨�����������룡\n");
	}
	
}

//ϵͳ����
void computmove(char board[Row][Col] , int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// �ж���Ӯ
char  win_game(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	//�ж���
	for (x = 0; x < Row; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][2] != ' ')
			return board[x][0];
	}
	//�ж���
	for (x = 0; x < Col; x++)
	{
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[2][x] != ' ')
			return board[0][x];
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[0][2];
	//�ж�ƽ��
	int a = 0;
	for (x = 0; x < Row; x++)
	{
		for (y = 0; y < Col; y++)
		{
			if (board[x][y] != ' ')
				a++;
			else if (board[x][y] == ' ')
				return 'C';
		}
		if (a == 9)
			return 'Q';
	}

}