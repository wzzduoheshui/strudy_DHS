//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////��ʧ������
////����nums������0��n������������������ȱ��һ����
////���д�����ҳ��Ǹ�ȱʧ��������
////���а취��O(n)ʱ���������
//int miss(int* nums, int num)
//{
//	int x = 0;
//	for (int i = 0; i < num; ++i)
//	{
//		x = x^ nums[i];
//	}
//	for (int j = 0; j < num; ++j)
//	{
//		x = x ^ j;
//	}
//	return x;
//}


//// ����쳲������ݹ�Fib��ʱ�临�Ӷȣ�
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}
//int main()
//{
//	printf("%lld\n", Fib(10000));
//}

//// ����׳˵ݹ�Fac�Ŀռ临�Ӷȣ�
//long long Fac(size_t N)
//{
//	if (N == 0)
//		return 1;
//
//	return Fac(N - 1) * N;
//}


//void f1()
//{
//	int a = 0;
//	printf("%p\n", &a);
//}
//void f2()
//{
//	int a = 0;
//	printf("%p\n", &a);
//}
//int main()
//{
//	f1();
//	f2();
//	return 0;
//}
