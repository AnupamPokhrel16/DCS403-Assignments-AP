#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a sentence: ";
    std::string line;
    std::getline(std::cin >> std::ws, line);

    int words = 0;
    bool inWord = false;
    for (char c : line)
    {
        if (std::isspace(static_cast<unsigned char>(c)))
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                ++words;
                inWord = true;
            }
        }
    }

    std::cout << "Number of words: " << words << std::endl;
    return 0;
}
