#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�⺯����ϰ

//ʹ��strcpy���������ַ�����ͷ�ļ�Ϊstring.h��

//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";//a n c d e f \0��\0Ϊ0���޷��۲��Ƿ�\0Ҳ������
//	//char arr2[] = { 0 };// 0 0 0 0 0 0 0 0 0
//	char arr3[20] = "xxxxxxxxxxxxxxxx";
//	//��arr1������arr3����
//	strcpy(arr3, arr1);
//	printf("%s", arr3);
//	return 0;
//}

//ʹ��memset�����޸��ַ�����ͷ�ļ�Ϊstring.h��
//�����޸ĵĵ�ַ���޸ĳ�ʲô���޸ļ����ڴ棩
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	//�����ڴ��ʱ�������ֽ�Ϊ��λ
//	//ÿ���ֽڵ����ݶ���һ����
//	printf("%s\n", arr);
//	return 0;
//}





//дһ���������Խ����������α���������

//����bug
//��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//�β�
//int swap(int* pa, int* pb)
//{
//	int c = *pa;
//	*pa = *pb;
//	*pb = c;
//	
//}
//
//int main()
//{
//	int a;
//	int b;
//	//ʵ��
//	scanf("%d %d", &a, &b);
//	printf("ǰa=%d b=%d\n", a, b);
//	swap(&a, &b);
//	//swap(a, b);
//	printf("��a=%d b=%d\n", a, b);
//	return 0;
//}






//дһ�����������ж�һ�����ǲ�������

//int prime(int a)
//{
//	int b=a;
//	int i;
//	for (i = 2; i < b; i++)
//	{
//		if ((b % i) == 0)//�ж��Ƿ��������
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	//���������a���ϴ�2��a
//	//���ܳ�����Ͳ�Ϊ����
//	//����ȡ��ԭ��ֻҪ��һ�ο���������ȷ�ϲ�������
//	//�����������1��Ϊ����������0��������
//	//ע��1�Ȳ�������Ҳ���Ǻ���
//	if (a = 1)
//	{
//		printf("%d�Ȳ�������Ҳ���Ǻ���", a);
//	}
//	if (prime(a) == 1)
//	{
//		printf("%d������\n", a);
//	}
//	else
//	{
//		printf("%d��������\n", a);
//
//	}
//	return 0;
//}






//дһ�������ж�һ���ǲ�������

//int is_leap_year(int year)
//{
//	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int year;
//	//������Ա�400��������������
//	//������Ա�4���������ܱ�100��������������
//	//��Ϊ�����򷵻�0�����򷵻�1
//	scanf("%d", &year);
//	if (is_leap_year(year) == 0)
//	{
//		printf("%d������", year);
//	}
//	else
//		printf("%d��������", year);
//	return 0;
//}

//��
//*C���� �ж�ʱΪ�淵��1��Ϊ�ٷ���0

//int is_leap_year(int year)
//{
//	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0);
//	//�ж�ʱΪ�淵��1��Ϊ�ٷ���0
//}
//int main()
//{
//	int year;
//	//������Ա�400��������������
//	//������Ա�4���������ܱ�100��������������
//	//��Ϊ�����򷵻�0�����򷵻�1
//	scanf("%d", &year);
//	if (is_leap_year(year) == 0)
//	{
//		printf("%d������", year);
//	}
//	else
//		printf("%d��������", year);
//	return 0;
//}




//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�

int main()
{
	//ȥ�����--arr
	//��˭----k
	//��ô��----���ַ�
	//һ���м���Ԫ��--��sizeof
	//
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr�е�Ԫ�ظ���=arr�ܹ���ռ���ֽ�/һ��Ԫ����ռ���ֽ�
	scanf("%d", &k);
	find_arr(arr, k, sz);
	printf("�ҵ��ˣ��±���%d", a);
	return 0;
}
