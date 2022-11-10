#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void InsertSort(int* arr,int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int tmp = 0;
	while (k < n)
	{
		for (j = k, i = j; i >= 0; i--)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				j = i;
			}
		}
		k++;
	}
}
int main()
{
	int arr[10] = { 9,5,8,2,6,3,7,4,1,0 };
	InsertSort(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d->", arr[i]);
	}
	return 0;
}