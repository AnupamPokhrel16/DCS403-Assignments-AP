// Q1. Store and Display 5 Integers
// Declare an array of 5 integers, take input from user and print all elements

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    // Taking input from user
    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Displaying the elements
    cout << "\nThe elements in the array are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
