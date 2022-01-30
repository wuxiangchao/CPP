//
// Created by WUXIANGCHAO on 2021/12/10.
//
#include <iostream>
#include <string>

using namespace std;

const string hexdigits = "0123456789ABCDEF";

int main()
{
    for (auto &c: hexdigits) {
        cout << typeid(c).name() << endl;
    }
    cout << hexdigits << endl;
    return 0;
}