#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������������vs�꺯��
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


//������������
inline int square(int x)
{
	return x * x;
}


//1 С�����ʺ�inline
inline int add(int a, int b)
{
	return a + b; //���ʺ�����
}

//2 ��������ѭ��/�ݹ飬���ʺ�inline
inline int factorila(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
		return result;
	}
}

//3.�����Ͷ��岻�ֿܷ� -- Ӧ����header��
inline void sayHello();//����
inline void sayHello()
{	//����������һ��
	cout << "Hello!" << endl;
}
//�������д�����Ǵ���ġ�
int main()
{
	//int a = 10;
	//int& ref = a;//ref��a�����ã�ref��a����һ���ڴ�
	//cout << ref << endl;
	////��ӡ��ַ�Ļ��Ǽ�&
	//cout << &ref << " ";
	//cout << &a << " ";
	////��ַ����ͬ�ģ�����֤������ʹ�õ���ͬһ���ڴ档
	//ref = 20;

	//cout << ref << endl;



	//��������
	//����һ���󶨱������Ͳ����ڰ�������ı���
	//int a = 10;
	//int b = 20;
	//int& ref = a;//ref��a������
	//cout << "ref��ʼ��a: " << ref << endl;

	////������refָ��b --��ʵ������
	//ref = b;//����ָ����ֻ��b��ֵ������ref
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


	//�����ǹ�����������
	//cout << square(5) << endl; //������ֱ�ӽ�5*5չ��������25

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