// Q6. Selection Sort
// Sort an array in ascending order using selection sort
// Time Complexity: Best/Average/Worst O(n²)

#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // Find minimum element in unsorted portion
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap minimum element with first element of unsorted portion
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to display array
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    displayArray(arr, n);

    // Perform selection sort
    selectionSort(arr, n);

    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}
