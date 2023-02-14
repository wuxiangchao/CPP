#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    std::string s1("Hello World");
    std::string &s2 = s1;

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    return 0;
}
