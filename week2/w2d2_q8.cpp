#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin >> std::ws, s);

    std::reverse(s.begin(), s.end());
    std::cout << "Reversed string: " << s << std::endl;
    return 0;
}
