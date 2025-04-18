#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int add(int a, int b)
//     {
//         return a+b;
//     }

//     double add(double a, double b)
//     {
//         return a+b;
//     }
//     //这样就是错误的，因为C语言不支持函数重载
// }

//在这里我们用C++调用C语言函数 -- extern "C"
#ifndef C_CODE_H
#define C_CODE_H

#ifdef __cplusplus

extern "C" 
{
    #endif
    void say_hello();

    #ifdef __cplusplus
}



#endif
#endif