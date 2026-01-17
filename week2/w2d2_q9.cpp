#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin >> std::ws, s);

    std::string reversed = s;
    std::reverse(reversed.begin(), reversed.end());

    if (s == reversed)
    {
        std::cout << "The string is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}
