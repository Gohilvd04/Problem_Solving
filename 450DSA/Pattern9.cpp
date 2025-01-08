#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a diamond shape of stars
    void nStarDiamond(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print the upper part of the diamond
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

        // Loop to print the lower part of the diamond
        for (int i = 1; i < n; i++)
        {
            // Loop to print spaces before stars
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            // Loop to print stars
            for (int j = 0; j < 2 * (n - i) - 1; j++)
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

    // Example test cases for nStarDiamond
    cout << "Test Case 1: nStarDiamond(3)" << endl;
    solution.nStarDiamond(3);
    cout << endl;

    cout << "Test Case 2: nStarDiamond(5)" << endl;
    solution.nStarDiamond(5);
    cout << endl;

    cout << "Test Case 3: nStarDiamond(0)" << endl;
    solution.nStarDiamond(0);
    cout << endl;

    cout << "Test Case 4: nStarDiamond(-2)" << endl;
    solution.nStarDiamond(-2);
    cout << endl;

    return 0;
}