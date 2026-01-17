#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter first string: ";
    std::string a;
    std::getline(std::cin >> std::ws, a);
    std::cout << "Enter second string: ";
    std::string b;
    std::getline(std::cin, b);

    std::string result = a + " " + b;
    std::cout << "Concatenated String: " << result << std::endl;
    return 0;
}
