//
//  Test.cpp
//  Constructor
//
//  Created by 张木林 on 4/23/25.
//

#include<iostream>
using namespace std;

//class Student
//{
//private:
//    int id;
//    string name;
//    
//public:
//    Student(int i,string n)
//    {
//        cout<<"补全了"<<endl;
//    }
//    
//    void show();
//};

//这是上面的正确写法
class Student
{
private:
    const int id;
    string name;
    
public:
    Student(int i,string n):id(i),name(n){}
    //const成员必须使用初始化列表初始化
    //如果在函数体内赋值会编译报错。
};

//练习题
class Rectangle
{
public:
    void show()
    {
        cout<<"无参数"<<endl;
    }
    
    void show(int a,int b)
    {
        cout<<"有参数"<<endl;
    }
};

int main()
{
    return 0;
}
