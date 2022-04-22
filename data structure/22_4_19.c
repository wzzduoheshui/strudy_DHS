#define  _CRT_SECURE_NO_WARNINGS
#include "22_4_19.h"//��ͷ�ļ�

void SLprint(SL* ps)//��ӡ���ݣ�������
{
	//���ṹ��ָ���Ƿ�Ϊ�գ�����ʽ��̣�
	assert(ps != NULL);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)//���ռ�
{
	//���ṹ��ָ���Ƿ�Ϊ�գ�����ʽ��̣�
	assert(ps != NULL);
	 
	//��������ռ䣬��������
	if (ps->size == ps->capacity)//�ռ������
	{
		//int newCapacity = ps->capacity * 2;//��������ݱ���û����ȷ�Ĵ�
		//��������տ�ʼsize=capacity=0?����ô���أ�������������������
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//�����4Ҳû����ȷ��
		SLDataType* tmp = (SLDataType*)/*��realloc�ķ���ֵ����ǿ������ת��*/realloc(ps->a, newCapacity * sizeof(SLDataType));//����
		if (tmp == NULL)//���һ��
		{
			printf("realloc fail\n");
			exit(-1);//ֱ�ӽ�������
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}


void SLPushBack(SL* ps, SLDataType x)//β��
{
	//SLCheckCapacity(ps);//���ռ�

	//ps->a[ps->size] = x;//��β���������ݣ��±�������Ϊ��Ч���ݵĸ���
	//ps->size++;//��Ч���ݸ�������

	SLInsert(ps, ps->size, x);//��ĳ��λ�ý��в���
}

void SLPushFront(SL* ps, SLDataType x)//ͷ��
{
	SLCheckCapacity(ps);//���ռ�

	////Ų������,�Ӻ���ǰŲ
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	////��������
	//ps->a[0] = x;//��������
	//ps->size++;

	SLInsert(ps, 0, x);//��ĳ��λ�ý��в���
}

void SLPopBack(SL* ps)//βɾ
{
	////���size
	//if (ps->size == 0)//����һ��ļ��
	//{
	//	printf("SeqList is empty\n");
	//	return;
	//}
	//else
	//ps->size--;//size--�Ϳ���
	
	////������飨���ԣ�
	//assert(ps->size > 0);//Ϊ��û�£�Ϊ�ٱ���
	//ps->size--;//size--�Ϳ���

	SLErase(ps, ps->size-1);//�����һ��λ��ɾ��(βɾ)

}

void SLPopFront(SL* ps)//ͷɾ
{
	////���size
	//assert(ps->size > 0);
	////Ų�����ݣ���ǰ����Ų
	//int begin = 1;
	//while (begin < ps->size)
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	begin++;
	//}
	//ps->size--;//��Ч���ݸ�����һ

	SLErase(ps, 0);//�ڵ�1��λ��ɾ����ͷɾ��

}

void SLInsert(SL* ps, int pos, SLDataType x)//��ĳ��λ�ý��в���
{
	assert(ps);//���ṹ��ָ��
	assert(pos >= 0 && pos <= ps->size);//���pos��˳�������ķ�Χ֮��
	SLCheckCapacity(ps);//���ռ�

	//pos��ʼ���Ӻ���ǰŲ
	int end = ps->size;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;//����
	ps->size++;
}

void SLErase(SL* ps, int pos)//��ĳ��λ��ɾ��
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);//˳�����˿�

	//��pos����ǰ����Ų
	int begin = pos;
	while (begin < ps->size-1)
	{
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x)//����
{
	assert(ps);

	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;//û���ҵ�
}

int SLModify(SL* ps, int pos, SLDataType x)//�޸�
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	
	ps->a[pos] = x;
}


