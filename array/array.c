#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	//����-һ����ͬ����Ԫ�صļ���
//	//��ʼ��
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����ȫ��ʼ��
//	int arr2[100] = { 0 };
//	//�ַ��������ʼ��
//	char ch1[] = { 'a','b','c' };
//	//������ASSIC��ֵ��Ϊb��ʼ��
//	char ch2[] = { 'a','98','c' };//Ĭ��Ϊ3��Ԫ��
//	//����д��ʼ����Ԫ�ظ�������Ĭ��Ϊ��ʼ����Ԫ�ظ���
//	//������ʼ����Ϊ���ֵ
//	//��Щ���������ܲ���֧��
//	int arr[10];
//
//}

//д��������ֵ1-100
//int main()
//{
//	int arr[100];
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[100];
//	int i = 0;
//	//����������Ԫ�صĸ���
//	printf("%d\n", sizeof(arr));//400
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	printf("%d\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//
//	return 0;
//}


//һά�������ڴ��еĴ洢
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[1]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n",i, &arr[i]);
	}
	return 0;
}