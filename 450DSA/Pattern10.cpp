#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a triangle pattern of stars
    void nStarTriangle(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print the upper and lower parts of the triangle
        for (int i = 0; i < 2 * n; i++)
        {
            // Loop to print stars for the upper part of the triangle
            for (int j = 0; j <= i && i < n; j++)
            {
                cout << "*";
            }
            // Loop to print stars for the lower part of the triangle
            for (int j = 2 * n - 1 - i; j > 0 && i >= n; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for nStarTriangle
    cout << "Test Case 1: nStarTriangle(3)" << endl;
    solution.nStarTriangle(3);
    cout << endl;

    cout << "Test Case 2: nStarTriangle(5)" << endl;
    solution.nStarTriangle(5);
    cout << endl;

    cout << "Test Case 3: nStarTriangle(0)" << endl;
    solution.nStarTriangle(0);
    cout << endl;

    cout << "Test Case 4: nStarTriangle(-2)" << endl;
    solution.nStarTriangle(-2);
    cout << endl;

    return 0;
}