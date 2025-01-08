#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a binary triangle pattern
    void nBinaryTriangle(int n)
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
            int start;
            // Determine the starting value for each row
            if (i % 2 == 0)
                start = 1;
            else
                start = 0;

            // Loop to print the binary values in each row
            for (int j = 0; j <= i; j++)
            {
                cout << start << " ";
                start = 1 - start; // Toggle between 0 and 1
            }
            cout << endl;
        }
    }
};


// logic 2
void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if((i+j) % 2 == 0) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<endl;
    }   
}

int main()
{
    Solution solution;

    // Example test cases for nBinaryTriangle
    cout << "Test Case 1: nBinaryTriangle(3)" << endl;
    solution.nBinaryTriangle(3);
    cout << endl;

    cout << "Test Case 2: nBinaryTriangle(5)" << endl;
    solution.nBinaryTriangle(5);
    cout << endl;

    cout << "Test Case 3: nBinaryTriangle(0)" << endl;
    solution.nBinaryTriangle(0);
    cout << endl;

    cout << "Test Case 4: nBinaryTriangle(-2)" << endl;
    solution.nBinaryTriangle(-2);
    cout << endl;

    return 0;
}