//
// Created by WUXIANGCHAO on 2021/12/10.
//
#include <iostream>

using namespace std;

int main()
{
    /*
     *
     */
    int ia[3][4] = {{0}, {4}, {8}};
    cout << ia[2][3] << endl;
    int (&row)[4] = ia[1];
    row[1] = 2;
    cout << "==" << endl;
    return 0;
}
