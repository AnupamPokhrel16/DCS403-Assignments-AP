#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin >> std::ws, s);

    std::cout << "Length of string: " << s.length() << std::endl;
    return 0;
}
