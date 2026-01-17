#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a string: ";
    std::string text;
    std::getline(std::cin >> std::ws, text);

    std::string lettersOnly;
    for (char c : text)
    {
        if (std::isalpha(static_cast<unsigned char>(c)))
        {
            lettersOnly.push_back(c);
        }
    }

    std::cout << lettersOnly << std::endl;
    return 0;
}
