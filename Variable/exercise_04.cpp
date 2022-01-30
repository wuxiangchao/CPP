#include <iostream>

int reUsed = 42;

int main(int argc, char const *argv[])
{
    int unique = 0;
    std::cout << reUsed << " " << unique << std::endl;
    int reUsed = 0;
    std::cout << reUsed << " " << unique << std::endl;
    std::cout << ::reUsed << " " << unique << std::endl;
    return 0;
}
