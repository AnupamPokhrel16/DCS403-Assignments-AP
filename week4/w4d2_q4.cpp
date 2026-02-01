// Q4. Find Largest Element in Each Row
// Input a 3×3 matrix and print the largest element of each row

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

    // Finding and printing largest element in each row
    cout << "\nLargest element in each row:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int maxInRow = matrix[i][0]; // Assume first element is max
        for (int j = 1; j < 3; j++)
        {
            if (matrix[i][j] > maxInRow)
            {
                maxInRow = matrix[i][j];
            }
        }
        cout << "Row " << i + 1 << ": " << maxInRow << endl;
    }

    return 0;
}
