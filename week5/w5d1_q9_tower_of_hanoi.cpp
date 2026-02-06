#include <iostream>
using namespace std;

// Q9. Tower of Hanoi (3 Pegs)
// Solve the Tower of Hanoi puzzle for n disks
// Move n-1 disks to auxiliary rod, move largest disk, then move n-1 back

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        // Base case: move single disk
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary using destination
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the largest disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move n-1 disks from auxiliary to destination using source
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << endl;
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
