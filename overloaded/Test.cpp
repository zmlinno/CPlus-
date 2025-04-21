#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Data.h"
#include"MyClass.h"
using namespace std;

//函数重载 同名函数参数不同

//void print(int x)
//{
//	cout << "打印整数: " << x << endl;
//}
//
//void print(double x)
//{
//	cout << "打印浮点数: " << x << endl;
//}
//
//void print(int x, int y)
//{
//	cout << "打印两个整数: " << x << "和" << y << endl;
//}
//int main()
//{
//	print(10);
//	print(10.2);
//	print(3, 4);
//	return 0;
//}




//关于引用例子
//void increase(int& ref)
//{
//	ref += 10;//修改原始变量
//}
//int main()
//{
//	int a = 5;
//	int& refA = a;//定义引用
//	increase(refA); //相当于传入a的地址
//	cout << "a的新值是: " << a << endl;//输出15
//	return 0;
//}



//int main()
//{
//	Date t1(2024, 04, 14);
//	Date t2 = t1 + 10;
//	Date t3 = t2 - 5;
//
//	t1 += 7;
//	t2 -= 2;
//
//	cout << "t1: "; t1.Print();
//	cout << "t2: "; t2.Print();
//	cout << "t3: "; t3.Print();
//
//	cout << "d2-d3 = " << t2 - t3 << "天" << endl;
//	return 0;
//}




//下面关于浅拷贝的
//int main()
//{
//	MyClass a;
//	MyClass d;
//	a.data = new int(10);
//	MyClass b = a; //这里就是一个浅拷贝，打印输出的是b的地址
//	MyClass c = a;
//	d = a;
//	cout << b.data << endl;
//	cout << c.number << endl;
//	cout << d.data << endl;
//	
//	return 0;
//}



//这是由于浅拷贝+析构带来的程序崩溃
//int main()
//{
//	MyClass a;  //这里是构造，因为分配了 new int
//	MyClass b = a; //拷贝构造 - 浅拷贝，此时b.data和a.data在同一个地址
//	
//	cout << a.data << endl;
//	cout << b.data << endl;
//
//	
//	return 0;
//}


int main()
{
	//MyClass a;
	//MyClass b = a; //拷贝构造
	//MyClass c;
	//c = a; //赋值运算符
	//return 0; //自动析构
	MyClass a(20, 30, 40);
	//MyClass b;
	//b = a;

	return 0;
}