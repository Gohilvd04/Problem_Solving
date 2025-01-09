#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a letter triangle pattern
    void nLetterTriangle(int n)
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
            char ch = 'A'; // Initialize the character to 'A'
            // Loop to print letters in each row
            for (int j = 1; j <= i; j++)
            {
                cout << ch++ << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Example test cases for nLetterTriangle
    cout << "Test Case 1: nLetterTriangle(3)" << endl;
    solution.nLetterTriangle(3);
    cout << endl;

    cout << "Test Case 2: nLetterTriangle(5)" << endl;
    solution.nLetterTriangle(5);
    cout << endl;

    cout << "Test Case 3: nLetterTriangle(0)" << endl;
    solution.nLetterTriangle(0);
    cout << endl;

    cout << "Test Case 4: nLetterTriangle(-2)" << endl;
    solution.nLetterTriangle(-2);
    cout << endl;

    return 0;
}