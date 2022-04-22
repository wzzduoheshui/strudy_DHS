#define  _CRT_SECURE_NO_WARNINGS
#include "22_4_19.h"

void TestSeqList1()//
{
	SL sl;//定义顺序表的变量
	SeqListInit(&sl);//初始化一下
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//插入数据
	SLprint(&sl);//打印数据
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLprint(&sl);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushFront(&sl, 5);
	SLprint(&sl);

}

void TestSeqList2()
{
	SL sl;//定义顺序表的变量
	SeqListInit(&sl);//初始化一下
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//插入数据
	SLprint(&sl);//打印数据
	SLPopBack(&sl);//尾删
	SLPopBack(&sl);//尾删
	SLprint(&sl);//打印数据
	SLPopFront(&sl);//头删
	SLprint(&sl);//打印数据
}

void TestSeqList3()
{
	SL sl;//定义顺序表的变量
	SeqListInit(&sl);//初始化一下
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//插入数据
	//SLInsert(&sl, 3, 40);//在第4个位置插入40
	//SLInsert(&sl, 0, 40);//在第1个位置插入40（可以代替头插，在头插中调用）
	SLPushFront(&sl, 6);
	SLPushBack(&sl, 6);
	SLprint(&sl);//打印数据

	SLErase(&sl, 3);//在第4个位置删除
	SLprint(&sl);//打印数据
	
	//SLErase(&sl, 0);//在第1个位置删除（头删）
	SLPopFront(&sl);//头删
	SLprint(&sl);//打印数据
	
	//SLErase(&sl, 4);//在第5个位置删除(尾删)
	SLPopBack(&sl);//尾删
	SLprint(&sl);//打印数据

}

void TestSeqList4()
{
	SL sl;//定义顺序表的变量
	SeqListInit(&sl);//初始化一下
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);//插入数据
	SLprint(&sl);//打印数据

	//查找数据可以套用
	int x = 0;
	printf("请输入你要删除的值：");
	scanf("%d", &x);//删除一个数据
	int pos = SLFind(&sl, x);//查找这个数据
	if (pos != -1)//找到了
	{
		SLErase(&sl, pos);//套用删除
	}
	SLprint(&sl);//打印数据

	int y = 0;
	int z = 0;
	printf("请输入你要修改前的值：");
	scanf("%d", &y);//修改前的数据
	pos = SLFind(&sl, y);//查找这个数据
	printf("请输入修改后的值：");
	scanf("%d", &z);//修改后的数据
	SLModify(&sl, pos, z);//套用修改
	SLprint(&sl);//打印数据

}
//int main()
//{
//	//TestSeqList1();//模块化方便调试
//	//TestSeqList2();//模块化测试
//	//TestSeqList3();
//	TestSeqList4();
//	return 0;
//}

void menu()//菜单 
{
	printf("*************************\n");
	printf("***1.尾插       2.头插***\n");
	printf("***3.查找       4.删除***\n");
	printf("***5.修改       6.打印***\n");
	printf("***-1.退出            ***\n");
	printf("*************************\n");
}
int main()
{
	SL sl;// 定义顺序表
	SeqListInit(&sl);//初始化一下
	int val, pos;
	int option = -1;
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("请连续输入你要插入的数据，以0结束：>");
			scanf("%d ", &val);
			while (val != 0)
			{
				SLPushBack(&sl, val);//尾插
				scanf("%d ", &val);
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			SLprint(&sl);//打印数据
			break;
		case 7:
		case 8:
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (option);
	return 0;
}






