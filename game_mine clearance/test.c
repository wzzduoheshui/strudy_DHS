#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("****1.��ʼ��Ϸ*******\n");
	printf("****2.������Ϸ*******\n");
	printf("*********************\n");
}
//ɨ����Ϸ��ʵ��
void game()
{
	char min = 'm';//��̨����
	char sho = 's';//չʾ����
	//ʵ��ɨ����Ϸ
	char mine[Rows][Cols] = {0};//������̨�ռ�
	char show[Rows][Cols] = {0};//����չʾ�ռ�
	//��ʼ������
	init_board(mine, Rows, Cols, min);
	init_board(show, Rows, Cols, sho);
	//��������
	mine_board(mine, Rows, Cols);
	//��ӡ�������
	print_show(show, Rows, Cols);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("����������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 2:
			printf("��ӭ�´���������\n");
			input = 0;
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input);
}
int main()
{
	test(); 
	return 0;
}