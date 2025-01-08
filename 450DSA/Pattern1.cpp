#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print an n x n square of asterisks
    void printSquare(int n)
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
            // Loop to print n asterisks in each row
            for (int j = 0; j < n; j++)
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

    // Example test cases
    cout << "Test Case 1: n = 3" << endl;
    solution.printSquare(3);
    cout << endl;

    cout << "Test Case 2: n = 5" << endl;
    solution.printSquare(5);
    cout << endl;

    cout << "Test Case 3: n = 0" << endl;
    solution.printSquare(0);
    cout << endl;

    cout << "Test Case 4: n = -2" << endl;
    solution.printSquare(-2);
    cout << endl;

    return 0;
}