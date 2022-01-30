#include <iostream>

using namespace std;

string global_str;
int global_int;

int main(int argc, char const *argv[])
{
    int input_value;
    cout << "please input a value :" << endl;
    cin >> input_value;
    cout << "the value what your input is " << input_value << endl;

    int i = 3;

    cout << " global string: " << global_str << endl;
    cout << " global int: " << global_int << endl;

    int local_int;
    string local_str;

    cout << " local string: " << local_str << endl;
    cout << " local int: " << local_int << endl;

    return 0;
}
