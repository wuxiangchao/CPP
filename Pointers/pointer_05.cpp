#include <iostream>

using namespace std;

int main()
{
    int ival = 10;
    int *pi = 0;
    cout <<"pi = " << pi <<", ival = " << ival << endl;
    pi = &ival;
    cout <<"pi = " << pi << ", ival = " << ival << endl;
    *pi = 100;
    cout << "pi = " << pi << ", ival = " << ival << endl;
    int c = 20;
    pi = &c;
    cout << "pi = " << pi << ", &c = " << &c << ", ival = " << ival << endl;
    return 0;
}
