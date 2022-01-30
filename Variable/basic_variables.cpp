//
// Created by WUXIANGCHAO on 2022/1/12.
//
#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
    cout << "bool size:" << sizeof(bool) << endl;
    cout << "char size:" << sizeof(char) << endl;
    cout << "wchar_t size:" << sizeof(wchar_t) << endl;
    cout << "char16_t size:" << sizeof(char16_t) << endl;
    cout << "char32_t size:" << sizeof(char32_t) << endl;
    cout << "short size:" << sizeof(short) << endl;
    cout << "int size:" << sizeof(int) << endl;
    cout << "long size:" << sizeof(long) << endl;
    cout << "long int size:" << sizeof(long long) << endl;
    cout << "float size:" << sizeof(float)  << endl;
    cout << "double size:" << sizeof(double) << endl;
    cout << "long double size:" << sizeof(long double) << endl;
    return 0;
}

