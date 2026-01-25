#include <iostream>

int add(int a, int b);

int main()
{
    int num1 = 0, num2 = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = add(num1, num2);
    std::cout << "Sum = " << result << std::endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
