#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
        int ival = 10;
        int *p = &ival;
        cout << *p << endl;
        return 0;
}
