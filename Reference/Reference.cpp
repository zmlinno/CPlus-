#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//关于内联函数vs宏函数
#define SQUARE(x) (x*x)

void modify(int& x)
{
	x += 10;
}

void modify1(int x)
{
	x += 10;
}

int& getRef(int& x)
{
	return x;
}

//int getRef(int& x)
//{
//	return x;
//}


//关于内联函数
inline int square(int x)
{
	return x * x;
}


//1 小函数适合inline
inline int add(int a, int b)
{
	return a + b; //简单适合内联
}

//2 大函数或有循环/递归，不适合inline
inline int factorila(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
		return result;
	}
}

//3.声明和定义不能分开 -- 应放在header中
inline void sayHello();//声明
inline void sayHello()
{	//定义必须放在一起
	cout << "Hello!" << endl;
}
//上面这个写法就是错误的。
int main()
{
	//int a = 10;
	//int& ref = a;//ref是a的引用，ref和a共享一块内存
	//cout << ref << endl;
	////打印地址的话是加&
	//cout << &ref << " ";
	//cout << &a << " ";
	////地址是相同的，可以证明它们使用的是同一块内存。
	//ref = 20;

	//cout << ref << endl;



	//引用特性
	//引用一旦绑定变量，就不能在绑定其它别的变量
	//int a = 10;
	//int b = 20;
	//int& ref = a;//ref是a的引用
	//cout << "ref初始绑定a: " << ref << endl;

	////尝试让ref指向b --其实做不到
	//ref = b;//这里指的是只是b的值赋给了ref
	//cout << a << " ";
	//cout << b << " ";
	//cout << ref << "";
	//return 0;

	/*int a = 5;
	int b = 10;
	modify(a);
	modify1(b);
	cout << a << endl;
	cout << b << endl;*/


	//int a = 5;
	//int& ref = getRef(a);
	//cout << &a << " ";
	//cout << &ref << " ";
	//cout << endl;
	//cout << a << " ";
	//cout << ref << " ";
	//
	//cout << endl;

	//ref = 20;a
	//cout << ref << " ";
	//cout << a << " ";


	//下面是关于内联函数
	//cout << square(5) << endl; //函数会直接将5*5展开，返回25

	//int a = 5, b = SQUARE(a++);
	//cout << a << " ";
	//int c = square(a++);
	//cout << b << " ";
	//cout << c << " ";


	//return 0;
	

	cout << "Add(2,3): " << add(2, 3) << endl;
	cout << "Factorial(5): " << factorila(5) << endl;
	sayHello();
	return 0;

}