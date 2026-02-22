#include <iostream>

int main() {
    std::cout << "Enter a year: ";
    long long year = 0;
    if (!(std::cin >> year)) {
        std::cout << "Invalid input." << std::endl;
        return 0;
    }

    bool isLeap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

    if (isLeap) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
    return 0;
}
