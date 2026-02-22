#include <iostream>
#include <iomanip>

int main()
{
    double weight = 0.0, height = 0.0;
    std::cout << "Enter your weight (kg): ";
    if (!(std::cin >> weight))
    {
        std::cout << "Invalid input." << std::endl;
        return 0;
    }
    std::cout << "Enter your height (m): ";
    if (!(std::cin >> height))
    {
        std::cout << "Invalid input." << std::endl;
        return 0;
    }

    if (height <= 0)
    {
        std::cout << "Height must be greater than 0." << std::endl;
        return 0;
    }

    double bmi = weight / (height * height);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your BMI is: " << bmi << '\n';

    if (bmi < 18.5)
    {
        std::cout << "Category: Underweight" << std::endl;
    }
    else if (bmi < 25.0)
    {
        std::cout << "Category: Normal weight" << std::endl;
    }
    else if (bmi < 30.0)
    {
        std::cout << "Category: Overweight" << std::endl;
    }
    else
    {
        std::cout << "Category: Obesity" << std::endl;
    }

    return 0;
}
