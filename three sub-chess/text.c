#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("****1,��ʼ��Ϸ.**********\n");
	printf("****2.������Ϸ.**********\n");
	printf("*************************\n");
}
void game()
{
	//������������
	char board[row][col] = { 0 };
	//��ʼ������Ϊȫ�ո�
	Initboard(board, row, col);
	//��ӡ����
	printboard(board, row,col);
	
}

//���������������߼�
void text()
{
	int input = 0;
	do
	{
		menu();
		printf("����������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("������");
			break;
		}
		case 2:
		{
			printf("��ӭ�´�����");
			input = 0;//����ѭ������е��˳�
			break;
		}
		default :
		{
			printf("ѡ���������������:\n");
			break;
		}
		}

	} while (input);//0���˳�
	
}
int main()
{
	text();

	return 0;
}