//
// Created by sirope on 2021/12/28.
//

#include <iostream>

using namespace std;

void print(const int *begin, const int *end);

int main(int argc, char **argv)
{
    int val[3] = {1, 2,3};

    print(val, end(val));
    return 0;
}

void print(const int *begin, const int *end)
{
    while(begin != end)
    {
        cout << *begin++ << endl;
    }

}