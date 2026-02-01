// Q2. Sum of All Elements in a 2×3 Array
// Calculate and print the sum of all elements in a 2×3 array

#include <iostream>
using namespace std;

int main()
{
    int matrix[2][3];
    int sum = 0;

    // Taking input from user
    cout << "Enter 6 elements for 2x3 matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    cout << "\nThe 2x3 matrix is:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculating sum of all elements
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }

    cout << "\nSum = " << sum << endl;

    return 0;
}
