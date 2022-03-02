#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//计算c语言中内置类型的大小（所占内存的长度）
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
//	//输入两个数据求和
//	int a, b, sum;
//	a = 0;
//	b = 0;
//	printf("请输入需要求和的两个数据\n");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("a+b=%d", sum);
//	return 0;
//}



//写一个函数求两个整数的较大值
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

//输出1-100之间的基数
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


//int main()
//{
//	int a,x;
//	scanf("%d", &a);
//	while (a>=1)
//	{
//		
//		x = a % 10;
//		a /= 10;
//		printf("%d", x);
//	}
//	return 0;
//}


//int max3(int a, int b, int c)
//{
//    if (a >= b && a >= c)
//        return a;
//    if (b >= a && b >= c)
//        return b;
//    if (c >= a && c >= b)
//        return c;
//    return 0;
//}
//int main()
//{
//    int a, b, c, x, y, z;
//    double m;
//    scanf("%d %d %d", &a, &b, &c);
//    x = max3(a + b, b, c);
//    y = max3(a, b + c, c);
//    z = max3(a, b, b + c);
//    m = (double)x / (y + z);
//    printf("%.2f", m);
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


//
//
//int sum(int m,int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		m *= i;
//	}
//	return m;
//}
//int main()
//{
//	int n = 0;
//	int m = 1;
//	scanf("%d", &n);
//	int x = 0;
//	for (; n >= 1; n--)
//	{
//
//		x += sum(m, n);
//	}
//	printf("%d\n", x);
//	return 0;
//}





