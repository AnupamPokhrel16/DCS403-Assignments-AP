#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a string: ";
    std::string text;
    std::getline(std::cin >> std::ws, text);

    bool makeLower = true;
    for (char &c : text)
    {
        if (std::isalpha(static_cast<unsigned char>(c)))
        {
            if (makeLower)
            {
                c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
            }
            else
            {
                c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
            }
            makeLower = !makeLower; // flip only when a letter is processed
        }
    }

    std::cout << text << std::endl;
    return 0;
}
