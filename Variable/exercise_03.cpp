#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int iVal = 0; iVal <= 10; ++iVal)
    {
        sum += iVal;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
     
    return 0;
}
