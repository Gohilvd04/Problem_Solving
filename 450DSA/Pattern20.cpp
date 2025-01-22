#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a symmetric pattern of stars
    void symmetry(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print the symmetric pattern
        for (int i = 0; i < 2 * n - 1; i++)
        {
            if (i < n)
            {
                // Upper part of the pattern
                for (int j = 0; j <= i; j++)
                {
                    cout << "* ";
                }
                for (int j = 0; j < 2 * (n - i - 1); j++)
                {
                    cout << "  ";
                }
                for (int j = 0; j <= i; j++)
                {
                    cout << "* ";
                }
            }
            else
            {
                // Lower part of the pattern
                for (int j = 0; j < 2 * n - 1 - i; j++)
                {
                    cout << "* ";
                }
                for (int j = 0; j < 2 * (i - n + 1); j++)
                {
                    cout << "  ";
                }
                for (int j = 0; j < 2 * n - 1 - i; j++)
                {
                    cout << "* ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for symmetry
    cout << "Test Case 1: symmetry(3)" << endl;
    solution.symmetry(3);
    cout << endl;

    cout << "Test Case 2: symmetry(5)" << endl;
    solution.symmetry(5);
    cout << endl;

    cout << "Test Case 3: symmetry(0)" << endl;
    solution.symmetry(0);
    cout << endl;

    cout << "Test Case 4: symmetry(-2)" << endl;
    solution.symmetry(-2);
    cout << endl;

    return 0;
}