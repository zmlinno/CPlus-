#include<iostream>
using namespace std;


//什么是函数重载？
void func(int a)
{
    cout<<"int:"<<a<<endl;
}

void func(double a)
{
    cout<<"double:"<<a<<endl;
}

//如果说函数名不同，但是参数相同，返回值类型不同，这种情况是不能重载的
//因为编译器无法区分调用哪个函数
void fun1(int d)
{
    cout<<"int:"<<d<<endl;
    //这样就会报错，提示函数重载不明确
    //func(10); //调用int类型的函数
}

void func(int a, double b)
{
    cout<<"int:"<<a<<",double:"<<b<<endl;
}

//定义是函数名相同，但是参数不同，返回值类型可以相同也可以不同
//函数重载的注意事项：
//1.函数重载是根据参数的类型和个数来区分的，返回值类型不参与重载


//4 C++如何支持函数重载？
//名称修饰机制+编译器类型检查
int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}
//这样就可以了，因为C++支持函数重载


//函数重载的好处：
//1.提高代码的可读性和可维护性
//2.减少函数名的数量，避免函数名冲突
//3.提高代码的可扩展性，方便后期维护和升级




//关于底层是如何支持函数重载的

int main()
{
    func(10); //调用int类型的函数
    func(3.14); //调用double类型的函数
    func(10, 3.14); //调用int和double类型的函数
    //编译器会根据参数类型和个数来选择调用哪个函数
    //如果参数类型和个数都相同，编译器会报错，提示函数重载不明确
    return 0;
}