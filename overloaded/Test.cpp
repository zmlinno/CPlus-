#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Data.h"
#include"MyClass.h"
using namespace std;

//�������� ͬ������������ͬ

//void print(int x)
//{
//	cout << "��ӡ����: " << x << endl;
//}
//
//void print(double x)
//{
//	cout << "��ӡ������: " << x << endl;
//}
//
//void print(int x, int y)
//{
//	cout << "��ӡ��������: " << x << "��" << y << endl;
//}
//int main()
//{
//	print(10);
//	print(10.2);
//	print(3, 4);
//	return 0;
//}




//������������
//void increase(int& ref)
//{
//	ref += 10;//�޸�ԭʼ����
//}
//int main()
//{
//	int a = 5;
//	int& refA = a;//��������
//	increase(refA); //�൱�ڴ���a�ĵ�ַ
//	cout << "a����ֵ��: " << a << endl;//���15
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
//	cout << "d2-d3 = " << t2 - t3 << "��" << endl;
//	return 0;
//}




//�������ǳ������
//int main()
//{
//	MyClass a;
//	MyClass d;
//	a.data = new int(10);
//	MyClass b = a; //�������һ��ǳ��������ӡ�������b�ĵ�ַ
//	MyClass c = a;
//	d = a;
//	cout << b.data << endl;
//	cout << c.number << endl;
//	cout << d.data << endl;
//	
//	return 0;
//}



//��������ǳ����+���������ĳ������
//int main()
//{
//	MyClass a;  //�����ǹ��죬��Ϊ������ new int
//	MyClass b = a; //�������� - ǳ��������ʱb.data��a.data��ͬһ����ַ
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
	//MyClass b = a; //��������
	//MyClass c;
	//c = a; //��ֵ�����
	//return 0; //�Զ�����
	MyClass a(20, 30, 40);
	//MyClass b;
	//b = a;

	return 0;
}