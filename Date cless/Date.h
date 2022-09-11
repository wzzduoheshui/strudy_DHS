#pragma once

#include <iostream>

using namespace std;

class Date
{
public:
	//构造函数会频繁调用，所以直接放在类里面定义为inline
	Date(int year = 1, int month = 01, int day = 01)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	int GetMonthDay(int year, int month)
	{
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];
		if (month == 2
			&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			day += 1;
		}
		return day;
	}
	bool operator==(const Date& d);
	bool operator!=(const Date& d);
	bool operator>(const Date& d);
	bool operator<=(const Date& d);
	
	Date operator+(int day);
	Date& operator+=(int day);
	Date& operator-=(int day);
	Date operator-(int day);


	//int operator-(Date date);
	void Print()
	{
		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
	}


private:
	int _year;
	int _month;
	int _day;
};