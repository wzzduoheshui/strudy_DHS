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
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}


//��ά���鴴��
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6};//����ȫ��ʼ��
//	                              //����Ĭ��Ϊ0
//	int  arr1[3][5] = { {1,2},{4,5},{5,6} };
//	int arr2[3][5] = { 0 };
//	return 0;
//}

//��ά�����ʹ��
//int main()
//{
//	int  arr1[3][5] = { {1,2},{4,5},{5,6} };
//	int i = 0,j=0;
//	
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", arr1[i][j]);
//		}
//		printf("\n");
//	}*/
//	//for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
//	//	         //�еĸ����������������С���Ե�һ�еĴ�С
//	//{
//	//	for (j = 0; j < sizeof(arr1[0])/sizeof(arr1[0][0]);j++)
//	//             //�еĸ������ڵ�һ��Ԫ�صĴ�С���Ե�һ���е�һ��Ԫ�صĴ�С
//	//	{
//	//		printf("%d", arr1[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//��ӡÿ��Ԫ�صĵ�ַ
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr1[%d][%d]=%p\t",i,j, &arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//�����Խ��
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)//0 <= i <= 9
//	{
//		printf("%d  ", arr1[i]);
//	}
//	return 0;
//}




//������Ϊ��������
//ð������
void bubble_sort(int arr[],int sz)
{

	int i = 0;
	for (i = 0; i < sz; i++)//ÿһ��ð������Ĺ���
	{
		int j = 0;//��Ҫ�Ƚϵ�Ԫ���±�Ϊj��j+1
		for (j = 0; j < sz-1-i ; j++)
		{
			int a = 0;
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				a++;
			} 
		}
		if (a == 0)
			break;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//дһ��ð������ĺ�����������arr���������
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("����ǰ��");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr,sz);
	printf("�����");
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}



//������������Ԫ�ص�ַ
//����������
//1>sizeof����������������������������Ԫ�ص�ַ����������ʾ��������
//2>&��������������������Ԫ�ص�ַ����������ʾ�������飬ȡ��������������ĵ�ַ
// 
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}