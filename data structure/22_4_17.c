//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////消失的数字
////数组nums包含从0到n的所有整数，但其中缺了一个。
////请编写代码找出那个缺失的整数。
////你有办法在O(n)时间内完成吗？
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


//// 计算斐波那契递归Fib的时间复杂度？
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

//// 计算阶乘递归Fac的空间复杂度？
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
