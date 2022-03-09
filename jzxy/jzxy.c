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



//#define N 5
//int main()//本程序求数组中第二大的数，假设数组的前两个数不同时是最大的数
//{
//    float gz[N] = { 300,700,600,600,500 };
//    float max, second;   //max是最大值，second是第二大的值
//    int i, j, k;   //j是max对应的下标，k是second对应的下标
//    if (gz[0] < gz[1])
//    {
//        max = gz[1]; j = 1;
//        second = gz[0]; k = 0;
//    }
//    else
//    {
//        max = gz[0]; j = 0;
//        second = gz[1]; k = 1;
//    }
//    for (i = 2; i < N; i++)
//    {
//        if (gz[i] > max) //gz[i]大于最大工资则将最大工资复制给第二大工资，gz[i]赋值给最大工资max
//        {
//            second = max; k = j;
//            max = gz[i]; j = i;
//        }
//        else if (gz[i] > second && gz[i] < max)//gz[i]大于第二大工资但小于最大工资，则将gz[i]赋值给第二大工资
//        {
//            second = gz[i]; k = i;
//        }
//    }
//    printf("第二大的工资为：%f\n", second);
//    printf("其对应的下标为：%d\n", k);
//}




///*一.问题提示:
//   模拟抽奖过程,从1-35之间抽取8个数.
//二.问题分析:
//   1.建立数组S[35]存放1-35个号码.
//   2.利用随机函数产生一个随机数,以该随机数为下标从数组S[35]中获得一个号码,
//     并保存在R[8]数组中,该过程循环8次即可.
//   3.对数组R[8]从小到大排序(选择法).
//三.源程序以及必要注释:*/
//#include "stdlib.h"
//#include "time.h"
//#include "stdio.h"
//main()
//{
//    int i, j, p, t, s[35], r[8];   /*定义S数组和R数组*/
//    for (i = 0; i < 35; i++)         /*初始化S数组,保存1-35个号码*/
//        s[i] = i + 1;
//    j = 0;
//    srand((unsigned)time(NULL));//随机数种子 
//    do
//    {
//        i = rand() % 35;        /*产生随机数并赋值变量i*/
//        if (s[i] != 0)             /*s[i]=0说明该号码已产生*/
//        {
//            r[j] = s[i];      /*将产生的号码保存在R数组中*/
//            s[i] = 0;         /*s[i]清零,表示已产生*/
//            printf("%02d  ", r[j]);     /*输出产生的号码*/
//            j++;            /*j作为R数组的下标*/
//        }
//    } while (j < 8);
//    printf("\n");
//    for (i = 0; i < 7; i++)       /*该FOR循环利用选择法对R数组从小到大排序*/
//    {
//        p = i;
//        for (j = i + 1; j < 8; j++)
//            if (r[p] > r[j]) 
//                p = j;
//        if (p != i)
//        {
//            t = r[i];
//            r[i] = r[p];
//            r[p] = t;
//        }
//    }
//    for (i = 0; i < 8; i++)      /*输出排序以后的抽奖号码*/
//        printf("%02d  ", r[i]);
//    printf("\n");
//}



int main()
{
	int arr[2][3];
	

	return 0;
}



