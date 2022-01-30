#include <iostream>

using namespace std;

int i = 42;

int main(int argc, char const *argv[])
{
    int i = 100;
    int j = i;
    cout << "j = " << j << endl;
    cout << "local i = " << i << endl;
    cout << "global i = " << ::i << endl;
    return 0;
}
