#include <iostream>

using namespace std;

int main()
{
    int ival =10;
    int* p = &ival;
    cout << *p << endl;
    *p = 20;
    cout << *p << endl;
    int *p2;
    return 0;
}
