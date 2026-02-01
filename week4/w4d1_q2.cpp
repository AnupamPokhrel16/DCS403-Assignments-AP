// Q2. Find the Maximum Element in an Array
// Input n elements and find the largest value

#include <iostream>
using namespace std;

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

    // Finding maximum element
    int max = arr[0]; // Assume first element is maximum
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The maximum element is: " << max << endl;

    return 0;
}
