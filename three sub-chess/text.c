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
	char ret = 0;
	//������������
	char board[Row][Col] = {0};
	//��ʼ������Ϊȫ�ո�
	Intboard(board, Row, Col);
	//��ӡ����
	printboard(board, Row,Col);
	//ѭ������
	while (1)
	{
		//�������
		playermove(board, Row, Col);
		//��ӡ����
		printboard(board, Row, Col);
		//�ж���Ӯ
		ret = win_game(board, Row, Col);
		if (ret == '*')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("��ϲ��Ӯ�õ���Ϸ��\n");
			break;
		}
		else if (ret == '#')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("���ź����ٽ�������\n");
			break;
		}
		else if (ret == 'Q')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("ƽ���ˡ�\n");
			break;
		}
		//ϵͳ����
		computmove(board, Row, Col);
		//����
		system("cls");
		printf("�������壺\n");
		//��ӡ����
		printboard(board, Row, Col);
		//�ж���Ӯ
		ret = win_game(board, Row, Col);
		if (ret == '*')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("��ϲ��Ӯ�õ���Ϸ��\n");
			break;
		}
		else if (ret == '#')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("���ź����ٽ�������\n");
			break;
		}
		else if (ret == 'Q')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("ƽ���ˡ�\n");
			break;
		}
	}


}
//���������������߼�
void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("����������ѡ�");
		scanf("%d", &input);
		system("cls");
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
		default:
		{
			printf("ѡ���������������:\n");
			input = 1;
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