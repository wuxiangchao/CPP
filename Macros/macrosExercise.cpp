//
// Created by WUXIANGCHAO on 2021/11/23.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//macros
#define  PI         3.1415926536
#define  START      0.0
#define  END        (2.0 * PI)
#define  STEP       (PI / 8.0)
#define  HEADER     (cout << " ***** Sine Function Table ***** \n\n")

int main(int argc, char **argv)
{
    HEADER;

    cout << setw(16) << "x" << setw(20) << "sin(x)\n"
         << "--------------------------------------------------------"
         << fixed << endl;

    double x;

    for(x = START; x < END+ STEP/2; x += STEP)
    {
        cout << setw(20) << x << setw(16) << sin(x) << endl;
    }

    cout << endl << endl;

    return 0;
}