#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//消失的数字
//数组nums包含从0到n的所有整数，但其中缺了一个。
//请编写代码找出那个缺失的整数。
//你有办法在O(n)时间内完成吗？
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