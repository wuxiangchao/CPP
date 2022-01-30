#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0, sum = 0;
    for(int i = 0; i != 10; ++i)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}
