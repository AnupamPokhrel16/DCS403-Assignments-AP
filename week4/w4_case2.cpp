// Case Study 2: Finding the Closest Pair
// Given a list of points, find two with the smallest distance apart
// Store all points in a 2D array points[n][2]
// Use distance formula: sqrt((x2-x1)^2 + (y2-y1)^2)
// Compare every pair of points

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of points: ";
    cin >> n;

    if (n < 2)
    {
        cout << "At least 2 points are required!" << endl;
        return 1;
    }

    // Declare 2D array to store points
    double points[n][2];

    // Input points
    cout << "\nEnter coordinates of points (x y):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Point " << i + 1 << ": ";
        cin >> points[i][0] >> points[i][1];
    }

    // Display all points
    cout << "\nAll points:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Point " << i + 1 << ": (" << points[i][0] << ", " << points[i][1] << ")" << endl;
    }

    // Find the closest pair
    double minDistance = -1;
    int point1Index = -1, point2Index = -1;

    // Compare every pair of points
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Calculate distance using distance formula
            double dx = points[j][0] - points[i][0];
            double dy = points[j][1] - points[i][1];
            double distance = sqrt(dx * dx + dy * dy);

            // Update minimum distance
            if (minDistance == -1 || distance < minDistance)
            {
                minDistance = distance;
                point1Index = i;
                point2Index = j;
            }
        }
    }

    // Display result
    cout << "\n--- CLOSEST PAIR ---" << endl;
    cout << "Point " << point1Index + 1 << ": (" << points[point1Index][0] << ", " << points[point1Index][1] << ")" << endl;
    cout << "Point " << point2Index + 1 << ": (" << points[point2Index][0] << ", " << points[point2Index][1] << ")" << endl;
    cout << fixed << setprecision(4);
    cout << "Minimum Distance: " << minDistance << endl;

    return 0;
}
