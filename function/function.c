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
int swap(int x, int y)
{
	int c = 0;
	c = x;
	x = y;
	y = c;
}

int main()
{
	int a;
	int b;
	//ʵ��
	scanf("%d %d", &a, &b);
	printf("ǰa=%d b=%d\n", a, b);
	swap(a, b);
	printf("��a=%d b=%d\n", a, b);
	return 0;
}
