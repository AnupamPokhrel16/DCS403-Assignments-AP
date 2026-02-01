// Q7. Bubble Sort
// Sort an array in ascending order using bubble sort
// Time Complexity: Best O(n), Average/Worst O(n²)

#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;

        // Compare adjacent elements and swap if needed
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swaps occurred, array is sorted (early-stop optimization)
        if (!swapped)
        {
            break;
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

    // Perform bubble sort
    bubbleSort(arr, n);

    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}
