#include <iostream>

int globalVar = 10;

void demo()
{
    static int staticLocalVar = 0;
    int localVar = 5;

    staticLocalVar++;
    localVar++;

    std::cout << "Global variable = " << globalVar << std::endl;
    std::cout << "Static local variable = " << staticLocalVar << std::endl;
    std::cout << "Local variable = " << localVar << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::cout << "--- Function call 1 ---" << std::endl;
    demo();

    std::cout << "--- Function call 2 ---" << std::endl;
    demo();

    std::cout << "--- Function call 3 ---" << std::endl;
    demo();

    return 0;
}
