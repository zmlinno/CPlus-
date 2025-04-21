#define _CRT_SECURE_NO_WARNINGS
#include"Data.h"
using namespace std;

Date::Date(int year, int month, int day)

	:_year(year),_month(month),_day(day){}

Date::Date(const Date& d)
	: _year(d._year), _month(d._month), _day(d._day) {}


Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}


Date::~Date(){}



int Date::GetMonthDay(int year, int month)
{
	static int monthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if(month == 2 && ((year%4 == 0 && year% 100 != 0) || (year%400 == 0)))
		return 29;
		return monthDays[month];
}




Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month > 12)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}


Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp += day;
	return tmp;
}


Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		_month--;
		if (_month <= 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}




Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}


Date& Date::operator++()
{
	*this += 1;
	return *this;
}


Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}


Date& Date::operator--()
{
	*this -= 1;
	return *this;
}


bool Date::operator>(const Date& d)
{
	return (_year > d._day) ||
		(_year == d._year && _month == d._month) ||
		(_year == d._year && _month == d._month && _day > d._day);
}


bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}

bool Date::operator>=(const Date& d)
{
	return *this > d || *this == d;
}

bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}

bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}


bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}


int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	int count = 0;

	if (*this < d)
	{
		max = d;
		min = *this;
	}

	while (min != max)
	{
		++min;
		++count;
	}
	return *this < d ? -count : count;
}


void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

