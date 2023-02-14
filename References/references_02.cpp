#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int iVal = 1.01;
    int &rVal = iVal;

    cout << "iVal = " << iVal << "; add = " << &iVal << endl;
    cout << "rVal = " << rVal << "; add = " << &rVal << endl;

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    cout << "i  = " << i  << "; add = " << &i << endl;
    cout << "r1 = " << r1 << "; add = " << &r1 << endl;
    cout << "d = " << d << "; add = " << &d << endl;
    cout << "r2 = " << r2 << "; add = " << &r2 << endl;

    r2 = 4.14159;
    cout << "d = " << d << "; add = " << &d << endl;
    cout << "r2 = " << r2 << "; add = " << &r2 << endl;

    r2 = r1;

    cout << "i  = " << i  << "; add = " << &i << endl;
    cout << "r1 = " << r1 << "; add = " << &r1 << endl;
    cout << "d = " << d << "; add = " << &d << endl;
    cout << "r2 = " << r2 << "; add = " << &r2 << endl;

    i = r2;

    cout << "i  = " << i  << "; add = " << &i << endl;
    cout << "r1 = " << r1 << "; add = " << &r1 << endl;
    cout << "d = " << d << "; add = " << &d << endl;
    cout << "r2 = " << r2 << "; add = " << &r2 << endl;

    int i_test, &r_test = i_test;

    i_test = 5;
    r_test = 10;

    cout << "i_test = " << i_test << "; r_test = " << r_test << endl;

    return 0;
}
