#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//����c�������������͵Ĵ�С����ռ�ڴ�ĳ��ȣ�
//	printf("char=%d\n", sizeof(char));
//	printf("short=%d\n", sizeof(short));
//	printf("int=%d\n", sizeof(int));
//	printf("long=%d\n", sizeof(long));
//	printf("long long=%d\n", sizeof(long long));
//	printf("double=%d\n", sizeof(double));
//	printf("float=%d\n", sizeof(float));
//	return 0;
//}

//int main()
//{
//	//���������������
//	int a, b, sum;
//	a = 0;
//	b = 0;
//	printf("��������Ҫ��͵���������\n");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("a+b=%d", sum);
//	return 0;
//}



//дһ�����������������Ľϴ�ֵ
//int MAX(int a,int b)
//{
//	if (a <= b)
//	{
//		printf("%d\n", b);
//	}
//	else
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	MAX(x, y);
//	return 0;
//}

//���1-100֮��Ļ���
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//int main()
//{
//    char arr[4];
//    int i;
//    scanf("%s", arr);
//    for (i = 3; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}



//int main()
//{
//    int i;
//    char arr[5] = {'0','0','0','0','\0'};
//    for (i = 0; i <4; i++)
//    {
//        scanf("%c",&arr[i]);
//    }
//    printf("%s", arr);
//    return 0;
//}


int main()
{
	int a,x;
	scanf("%d", &a);
	while (a>=1)
	{
		
		x = a % 10;
		a /= 10;
		printf("%d", x);
	}
	return 0;
}