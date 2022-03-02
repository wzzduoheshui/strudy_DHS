#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a[5] = {2,3,5,7,9};
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	int x = 0;
//	double m = 0;
//	x = a[0] + a[1] + a[2] + a[3] + a[4];
//	m = (double)x / 5;
//	printf("%d %.2f", x, m);
//	return 0;
//}




//
//int main()
//{
//	int a[5] = { 2,3,9,7,5};
//	int i;
//	float avg;
//	for (i = 0; i < 5;)
//	{
//		if (a[i] > a[i + 1])
//			i+1;
//		else (a[i] <= a[i + 1])
//			continue;
//	}
//	printf("%d\n", i);
//
//	return 0;
//}






//
//int main()
//{
//	int a[5] = { 2,3,9,7,5};
//	int i, j=0;
//	//最小元素及其下标
//	for (i = 1; i < 5; i++)
//	{
//		if (a[j] > a[i])
//		{
//			j = i;
//		}
//	}
//	printf("最小元素下标为%d\n", j);
//	printf("最小元素为%d\n", a[j]);
//	//第二大元素及其下标
//	int x1,x2;//存放差值
//	x1 = a[1] - a[j];
//	for (i = 2; i < 5; i++)
//	{
//		x2 = a[i] - a[j];
//		if (x2 > x1)
//		{
//
//		}
//		
//	}
//
//	return 0;
//}



#define N 5
int main()//本程序求数组中第二大的数，假设数组的前两个数不同时是最大的数
{
    float gz[N] = { 300,700,600,600,500 };
    float max, second;   //max是最大值，second是第二大的值
    int i, j, k;   //j是max对应的下标，k是second对应的下标
    if (gz[0] < gz[1])
    {
        max = gz[1]; j = 1;
        second = gz[0]; k = 0;
    }
    else
    {
        max = gz[0]; j = 0;
        second = gz[1]; k = 1;
    }
    for (i = 2; i < N; i++)
    {
        if (gz[i] > max) //gz[i]大于最大工资则将最大工资复制给第二大工资，gz[i]赋值给最大工资max
        {
            second = max; k = j;
            max = gz[i]; j = i;
        }
        else if (gz[i] > second && gz[i] < max)//gz[i]大于第二大工资但小于最大工资，则将gz[i]赋值给第二大工资
        {
            second = gz[i]; k = i;
        }
    }
    printf("第二大的工资为：%f\n", second);
    printf("其对应的下标为：%d\n", k);
}