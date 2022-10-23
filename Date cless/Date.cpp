//#define  _CRT_SECURE_NO_WARNINGS
//#include "Date.h"
//
//bool Date::operator==(const Date& d)
//{
//	return _year == d._year &&
//		_month == d._month &&
//		_day == d._day;
//}
//
//bool Date::operator!=(const Date& d)
//{
//	return !(*this == d);
//}
//
//bool Date::operator>(const Date& d)
//{
//	if ((_year > d._year)
//		|| (_year == d._year && _month > d._month)
//		|| (_year == d._year && _month == d._month && _day < d._day))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool Date::operator<=(const Date& d)
//{
//	return !(*this > d);
//}
//
//Date& Date::operator+=(int day)
//{
//	_day += day;
//	while (_day > GetMonthDay(_year, _month))
//	{
//		_day -= GetMonthDay(_year, _month);
//		++_month;
//		if (_month == 13)
//		{
//			_year++;
//			_month = 1;
//		}
//	}
//
//	return *this;
//}
//
//Date Date::operator+(int day)
//{
//	Date ret(*this);
//	return ret+=day;
//}
//
//Date& Date::operator-=(int day)
//{
//	if (_day >= day)
//	{
//		_day -= day;
//		return *this;
//	}
//	while (_day < day)
//	{
//		day -= _day;
//		if (_month == 1)
//		{
//			_year--;
//			_month = 12;
//		}
//		else
//		{
//			_month--;
//		}
//		_day = GetMonthDay(_year, _month);
//	}
//	return *this;
//}
//
//Date Date::operator-(int day)
//{
//	Date date(*this);
//	return (date -= day);
//}
//
////int Date::operator-(Date date)
////{
////
////}