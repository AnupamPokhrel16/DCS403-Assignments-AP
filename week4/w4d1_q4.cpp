// Q4. Linear Search
// Search for a number in an array using linear search
// Time Complexity: Best O(1), Average/Worst O(n)

#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, n, target);

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
