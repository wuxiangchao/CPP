#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter the name of the person you want to write to:" << std::endl;
    std::string first_name;
    std::cin >> first_name; // get from input to a string
    std::cout << "Dear " << first_name << "," << std::endl;
    std::cout << "    How are you? I am fine? I miss you." << std::endl;

    return 0;
}
