#include <iostream>
using namespace std;
int main()
{

    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    const double conversionFactor = 9.0 / 5.0;
    const double fahrenheitOffset = 32.0;

    double fahrenheit = (celsius * conversionFactor) + fahrenheitOffset;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}