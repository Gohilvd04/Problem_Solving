#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print an alphabet ramp pattern
    void alphaRamp(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        char ch = 'A'; // Initialize the character to 'A'

        // Loop to print n rows
        for (int i = 1; i <= n; i++)
        {
            // Loop to print the character in each row
            for (int j = 1; j <= i; j++)
            {
                cout << ch << " ";
            }
            ch++; // Move to the next character
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for alphaRamp
    cout << "Test Case 1: alphaRamp(3)" << endl;
    solution.alphaRamp(3);
    cout << endl;

    cout << "Test Case 2: alphaRamp(5)" << endl;
    solution.alphaRamp(5);
    cout << endl;

    cout << "Test Case 3: alphaRamp(0)" << endl;
    solution.alphaRamp(0);
    cout << endl;

    cout << "Test Case 4: alphaRamp(-2)" << endl;
    solution.alphaRamp(-2);
    cout << endl;

    return 0;
}