#define _CRT_SECURE_NO_WARNINGS
#include"MyClass.h"
#include<iostream>

MyClass::MyClass(int year, int month, int day)
{
	data = new int(year + month + day);
	number = day;
	cout << "构造函数: " << data << endl;
}



MyClass::MyClass(const MyClass& d)
{
	data = new int(*data);//深拷贝
	number = d.number;
	cout << "深拷贝构造函数: " << data << endl;
	cout << "值是: " << *data << endl;//我们可以通过解引用来打印值
}


MyClass& MyClass::operator=(const MyClass& d)
{
	if (this != &d)
	{
		delete data;
		data = new int(*d.data);//深拷贝
		number = d.number;
	}
	cout << "赋值运算符: data = " << data << endl;
	return *this;
}

MyClass::~MyClass()
{
	cout << "析构函数: delete" << data << endl;
	delete data;
}