#include <cctype>
#include <iostream>
#include <string>
#include <array>

int main()
{
    std::cout << "Enter a string: ";
    std::string text;
    std::getline(std::cin >> std::ws, text);

    std::array<int, 26> freq{};

    for (char c : text)
    {
        if (std::isalpha(static_cast<unsigned char>(c)))
        {
            char lower = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
            freq[lower - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] > 0)
        {
            char letter = static_cast<char>('a' + i);
            std::cout << letter << ':' << freq[i] << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}
