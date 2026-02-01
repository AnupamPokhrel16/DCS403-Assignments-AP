// Q3. Print Row-wise and Column-wise Sums
// Given a 3×3 array, print sum of each row and each column

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];

    // Taking input from user
    cout << "Enter 9 elements for 3x3 matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    cout << "\nThe 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculating and printing row sums
    cout << "\nRow sums:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    // Calculating and printing column sums
    cout << "\nColumn sums:" << endl;
    for (int j = 0; j < 3; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 3; i++)
        {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
