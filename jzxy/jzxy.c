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
//	//��СԪ�ؼ����±�
//	for (i = 1; i < 5; i++)
//	{
//		if (a[j] > a[i])
//		{
//			j = i;
//		}
//	}
//	printf("��СԪ���±�Ϊ%d\n", j);
//	printf("��СԪ��Ϊ%d\n", a[j]);
//	//�ڶ���Ԫ�ؼ����±�
//	int x1,x2;//��Ų�ֵ
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
int main()//�������������еڶ�����������������ǰ��������ͬʱ��������
{
    float gz[N] = { 300,700,600,600,500 };
    float max, second;   //max�����ֵ��second�ǵڶ����ֵ
    int i, j, k;   //j��max��Ӧ���±꣬k��second��Ӧ���±�
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
        if (gz[i] > max) //gz[i]���������������ʸ��Ƹ��ڶ����ʣ�gz[i]��ֵ�������max
        {
            second = max; k = j;
            max = gz[i]; j = i;
        }
        else if (gz[i] > second && gz[i] < max)//gz[i]���ڵڶ����ʵ�С������ʣ���gz[i]��ֵ���ڶ�����
        {
            second = gz[i]; k = i;
        }
    }
    printf("�ڶ���Ĺ���Ϊ��%f\n", second);
    printf("���Ӧ���±�Ϊ��%d\n", k);
}