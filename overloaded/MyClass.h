#pragma once
#include<iostream>
using namespace std;

class MyClass
{
public:
	int* data;
	int number;
	//1.Ҫ����������˼��
	//MyClass operator = (const MyClass& d);


	//MyClass()
	//{
	//	//���캯��
	//	data = new int(10);
	//	cout << "���캯��: " << data << endl;
	//}
	MyClass(int year = 2000, int month = 10, int day = 5);//���캯��
	MyClass(const MyClass& d); //�������캯��
	MyClass& operator = (const MyClass& d); //��ֵ���������



	~MyClass();
	
};
