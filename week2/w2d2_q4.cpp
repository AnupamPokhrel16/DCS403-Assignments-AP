#include <cctype>
#include <iostream>

int main()
{
    char ch = '\0';
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (std::isalpha(static_cast<unsigned char>(ch)))
    {
        std::cout << ch << " is a letter." << std::endl;
    }
    else if (std::isdigit(static_cast<unsigned char>(ch)))
    {
        std::cout << ch << " is a digit." << std::endl;
    }
    else if (std::ispunct(static_cast<unsigned char>(ch)))
    {
        std::cout << ch << " is a special character." << std::endl;
    }
    else
    {
        std::cout << ch << " is another type of character." << std::endl;
    }
    return 0;
}
