//
// Created by WUXIANGCHAO on 2021/11/24.
//

#include <iostream>

int i = 10;

int main()
{
    int i = 1;
    int j = i;
    std::cout << j << std::endl;

    int a = 100, sum = 0;
    for (int a = 0; a != 10 ; ++a) {
        sum += a;
    }
    std::cout << a << " " << sum << std:: endl;

    int ival = 1.01;

    std::cout << ival << std::endl;

    int i2 = 0, &r1 = i2;
    double d = 0, &r2 = d;

    r2 = r1;
    i2 = r2;
    r1 = d;
    std::cout << i2 << std::endl;
    return 0;
}