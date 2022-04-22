#define  _CRT_SECURE_NO_WARNINGS
#include "22_4_19.h"

void TestSeqList1()//
{
	SL sl;//����˳���ı���
	SeqListInit(&sl);//��ʼ��һ��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//��������
	SLprint(&sl);//��ӡ����
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLprint(&sl);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushFront(&sl, 5);
	SLprint(&sl);

}

void TestSeqList2()
{
	SL sl;//����˳���ı���
	SeqListInit(&sl);//��ʼ��һ��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//��������
	SLprint(&sl);//��ӡ����
	SLPopBack(&sl);//βɾ
	SLPopBack(&sl);//βɾ
	SLprint(&sl);//��ӡ����
	SLPopFront(&sl);//ͷɾ
	SLprint(&sl);//��ӡ����
}

void TestSeqList3()
{
	SL sl;//����˳���ı���
	SeqListInit(&sl);//��ʼ��һ��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//��������
	//SLInsert(&sl, 3, 40);//�ڵ�4��λ�ò���40
	//SLInsert(&sl, 0, 40);//�ڵ�1��λ�ò���40�����Դ���ͷ�壬��ͷ���е��ã�
	SLPushFront(&sl, 6);
	SLPushBack(&sl, 6);
	SLprint(&sl);//��ӡ����

	SLErase(&sl, 3);//�ڵ�4��λ��ɾ��
	SLprint(&sl);//��ӡ����
	
	//SLErase(&sl, 0);//�ڵ�1��λ��ɾ����ͷɾ��
	SLPopFront(&sl);//ͷɾ
	SLprint(&sl);//��ӡ����
	
	//SLErase(&sl, 4);//�ڵ�5��λ��ɾ��(βɾ)
	SLPopBack(&sl);//βɾ
	SLprint(&sl);//��ӡ����

}

void TestSeqList4()
{
	SL sl;//����˳���ı���
	SeqListInit(&sl);//��ʼ��һ��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//��������
	SLprint(&sl);//��ӡ����

	//�������ݿ�������
	int x = 0;
	printf("��������Ҫɾ����ֵ��");
	scanf("%d", &x);//ɾ��һ������
	int pos = SLFind(&sl, x);//�����������
	if (pos != -1)//�ҵ���
	{
		SLErase(&sl, pos);//����ɾ��
	}
	SLprint(&sl);//��ӡ����

	int y = 0;
	int z = 0;
	printf("��������Ҫ�޸�ǰ��ֵ��");
	scanf("%d", &y);//�޸�ǰ������
	pos = SLFind(&sl, y);//�����������
	printf("�������޸ĺ��ֵ��");
	scanf("%d", &z);//�޸ĺ������
	SLModify(&sl, pos, z);//�����޸�
	SLprint(&sl);//��ӡ����

}
//int main()
//{
//	//TestSeqList1();//ģ�黯�������
//	//TestSeqList2();//ģ�黯����
//	//TestSeqList3();
//	TestSeqList4();
//	return 0;
//}

void menu()//�˵� 
{
	printf("*************************\n");
	printf("***1.β��       2.ͷ��***\n");
	printf("***3.����       4.ɾ��***\n");
	printf("***5.�޸�       6.��ӡ***\n");
	printf("***-1.�˳�            ***\n");
	printf("*************************\n");
}
int main()
{
	SL sl;// ����˳���
	SeqListInit(&sl);//��ʼ��һ��
	int val, pos;
	int option = -1;
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("������������Ҫ��������ݣ���0������>");
			scanf("%d ", &val);
			while (val != 0)
			{
				SLPushBack(&sl, val);//β��
				scanf("%d ", &val);
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			SLprint(&sl);//��ӡ����
			break;
		case 7:
		case 8:
		default:
			printf("����������������룺");
			break;
		}
	} while (option);
	return 0;
}






