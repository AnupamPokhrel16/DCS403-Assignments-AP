// Case Study 3: Sudoku Verification
// Verify if a Sudoku solution is valid using 2D arrays
// Use a 9×9 integer array grid[9][9]
// Check:
//   1. Each row has digits 1–9 with no repetition
//   2. Each column has digits 1–9 with no repetition
//   3. Each 3×3 subgrid has digits 1–9 with no repetition

#include <iostream>
using namespace std;

// Function to check if a row is valid
bool isValidRow(int grid[9][9], int row)
{
    bool seen[10] = {false}; // Track digits 1-9

    for (int col = 0; col < 9; col++)
    {
        int num = grid[row][col];
        if (num < 1 || num > 9 || seen[num])
        {
            return false;
        }
        seen[num] = true;
    }
    return true;
}

// Function to check if a column is valid
bool isValidColumn(int grid[9][9], int col)
{
    bool seen[10] = {false}; // Track digits 1-9

    for (int row = 0; row < 9; row++)
    {
        int num = grid[row][col];
        if (num < 1 || num > 9 || seen[num])
        {
            return false;
        }
        seen[num] = true;
    }
    return true;
}

// Function to check if a 3x3 subgrid is valid
bool isValidSubgrid(int grid[9][9], int startRow, int startCol)
{
    bool seen[10] = {false}; // Track digits 1-9

    for (int row = startRow; row < startRow + 3; row++)
    {
        for (int col = startCol; col < startCol + 3; col++)
        {
            int num = grid[row][col];
            if (num < 1 || num > 9 || seen[num])
            {
                return false;
            }
            seen[num] = true;
        }
    }
    return true;
}

// Function to verify the entire Sudoku
bool isValidSudoku(int grid[9][9])
{
    // Check all rows
    for (int row = 0; row < 9; row++)
    {
        if (!isValidRow(grid, row))
        {
            cout << "Invalid: Row " << row + 1 << " has duplicates or invalid numbers" << endl;
            return false;
        }
    }

    // Check all columns
    for (int col = 0; col < 9; col++)
    {
        if (!isValidColumn(grid, col))
        {
            cout << "Invalid: Column " << col + 1 << " has duplicates or invalid numbers" << endl;
            return false;
        }
    }

    // Check all 3x3 subgrids
    for (int row = 0; row < 9; row += 3)
    {
        for (int col = 0; col < 9; col += 3)
        {
            if (!isValidSubgrid(grid, row, col))
            {
                cout << "Invalid: 3x3 subgrid at position (" << row / 3 + 1 << ", " << col / 3 + 1 << ") has duplicates" << endl;
                return false;
            }
        }
    }

    return true;
}

// Function to display the Sudoku grid
void displaySudoku(int grid[9][9])
{
    cout << "\n+-------+-------+-------+" << endl;
    for (int row = 0; row < 9; row++)
    {
        cout << "| ";
        for (int col = 0; col < 9; col++)
        {
            cout << grid[row][col] << " ";
            if ((col + 1) % 3 == 0)
            {
                cout << "| ";
            }
        }
        cout << endl;
        if ((row + 1) % 3 == 0)
        {
            cout << "+-------+-------+-------+" << endl;
        }
    }
}

int main()
{
    int grid[9][9];

    cout << "Enter the 9x9 Sudoku grid (row by row, space-separated):" << endl;
    cout << "Use numbers 1-9 only." << endl
         << endl;

    // Input the Sudoku grid
    for (int row = 0; row < 9; row++)
    {
        cout << "Row " << row + 1 << ": ";
        for (int col = 0; col < 9; col++)
        {
            cin >> grid[row][col];
        }
    }

    // Display the grid
    cout << "\nYour Sudoku Grid:";
    displaySudoku(grid);

    // Verify the Sudoku
    cout << "\n--- VERIFICATION RESULT ---" << endl;
    if (isValidSudoku(grid))
    {
        cout << "✓ The Sudoku solution is VALID!" << endl;
    }
    else
    {
        cout << "✗ The Sudoku solution is INVALID!" << endl;
    }

    return 0;
}
