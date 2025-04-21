#pragma once
#include<iostream>
class Date
{

public:
	Date(int year = 1900, int month = 1, int day = 1);
	Date(const Date& d);
	Date& operator = (const Date& d);
	~Date();

	// ��ȡĳ��ĳ�µ�����

	int GetMonthDay(int year, int month);



	// ȫȱʡ�Ĺ��캯��

	//Date(int year = 1900, int month = 1, int day = 1);



	// �������캯��

  // d2(d1)

	//Date(const Date& d);



	// ��ֵ���������

  // d2 = d3 -> d2.operator=(&d2, d3)

	//Date& operator=(const Date& d);



	// ��������

	
	//~Date();



	// ����+=����

	Date& operator+=(int day);



	// ����+����

	Date operator+(int day);



	// ����-����

	Date operator-(int day);



	// ����-=����

	Date& operator-=(int day);



	// ǰ��++

	Date& operator++();



	// ����++

	Date operator++(int);



	// ����--

	Date operator--(int);



	// ǰ��--

	Date& operator--();



	// >���������

	bool operator>(const Date& d);



	// ==���������

	bool operator==(const Date& d);



	// >=���������

	bool operator >= (const Date& d);



	// <���������

	bool operator < (const Date& d);



	// <=���������

	bool operator <= (const Date& d);



	// !=���������

	bool operator != (const Date& d);



	// ����-���� ��������

	int operator-(const Date& d);

	void Print();

private:

	int _year;

	int _month;

	int _day;

};