// Q5. Binary Search
// Search for an element using binary search in a sorted array
// Time Complexity: Best O(1), Average/Worst O(log n)
// Note: Array must be sorted for binary search to work

#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid; // Element found
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Search in right half
        }
        else
        {
            high = mid - 1; // Search in left half
        }
    }

    return -1; // Element not found
}

int main()
{
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input (array should be sorted)
    cout << "Enter " << n << " elements in sorted order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element found at index " << result << " (position " << result + 1 << ")" << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
