#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin >> std::ws, s);

    if (s.empty())
    {
        std::cout << "" << std::endl;
        return 0;
    }

    std::string compressed;
    char current = s[0];
    int count = 1;

    for (size_t i = 1; i < s.size(); ++i)
    {
        if (s[i] == current)
        {
            ++count;
        }
        else
        {
            compressed.push_back(current);
            compressed += std::to_string(count);
            current = s[i];
            count = 1;
        }
    }
    compressed.push_back(current);
    compressed += std::to_string(count);

    std::cout << compressed << std::endl;
    return 0;
}
