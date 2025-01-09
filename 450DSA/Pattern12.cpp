#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a number crown pattern
    void numberCrown(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print n rows
        for (int i = 1; i <= n; i++)
        {
            // Loop to print the increasing part of the pattern
            for (int j = 1; j <= n; j++)
            {
                if (j <= i)
                {
                    cout << j << " ";
                }
                else
                {
                    cout << "  "; // Print spaces for alignment
                }
            }
            // Loop to print the decreasing part of the pattern
            for (int k = i; k >= 1; k--)
            {
                cout << k << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for numberCrown
    cout << "Test Case 1: numberCrown(3)" << endl;
    solution.numberCrown(3);
    cout << endl;

    cout << "Test Case 2: numberCrown(5)" << endl;
    solution.numberCrown(5);
    cout << endl;

    cout << "Test Case 3: numberCrown(0)" << endl;
    solution.numberCrown(0);
    cout << endl;

    cout << "Test Case 4: numberCrown(-2)" << endl;
    solution.numberCrown(-2);
    cout << endl;

    return 0;
}