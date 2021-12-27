#include <iostream>

using namespace std;

int main()
{
    int *ip, ip2;
    cout << typeid(ip).name() << endl;
    cout << typeid(ip2).name() << endl;
    return 0;
}
