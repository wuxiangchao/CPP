//
// Created by WUXIANGCHAO on 2021/11/24.
//

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char **argv)
{
    long sec;
    time( &sec);

    string tm = ctime(&sec);

    cout << sec << endl;
    cout << tm << endl;

    string hr(tm, 11,2);
    cout << hr << endl;
    return 0;
}

