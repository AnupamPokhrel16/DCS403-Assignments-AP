#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int i = 1;
    do
    {
        std::cout << num << " x " << i << " = " << (num * i) << std::endl;
        ++i;
    } while (i <= 10);

    return 0;
}
