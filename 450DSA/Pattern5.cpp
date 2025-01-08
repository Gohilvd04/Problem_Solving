#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print an inverted right-angled triangle of asterisks
    void seeding(int n)
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
            // Loop to print (n - i) asterisks in each row
            for (int j = n; j > i; j--)
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

    // Example test cases for seeding
    cout << "Test Case 1: seeding(3)" << endl;
    solution.seeding(3);
    cout << endl;

    cout << "Test Case 2: seeding(5)" << endl;
    solution.seeding(5);
    cout << endl;

    cout << "Test Case 3: seeding(0)" << endl;
    solution.seeding(0);
    cout << endl;

    cout << "Test Case 4: seeding(-2)" << endl;
    solution.seeding(-2);
    cout << endl;

    return 0;
}