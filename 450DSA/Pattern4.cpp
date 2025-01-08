#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a right-angled triangle with numbers
    void nTriangle(int n)
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
            // Loop to print numbers from 1 to i in each row
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for nTriangle
    cout << "Test Case 1: nTriangle(3)" << endl;
    solution.nTriangle(3);
    cout << endl;

    cout << "Test Case 2: nTriangle(5)" << endl;
    solution.nTriangle(5);
    cout << endl;

    cout << "Test Case 3: nTriangle(0)" << endl;
    solution.nTriangle(0);
    cout << endl;

    cout << "Test Case 4: nTriangle(-2)" << endl;
    solution.nTriangle(-2);
    cout << endl;

    return 0;
}