#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int value = 2863311530;
	char condition = *((char*)(&value));
	if (condition) value += 1; condition = *((char*)(&value));
	if (condition) value += 1; condition = *((char*)(&value));
	printf("%d %d", value, condition);
	return 0;
}