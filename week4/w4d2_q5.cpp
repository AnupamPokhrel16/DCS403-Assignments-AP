// Q5. Transpose of a Matrix
// Print the transpose of a given 3×3 matrix

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    int transpose[3][3];

    // Taking input from user
    cout << "Enter 9 elements for 3x3 matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Displaying the original matrix
    cout << "\nOriginal matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Computing transpose (swap rows and columns)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the transpose
    cout << "\nTranspose of the matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
