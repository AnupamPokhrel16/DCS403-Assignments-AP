// Q6. Matrix Addition
// Add two 2×2 matrices and store the result

#include <iostream>
using namespace std;

int main()
{
    int matrixA[2][2], matrixB[2][2], result[2][2];

    // Taking input for first matrix
    cout << "Enter 4 elements for Matrix A (2x2): " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrixA[i][j];
        }
    }

    // Taking input for second matrix
    cout << "\nEnter 4 elements for Matrix B (2x2): " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrixB[i][j];
        }
    }

    // Displaying Matrix A
    cout << "\nMatrix A:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    // Displaying Matrix B
    cout << "\nMatrix B:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    // Adding the matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Displaying the result
    cout << "\nResult (A + B):" << endl;
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
