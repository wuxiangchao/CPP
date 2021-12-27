//
// Created by WUXIANGCHAO on 2021/11/23.
//
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
    double x = 12.0;
    cout << "Default out: " << x << endl;
    cout << "Showpoint: " << showpoint << x << endl;
    cout << "Fixed: " << fixed << x << endl;
    cout << "scientific: " << scientific << x << endl;

    string s("spring flowers");
    cout << left
         << setfill('?')
         << setw(40) << s << endl;

    bool ok = true;
    cout << "default output: " << ok << endl;
    cout << "set source output:" << boolalpha << ok << endl;

    int number = 0;
    cin >> hex >> number;
    cout << "number = " << number << endl;

    cin.sync();
    cin.clear();
    return 0;
}