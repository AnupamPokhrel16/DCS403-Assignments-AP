#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a sentence: ";
    std::string line;
    std::getline(std::cin >> std::ws, line);

    std::string longest;
    std::string current;

    for (size_t i = 0; i <= line.size(); ++i)
    {
        if (i < line.size() && line[i] != ' ')
        {
            current.push_back(line[i]);
        }
        else
        {
            if (!current.empty() && current.size() > longest.size())
            {
                longest = current;
            }
            current.clear();
        }
    }

    if (!longest.empty())
    {
        std::cout << "Longest word: " << longest << std::endl;
    }
    else
    {
        std::cout << "No words found." << std::endl;
    }
    return 0;
}
