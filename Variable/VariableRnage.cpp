//
// Created by WUXIANGCHAO on 2021/11/22.
//
#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char ** argv)
{
    //
    cout << "Range of types int and unsigned int " << endl << endl;
    cout << "Type\tMinimum\t\tMaximum" << endl <<
            "-----------------------------------------------------"
            << endl;
    cout << "char\t" << CHAR_MIN << "\t\t" << CHAR_MAX << endl;
    cout << "uchar\t" << 0 << "\t\t" << UCHAR_MAX << endl;
    cout << "schar\t" << SCHAR_MIN << "\t\t" << SCHAR_MAX << endl;
    cout << "wchar_t\t" << WCHAR_MIN << "\t\t" << WCHAR_MAX << endl;
    cout << "int\t" << INT_MIN << "\t" << INT_MAX << endl;
    cout << "uint\t" << 0 << "\t\t" << UINT16_MAX << endl;
    cout << "short\t" << SHRT_MIN <<"\t\t" << SHRT_MAX << endl;
    cout << "ushort\t" << 0 << "\t\t" << USHRT_MAX << endl;
    cout << "long\t" << LONG_MIN << "\t\t" << LONG_MAX << endl;
    cout << "ulong\t" << 0 << "\t\t" << ULONG_MAX << endl;
    cout << "float\t" << sizeof(float) << endl;
    cout << hex << 27 << endl;
    return 0;
}
