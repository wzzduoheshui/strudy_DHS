#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	system("cls");
	int number;
	int gn;//��Ų²������
	number = rand()%100+1;//Ϊnumber����һ�������
	printf("׼��������");
	do
	{
		printf("���������µ����֣�");
		scanf("%d", &gn);
		if (gn > number)
		{
			printf("\n�´���Ŷ������һ�Σ�\n");
		}
		else if (gn < number)
		{
			printf("\n��С��Ŷ������һ�Σ�\n");
		}
		else
		{
			system("cls");
			printf("\n��ϲ��¶��ˣ�\n");
			break;
		}

	} while (1);
}
void menu()
{
	printf("*******��������Ϸ*******\n");
	printf("************************\n");
	printf("**1.��ʼ��Ϸ************\n");
	printf("************************\n");
	printf("**2.�˳���Ϸ************\n");
	printf("************************\n");
}
int main()
{
	srand((unsigned)time(NULL));//Ϊrand����һ���������
n:
	menu();//��ӡ��Ϸ�˵�
	int a;//���ѡ��
	printf("����������ѡ��");
	scanf("%d", &a);//����ѡ��
	do
	{
		if (a == 1)
		{
			m:
			game();
			int x;
			printf("��Ҫ������Ϸ��\n");
			printf("�����밴1��\n");
			printf("���ز˵��밴2��\n");
			printf("����������ѡ��");
			o:
			scanf("%d", &x);
			if (x == 1)
				goto m;
			else if (x == 2)
			{
				system("cls");
				goto n;
			}
			else
			{
				printf("���������룺");
				goto o;
			}
		}
		else if (a == 2)
		{
			printf("��ӭ�´�������\n");
			break;
		}
		else
		{
			system("cls");
			printf("����������������룡\n");
			goto n;
		}
	} while (1);
	return 0;
}