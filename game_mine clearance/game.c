#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"



//��ʼ������
void init_board(char arr[Rows][Cols], int rows, int cols, char str)
{
	int r = 0;
	int c = 0;
	for (r = 0; r < Rows; r++)
	{
		for (c = 0; c < Cols; c++)
		{
			arr[r][c] = str;
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
	printf("---------------ɨ����Ϸ---------------\n\n");
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
	for (r = 1; r <= Row; r++)
	{
		//��ӡ�����Լ���������
		for (c = 1; c <= Col; c++)
		{
			if (c == 1)
			{
				printf(" %d  %c |", r , arr[r][c]);
			}
			else if (c > 1 && c < Col)
			{
				printf(" %c |", arr[r][c]);
			}
			else if (c == Col)
			{
				printf(" %c \n", arr[r][c]);
			}
		}
		c = 0;
		if (r == Row)//����ӡ���һ�зָ���
			break;
		//��ӡ�ָ���
		for (c = 1; c <= Col; c++)
		{
			if (c == 1)
			{
				printf("   ---|");
			}
			else if (c > 0 && c < Col)
			{
				printf("---|");
			}
			else if (c == Col)
			{
				printf("---\n");
			}
		}
	}
}


//ͳ����Χ�м����׷���1
int get_mine(char arr[Rows][Cols], int x, int y)
{
	int r = x - 1;
	int c = y - 1;
	int m = 0;
	for (r = x - 1; r <= x + 1; r++)
	{
		for (c = y - 1; c <= y + 1; c++)
		{
			if (arr[r][c] == '1')
			{
				m++;
			}
		}
	}
	return m;
}
//ͳ����Χ�м����׷�����2
//int get_mine(char arr[Rows][Cols], int x, int y)
//{
//	return arr[x - 1][y - 1] + arr[x - 1][y] + arr[x - 1][y + 1] + arr[x][y - 1] +
//		arr[x][y + 1] + arr[x + 1][y - 1] + arr[x + 1][y] + arr[x + 1][y + 1]
//		- 8 * '0';
//}
//��������������������Ƚ�
void play_board(char arr1 [Rows][Cols], char arr2 [Rows][Cols], int row, int col)
{
	int x = 1;
	int y = 0;//������������
	int win = 0;
	while (win<Row*Col-10)
	{
		printf("����������:");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (arr1[x][y] == '1')
			{
				printf("������λ����������ɨ��ʧ�ܣ���Ϸ������\n");
				return 0;
			}
			else
			{
				system("cls");//������Ļ
				//���װ汾
				//print_show(arr1, Rows, Cols);
				printf("��λ�ò����ף���Ϸ������\n");
				//ͳ����Χ�м�����
				//�׵ĸ���
				int count = get_mine(arr1, x, y);
				arr2[x][y] = count + '0';
				print_show(arr2, Rows, Cols);
				win++;
			}
		}
		else
		{
			printf("�����겻���ڣ����������룡\n");
		}
	}
	if (win == Row * Col - 10)
	{
		printf("��ϲ��Ӯ����Ϸ��\n");
		print_show(arr1, Rows, Cols);
	}
}