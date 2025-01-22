#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print an alphabet hill pattern
    void alphaHill(int n)
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
            // Loop to print spaces before the hill
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }

            char ch = 'A'; // Initialize the character to 'A'
            int breakpoint = (2 * i + 1) / 2;

            // Loop to print the hill pattern
            for (int j = 1; j <= 2 * i + 1; j++)
            {
                cout << ch << " ";
                if (j <= breakpoint)
                    ch++;
                else
                    ch--;
            }

            // Loop to print spaces after the hill
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for alphaHill
    cout << "Test Case 1: alphaHill(3)" << endl;
    solution.alphaHill(3);
    cout << endl;

    cout << "Test Case 2: alphaHill(5)" << endl;
    solution.alphaHill(5);
    cout << endl;

    cout << "Test Case 3: alphaHill(0)" << endl;
    solution.alphaHill(0);
    cout << endl;

    cout << "Test Case 4: alphaHill(-2)" << endl;
    solution.alphaHill(-2);
    cout << endl;

    return 0;
}