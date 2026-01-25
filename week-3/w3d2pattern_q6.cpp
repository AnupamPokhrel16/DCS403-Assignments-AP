#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int sp = 1; sp <= i - 1; ++sp)
        {
            std::cout << " ";
        }
        for (int st = 1; st <= 2 * (n - i) + 1; ++st)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
