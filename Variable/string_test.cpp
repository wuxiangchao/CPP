#include <iostream>

using namespace std;

int reused = 42;

int main(int argc, char const *argv[])
{
    int i = 0, &r1 = i;

    double d = 0, &r2 = d;

    cout << "i before: " << i << endl;

    cout << "r1 before: " << r1 << endl;

    cout << "d before: " << d << endl;

    cout << "r2 before: " << r2 << endl;

    cout << "==================================" << endl;

    r2 = 3.14;

    cout << "i after: " << i << endl;

    cout << "r1 after: " << r1 << endl;

    cout << "d after: " << d << endl;

    cout << "r2 after: " << r2 << endl;

    cout << "==================================" << endl;

    r2 = r1;

    cout << "i after: " << i << endl;

    cout << "r1 after: " << r1 << endl;

    cout << "d after: " << d << endl;

    cout << "r2 after: " << r2 << endl;

    cout << "==================================" << endl;

    i = r2;

    cout << "i after: " << i << endl;

    cout << "r1 after: " << r1 << endl;

    cout << "d after: " << d << endl;

    cout << "r2 after: " << r2 << endl;

    cout << "==================================" << endl;

    r1 = d;

    cout << "i after: " << i << endl;

    cout << "r1 after: " << r1 << endl;

    cout << "d after: " << d << endl;

    cout << "r2 after: " << r2 << endl;

    cout << "==================================" << endl;

    return 0;
}
