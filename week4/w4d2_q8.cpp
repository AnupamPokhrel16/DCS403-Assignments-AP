// Q8. Passing a 2D Array to a Function
// Write a function printMatrix() that prints a 3×3 matrix

#include <iostream>
using namespace std;

// Function to print a 3x3 matrix
// Note: When passing 2D array to function, column size must be specified
void printMatrix(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

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

    // Calling the function to print the matrix
    cout << "\nThe 3x3 matrix is:" << endl;
    printMatrix(matrix, 3);

    return 0;
}
