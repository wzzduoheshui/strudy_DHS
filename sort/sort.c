#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//��������1
void InsertSort1(int* arr,int n)
{
	int i = 0;
	int j = 0;//
	int k = 0;// Ŀǰ�ŵ���λ��
	int tmp = 0;//��¼���ݣ����ڽ���
	while (k < n)
	{
		for (j = k, i = j; i >= 0; i--)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				j = i;
			}
		}
		k++;
	}
}

void InsertSort2(int* arr, int n)
{
	int end = 1;//[0,end]Ϊ����
	int tmp = 0;//�������
	while (end > 0 && n>1)
	{
		if(arr[end+1])
	}
}

int main()
{
	int arr[10] = { 9,5,8,2,6,3,7,4,1,0 };
	InsertSort2(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d->", arr[i]);
	}
	return 0;
}