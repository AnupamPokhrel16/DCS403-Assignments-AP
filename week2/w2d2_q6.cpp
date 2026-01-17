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
    std::string line;
    std::getline(std::cin >> std::ws, line);

    int vowels = 0;
    int consonants = 0;

    for (char c : line)
    {
        if (std::isalpha(static_cast<unsigned char>(c)))
        {
            if (isVowel(c))
            {
                ++vowels;
            }
            else
            {
                ++consonants;
            }
        }
    }

    std::cout << "Vowels: " << vowels << '\n';
    std::cout << "Consonants: " << consonants << '\n';
    return 0;
}
