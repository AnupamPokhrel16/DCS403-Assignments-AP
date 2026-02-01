// Q9. Check if a Matrix is Symmetric
// Determine if a 3×3 matrix is symmetric
// A matrix is symmetric if A[i][j] == A[j][i] for all i, j

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    bool isSymmetric = true;

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

    // Checking if matrix is symmetric
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
        {
            break;
        }
    }

    // Displaying result
    if (isSymmetric)
    {
        cout << "\nThe matrix is SYMMETRIC" << endl;
    }
    else
    {
        cout << "\nThe matrix is NOT SYMMETRIC" << endl;
    }

    return 0;
}
