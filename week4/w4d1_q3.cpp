// Q3. Sum of Elements Using a Function
// Write a function that accepts an integer array and returns the sum of its elements

#include <iostream>
using namespace std;

// Function to calculate sum of array elements
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
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

    // Calling function to get sum
    int totalSum = sumArray(arr, n);

    cout << "Sum of all elements: " << totalSum << endl;

    return 0;
}
