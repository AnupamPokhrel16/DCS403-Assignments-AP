#include <iostream>
using namespace std;
int main()
{
    int baseSalary;
    cout << "Enter the base salary: ";
    cin >> baseSalary;

    const double bonusPercentage = 0.10;

    double bonusAmount = baseSalary * bonusPercentage;

    double totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary (including bonus): " << totalSalary << endl;

    return 0;
}