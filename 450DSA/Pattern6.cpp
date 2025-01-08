#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print an inverted right-angled triangle with numbers
    void nNumberTriangle(int n)
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
            int count = 1;
            // Loop to print numbers from 1 to (n - i) in each row
            for (int j = n; j > i; j--)
            {
                cout << count++ << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for nNumberTriangle
    cout << "Test Case 1: nNumberTriangle(3)" << endl;
    solution.nNumberTriangle(3);
    cout << endl;

    cout << "Test Case 2: nNumberTriangle(5)" << endl;
    solution.nNumberTriangle(5);
    cout << endl;

    cout << "Test Case 3: nNumberTriangle(0)" << endl;
    solution.nNumberTriangle(0);
    cout << endl;

    cout << "Test Case 4: nNumberTriangle(-2)" << endl;
    solution.nNumberTriangle(-2);
    cout << endl;

    return 0;
}