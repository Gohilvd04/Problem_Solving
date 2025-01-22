#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print an alphabet triangle pattern
    void alphaTriangle(int n)
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
            char ch = 'A' + n - 1; // Initialize the character to 'A' + n - 1

            // Loop to print letters in each row
            for (int j = 0; j <= i; j++)
            {
                cout << ch-- << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for alphaTriangle
    cout << "Test Case 1: alphaTriangle(3)" << endl;
    solution.alphaTriangle(3);
    cout << endl;

    cout << "Test Case 2: alphaTriangle(5)" << endl;
    solution.alphaTriangle(5);
    cout << endl;

    cout << "Test Case 3: alphaTriangle(0)" << endl;
    solution.alphaTriangle(0);
    cout << endl;

    cout << "Test Case 4: alphaTriangle(-2)" << endl;
    solution.alphaTriangle(-2);
    cout << endl;

    return 0;
}