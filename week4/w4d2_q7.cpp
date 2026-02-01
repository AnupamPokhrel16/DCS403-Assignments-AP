// Q7. Matrix Multiplication (2×3 × 3×2)
// Multiply matrix A (2×3) with matrix B (3×2) to produce matrix C (2×2)

#include <iostream>
using namespace std;

int main()
{
    int matrixA[2][3], matrixB[3][2], result[2][2];

    // Taking input for Matrix A (2x3)
    cout << "Enter 6 elements for Matrix A (2x3): " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrixA[i][j];
        }
    }

    // Taking input for Matrix B (3x2)
    cout << "\nEnter 6 elements for Matrix B (3x2): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrixB[i][j];
        }
    }

    // Displaying Matrix A
    cout << "\nMatrix A (2x3):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    // Displaying Matrix B
    cout << "\nMatrix B (3x2):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    // Initializing result matrix to zero
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication using triple nested loops
    // result[i][j] = sum of (A[i][k] * B[k][j]) for all k
    for (int i = 0; i < 2; i++)
    { // Row of A
        for (int j = 0; j < 2; j++)
        { // Column of B
            for (int k = 0; k < 3; k++)
            { // Common dimension
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Displaying the result
    cout << "\nResult (A × B) (2x2):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
