#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
//��Ϸ�˵�
void menu()
{
	printf("*************************\n");
	printf("****1,��ʼ��Ϸ.**********\n");
	printf("****2.������Ϸ.**********\n");
	printf("*************************\n");
}
//��Ϸ���̺���
void game()
{
	//������������
	char board[Row][Col] = { 0 };
	//��ʼ������Ϊȫ�ո�
	Intboard(board, Row, Col);
	//��ӡ����
	printboard(board, Row,Col);
	//�������
	//playermove(board, Row, Col);
	
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
			printf("������\n");
			game();
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