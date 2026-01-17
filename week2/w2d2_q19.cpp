#include <cctype>
#include <iostream>
#include <string>

bool isVowel(char c)
{
    char lower = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main()
{
    std::cout << "Enter a string: ";
    std::string text;
    std::getline(std::cin >> std::ws, text);

    std::string result;
    for (char c : text)
    {
        if (!isVowel(c))
        {
            result.push_back(c);
        }
    }

    std::cout << result << std::endl;
    return 0;
}
