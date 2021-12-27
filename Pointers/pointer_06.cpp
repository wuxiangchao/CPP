#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 42;
    int *pi = &i;
    cout << pi << endl;
    cout << "i = " << i << endl;
    int j = 32;
    *pi = &j;
    *pi = *pi * *pi;
    cout << pi << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << *pi << endl;
    return 0;
}
