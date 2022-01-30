//
// Created by WUXIANGCHAO on 2021/11/23.
//
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int row(10), cls(10);
    cout << " \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;
    for(int i = 1; i <= row; ++i)
    {
        for(int j=1; j <= cls; ++j)
        {
            if(j == 1)
            {
                cout << i << "\t";
            }
            cout << i * j << "\t";
            if(j == row){
                cout << endl;
            }
        }

    }
    return 0;
}
