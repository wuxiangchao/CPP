//
// Created by WUXIANGCHAO on 2021/11/23.
//
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
    string prompt("What is your name:"), name;

    cout << prompt << endl;
    getline(cin, name);

    cout << "Hello " << name << endl;
    return 0;
}