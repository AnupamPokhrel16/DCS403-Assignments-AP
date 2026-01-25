#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int count = 0;
    do
    {
        count++;
        num /= 10;
    } while (num > 0);

    std::cout << "Number of digits = " << count << std::endl;
    return 0;
}
