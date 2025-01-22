#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a star pattern with a border of stars
    void getStarPattern(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print the star pattern
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // Print stars for the border
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                {
                    cout << "*";
                }
                else
                {
                    // Print spaces for the inner part
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for getStarPattern
    cout << "Test Case 1: getStarPattern(3)" << endl;
    solution.getStarPattern(3);
    cout << endl;

    cout << "Test Case 2: getStarPattern(5)" << endl;
    solution.getStarPattern(5);
    cout << endl;

    cout << "Test Case 3: getStarPattern(0)" << endl;
    solution.getStarPattern(0);
    cout << endl;

    cout << "Test Case 4: getStarPattern(-2)" << endl;
    solution.getStarPattern(-2);
    cout << endl;

    return 0;
}