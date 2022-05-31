#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//操作文件
//	//将abcdef写入文件，为输出操作
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//	fputc('e', pf);
//	fputc('f', pf);
//	fputc('g', pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//操作文件
//	//读文件，为输入操作
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int ch = fgetc(stdin);
//	//printf("%c\n", ch);
//	fputc(ch, stdout);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopenc");
//		return 1;
//	}
//	////一次写一行文件
//	////fputs("asdfghjkl\n",pf);
//	////fputs("xxxxxxxxx", pf);
//
//	//一次读一行文件
//	char arr[256] = { 0 };
//	//fgets(arr, 255, pf);
//	//printf("%s", arr);
//
//	//fgets(arr, 255, pf);
//	//printf("%s", arr);
//	while (fgets(arr, 255, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//int main()
//{
//	//struct S s = { "张三",20,95.5 };
//	struct S s = { 0 };
//	FILE * pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fprintf(pf, "%s %d %lf", s.name, s.age, s.d);
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	//printf("%s %d %lf", s.name, s.age, s.d);
//	fprintf(stdout, "%s %d %lf", s.name, s.age, s.d);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//
//}

//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//int main()
//{
//	char buf[256] = { 0 };
//	struct S s= { "张三",20,95.5 };
//	struct S a = { 0 };
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.d);
//	printf("%s\n", buf);
//	
//	sscanf(buf, "%s %d %lf", a.name, &(a.age), &(a.d));
//	printf("%s %d %lf", a.name, a.age, a.d);
//
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double d;
};
int main()
{
	//struct S s = { "张三",20,95.5 };
	struct S s = { 0 };
	
	//用二进制方式写文件
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %lf", s.name, s.age, s.d);

	fclose(pf);
	pf = NULL;
	return 0;
}