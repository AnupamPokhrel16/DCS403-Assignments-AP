#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

std::string normalize(const std::string &s)
{
    std::string cleaned;
    for (char c : s)
    {
        if (!std::isspace(static_cast<unsigned char>(c)))
        {
            cleaned.push_back(static_cast<char>(std::tolower(static_cast<unsigned char>(c))));
        }
    }
    std::sort(cleaned.begin(), cleaned.end());
    return cleaned;
}

int main()
{
    std::cout << "Enter first string: ";
    std::string a;
    std::getline(std::cin >> std::ws, a);

    std::cout << "Enter second string: ";
    std::string b;
    std::getline(std::cin, b);

    if (normalize(a) == normalize(b))
    {
        std::cout << "Strings are anagrams." << std::endl;
    }
    else
    {
        std::cout << "Strings are not anagrams." << std::endl;
    }
    return 0;
}
