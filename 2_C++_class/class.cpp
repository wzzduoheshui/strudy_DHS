#define  _CRT_SECURE_NO_WARNINGS

#include "class.h"

class student
{
public:
	//void print()
	//{
	//	//cout << "name:" << _name << endl;
	//	//cout << "age:" << _age << endl;
	//	//cout << "_num" << _num << endl;
	//}
private:
	//char _name[20];
	//int _age;
	//int _num;
};

int main()
{
	//student s1;
	//s1.print();
	//student s2;
	//s2.print();
	student* ptr = nullptr;
	//ptr->print();
	cout << sizeof(*ptr);
	return 0;
}




//int main()
//{
//	text();
//	int a = 100;
//	cout << a << endl;
//	cout << "main()" << &a << endl;
//
//	return 0;
//}
//



//static int a = 1;
//int main()
//{
//	text();
//	cout << endl << endl;
//	cout << "main():" << age << endl;
//	cout << "main():" << &age << endl;
//	age++;
//	age++;
//	age++;
//	age++;
//	age++;
//	cout << "main()2:" << age << endl;
//	cout << "main()2:" << &age << endl;
//	return 0;
//}