#define  _CRT_SECURE_NO_WARNINGS

#include "Date.h"

void TextDate1()
{
	Date d1(2022, 9, 6);
	d1.Print();
	(d1 + 1).Print();
	//d1.Print();

	//d1 -= 100;
	//d1.Print();
	//Date d2(d1);//ʹ��Ĭ�Ͽ�������

	//Date d3(2022, 8, 24);
	//d1 = d3;//��d1=d3,����ᱻת����d1.operator=(&d1,d3);
	//d1 = d2 = d3;
	//Date d2(d1 + 20);
	//d2.Print();
	//d1 += 100;
	//d1.Print();
}

int main()
{
	TextDate1();
	return 0;
}
