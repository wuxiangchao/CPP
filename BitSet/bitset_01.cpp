//
// Created by WUXIANGCHAO on 2021/12/26.
//
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    unsigned long quiz1 = 0;

    cout << 1UL << endl;

    quiz1 |= 1UL << 27;

    cout << quiz1 << endl;
    return 0;
}


