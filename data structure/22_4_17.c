#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ʧ������
//����nums������0��n������������������ȱ��һ����
//���д�����ҳ��Ǹ�ȱʧ��������
//���а취��O(n)ʱ���������
int miss(int* nums, int num)
{
	int x = 0;
	for (int i = 0; i < num; ++i)
	{
		x = x^ nums[i];
	}
	for (int j = 0; j < num; ++j)
	{
		x = x ^ j;
	}
	return x;
}