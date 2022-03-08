#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double arr[5] = '0';
	int a = 0;
	int i;
	for (i = 0; i <= 5; i++)
	{
		float sum;
		for (a = 0; a <= 5; a++)
		{
			scanf("%lf", &arr[a]);
			sum += arr[a];
		}
		printf("%f\t", arr);
		printf("%.1f", sum);
	}
	
	return 0;
}