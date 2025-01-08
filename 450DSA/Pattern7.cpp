#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a centered triangle of stars
    void nStarTriangle(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print n rows
        for (int i = 0; i < n; i++)
        {
            // Loop to print spaces before stars
            for (int j = 0; j < n - 1 - i; j++)
            {
                cout << " ";
            }
            // Loop to print stars
            for (int k = 0; k <= 2 * i; k++)
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