#include <cctype>
#include <iostream>

int main()
{
    char ch = '\0';
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (std::islower(static_cast<unsigned char>(ch)))
    {
        std::cout << "Uppercase: " << static_cast<char>(std::toupper(static_cast<unsigned char>(ch))) << std::endl;
    }
    else if (std::isupper(static_cast<unsigned char>(ch)))
    {
        std::cout << "Lowercase: " << static_cast<char>(std::tolower(static_cast<unsigned char>(ch))) << std::endl;
    }
    else
    {
        std::cout << "Not an alphabetic letter." << std::endl;
    }
    return 0;
}
