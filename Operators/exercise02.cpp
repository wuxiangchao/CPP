#include <iostream>

int main(int argc, char const *argv[])
{
    uint count{0};
    std::cout << "Please input a number:" << std::endl;
    std::cin >> count;
    std::string name;

    int c2 = count + 2;

    std::cout << "c2 = " << c2 << std::endl;

    uint age = 52;
    uint mod = age / 3; // 除
    std::cout << "d = " << mod << std::endl;

    // 取余
    std::cout << "mod = " << age % 3 << std::endl;

    int a = 37;

    a %= 3;

    std::cout << "a = " << a << std::endl;

    return 0;
}
