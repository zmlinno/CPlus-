#pragma once
#include<iostream>
using namespace std;

class MyClass
{
public:
	int* data;
	int number;
	//1.要先生命的意思吗
	//MyClass operator = (const MyClass& d);


	//MyClass()
	//{
	//	//构造函数
	//	data = new int(10);
	//	cout << "构造函数: " << data << endl;
	//}
	MyClass(int year = 2000, int month = 10, int day = 5);//构造函数
	MyClass(const MyClass& d); //拷贝构造函数
	MyClass& operator = (const MyClass& d); //赋值运算符重载



	~MyClass();
	
};
