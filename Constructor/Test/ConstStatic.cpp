//
//  ConstStatic.cpp
//  Constructor
//
//  Created by 张木林 on 4/23/25.
//

#include<iostream>
using namespace std;
//关于const
class Circple
{
    const int a;
public:
    Circple():a(3){} //初始化列表初始化const成员
    
    void show()
    {
        cout<<a<<endl;
    }
};


//static

