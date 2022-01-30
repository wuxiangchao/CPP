//
// Created by WUXIANGCHAO on 2021/12/9.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test = "How are you";
    string::size_type a = test.size();
    for (char c: test) {
        cout << c << endl;
    }
    return 0;
}