#include <iostream>
using namespace std;

// Q4. Print All Elements of an Array Using Recursion
// Use an index that increments with each recursive call

void printArray(int arr[], int n, int index = 0)
{
    if (index == n)
    {
        return; // Base case: reached end of array
    }
    cout << arr[index] << " ";
    printArray(arr, n, index + 1); // Recursive call with incremented index
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);
    cout << endl;

    return 0;
}
