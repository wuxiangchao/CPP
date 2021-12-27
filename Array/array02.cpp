//
// Created by WUXIANGCHAO on 2021/12/10.
//
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    for (auto i = arr; i != end(arr) ; ++i) {
        *i = 0;
    }

    for(int item: arr)
    {
        cout << item << endl;
    }
    return 0;
}