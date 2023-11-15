#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//class A
//{
//public:
//	void print()
//	{
//		cout << "class A :: print()" << endl;
//		cout << _a << endl;
//	}
//	int _a = 0;
//};
//
//class B : public A
//{
//public:
//	void print()
//	{
//		cout << "class B :: print()" << endl;
//		cout << _a << endl;
//	}
//private:
//	int _b;
//};
//
//int main()
//{
//	B b;
//	b.print();
//	b.A::print();
//	b._a = 1;
//	b.print();
//	b.A::print();
//	
//	return 0;
//}

#include <string>
#include <vector>

class Persion
{
public:
	Persion(const vector<int>& persionID, const string& name)
		: _persionID(persionID)
		, _name(name)
	{
		cout << "Persion(const vector<int>& persionID, const string& name)" << endl;
	}
	Persion(const Persion& p)
		: _name(p._name)
		, _persionID(p._persionID)
	{
		cout << "Persion(const Persion& p)" << endl;
	}
	Persion& operator=(const Persion& p)
	{
		cout << "Persion& operator=(const Persion& p)" << endl;
		if (this != &p)
		{
			_name = p._name;
			_persionID = p._persionID;
		}
		return *this;
	}
	~Persion()
	{
		cout << "~Persion()" << endl;
		_name.clear();
		_persionID.clear();
	}
protected:
	string _name;
	vector<int> _persionID;
};

class Student : public Persion
{
public:
	Student(const vector<int>& id = vector<int>(1), const vector<int>& persionID = vector<int>(1), const string& name = string("张三"))
		: Persion(persionID, name)
		, _id(id)
	{
		cout << "Student(const vector<int>& id, const vector<int>& persionID, const string& name)" << endl;
	}

	Student(const Student& s)
		: Persion(s)
		, _id(s._id)
	{
		cout << "Student(const Student& s)" << endl;
	}

	Student& operator=(const Student& s)
	{
		cout << "Student& operator=(const Student& s)" << endl;
		if (this != &s)
		{
			Persion::operator=(s);
			_id = s._id;
		}
		return *this;
	}


	~Student()
	{
		cout << "~Student" << endl;
		// 子类析构和父类析构构成隐藏--但是名字不一样呀
		// 由于多态的需要，所有析构函数会被同一处理成destructtor();
		// Persion::~Persion();
		// 但是析构函数不需要显示调用
		_id.clear();
	}
private:
	vector<int> _id;
};

int main()
{
	Student stu1(vector<int>(1), vector<int>(123456), "张三");
	cout << endl;
	Student stu2(stu1);
	cout << endl;
	Student stu3;
	cout << endl;
	stu3 = stu1;
	cout << endl;
	return 0;
}