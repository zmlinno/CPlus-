#define _CRT_SECURE_NO_WARNINGS
#include"MyClass.h"
#include<iostream>

MyClass::MyClass(int year, int month, int day)
{
	data = new int(year + month + day);
	number = day;
	cout << "���캯��: " << data << endl;
}



MyClass::MyClass(const MyClass& d)
{
	data = new int(*data);//���
	number = d.number;
	cout << "������캯��: " << data << endl;
	cout << "ֵ��: " << *data << endl;//���ǿ���ͨ������������ӡֵ
}


MyClass& MyClass::operator=(const MyClass& d)
{
	if (this != &d)
	{
		delete data;
		data = new int(*d.data);//���
		number = d.number;
	}
	cout << "��ֵ�����: data = " << data << endl;
	return *this;
}

MyClass::~MyClass()
{
	cout << "��������: delete" << data << endl;
	delete data;
}