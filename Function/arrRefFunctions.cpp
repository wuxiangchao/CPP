//
// Created by sirope on 2021/12/28.
//

#include <iostream>

using namespace std;

void print(int (&arr)[10]);

int main(int argc, char **argv)
{
    int i = 0, j[2] = {0 ,1};
    int k[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(k);
    return 0;
}

///
/// real param is contain 10 int elements arrays
/// \param arr
void print(int (&arr)[10])
{
    for (auto elem : arr){
        cout << elem << endl;
    }
}