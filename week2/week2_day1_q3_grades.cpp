#include <iostream>

int main()
{
    int marks = 0;
    std::cout << "Enter marks (0-100): ";
    std::cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        std::cout << "Grade: A" << std::endl;
    }
    else if (marks >= 60 && marks <= 79)
    {
        std::cout << "Grade: B" << std::endl;
    }
    else if (marks >= 40 && marks <= 59)
    {
        std::cout << "Grade: C" << std::endl;
    }
    else if (marks >= 0 && marks < 40)
    {
        std::cout << "Grade: F" << std::endl;
    }
    else
    {
        std::cout << "Invalid marks" << std::endl;
    }

    return 0;
}
