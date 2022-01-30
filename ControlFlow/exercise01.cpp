//
// Created by WUXIANGCHAO on 2021/11/23.
//
#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    int x, count = 0;
    float sum = 0.0;
    cout << "Please enter some integers: \n"
            "(Break with any letter)"
            << endl;
    while (cin >> x)
    {
        sum += x;
        ++count;
        cout << "sum = " << sum << endl;
    }
    cout << "The average of the numbers: "
         << sum / count << endl;
    return 0;
}

