#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a right-angled triangle of asterisks
    void nForest(int n)
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
            // Loop to print i asterisks in each row
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for nForest
    cout << "Test Case 1: nForest(3)" << endl;
    solution.nForest(3);
    cout << endl;

    cout << "Test Case 2: nForest(5)" << endl;
    solution.nForest(5);
    cout << endl;

    cout << "Test Case 3: nForest(0)" << endl;
    solution.nForest(0);
    cout << endl;

    cout << "Test Case 4: nForest(-2)" << endl;
    solution.nForest(-2);
    cout << endl;

    return 0;
}