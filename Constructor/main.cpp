//
//  main.cpp
//  Constructor
//
//  Created by 张木林 on 4/23/25.
//

#include <iostream>
using namespace std;

//1.函数名和类名相同，没有返回值
class Person
{
public:
    Person()
    {
        cout<<"无参构造函数被调用"<<endl;
    }
};
//构造函数名和类名一致，没有返回类型，这就是构造函数的基本形式，对象创建时自动调用


//2.初始化列表的使用
class Student
{
    const int id;
    string name;
    
public:
    Student(int i,string n):id(i),name(n)
    {
        cout<<"使用初始化列表初始化"<<endl;
    }
};



//3.成员变量初始化顺序与初始化列表顺序无关
//虽然初始化列表顺序是b-a，但真正的初始化顺序是以声明顺序为标准a-b
//所以推荐写初始化列表时按照声明顺序写，避免潜在问题
class Test
{
    int a;
    int b;
    
    Test(int x,int y):b(y),a(x)
    {
        cout<<"a"<<a<<"b"<<b<<endl;
    }
};



//4.构造函数可以重载
//根据参数不同，调用不同构造函数，重载是允许的
class Box
{
public:
    Box()
    {
        cout<<"无参构造函数"<<endl;
    }
    Box(int a)
    {
        cout<<"带一个参数的构造函数"<<endl;
    }
};


//5.编译器会自动生成默认构造函数 - 若没有定义
class DefaultExample
{
public:
    int data;
    //没有显式写构造函数，编译器会自动生成一个无参构造函数
};


//6.自定义了构造函数后，编译器不再生成默认构造函数
class MyClass
{
public:
    MyClass(int x)
    {
        cout<<x<<endl;
    }
};


//7.关于引用类变量成员初始化
class RefExample
{
    int& a;
public:
    RefExample(int &y):a(y)
    {
        cout<<"引用成员变量通过初始化列表初始化"<<endl;
    }
};
int main()
{
    
    DefaultExample obj;//自动调用编译器生成的默认构造函数
    //比如说像第六个，定义了有参构造函数后，如果像上面一样不写参数，那么就会报错
    
    return 0;
}
