//
// Created by WUXIANGCHAO on 2021/12/10.
//

#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0,1, 2, 3,4 ,5 ,6, 7, 8, 9};
//    int *p = arr; // equal: int *p = &arr[0]; 指向数组第一个元素
    int *e = &arr[10]; // 指向数组最后一个元素往后的一个位置
    for (auto *p = begin(arr); p != end(arr) ; ++p) {
        cout << &*p << endl;
    }

    int &a = *(arr + 2);
    cout << &a << endl;

    cout << "=========================================" << endl;

    int ia[] = {0, 2, 4, 6, 8};

    for (auto *p = begin(ia); p != end(ia); ++p) {
        cout << p << endl;
    }

    int *p = &ia[2];

    cout << "define p = " << p << endl;

    cout << *p << endl;

    int j = *(p + 1); // int j = p[1];

    cout << "define p =" << p << endl;

    int k = *(p - 2); //int k = p[-2];

    cout << "define p =" << p << endl;

    cout << j << endl;

    cout << "===========================================" << endl;

    int arr_test[] = {0, 1, 2, 3, 4, 5};
    int *p1 = &arr_test[2];
    int *p2 = &arr_test[3];

    cout << p1 << endl;
    cout << p2 << endl;

    p1 += p2 - p1; // 执行说明: p2 - p1 算出指针p2, p1的位移差，p1 = p1 + (p2 -p1) 最后得：p1的位置为p1原来位置加位于差

    cout << *p1 << endl;
    cout << *p2 << endl;
    return 0;
}
