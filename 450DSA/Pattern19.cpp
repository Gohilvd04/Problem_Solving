#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to print a symmetric pattern of stars
    void symmetry(int n)
    {
        // Check if n is non-positive
        if (n <= 0)
        {
            cout << "Invalid input. n should be a positive integer." << endl;
            return;
        }

        // Loop to print the upper part of the pattern
        for (int i = 0; i < n; i++)
        {
            // Loop to print stars before spaces
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            // Loop to print spaces
            for (int j = 0; j < 2 * i; j++)
            {
                cout << "  ";
            }
            // Loop to print stars after spaces
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }

        // Loop to print the lower part of the pattern
        for (int i = 0; i < n; i++)
        {
            // Loop to print stars before spaces
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            // Loop to print spaces
            for (int j = 0; j < 2 * (n - i - 1); j++)
            {
                cout << "  ";
            }
            // Loop to print stars after spaces
            for (int j = 0; j <= i; j++)
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

    // Example test cases for symmetry
    cout << "Test Case 1: symmetry(3)" << endl;
    solution.symmetry(3);
    cout << endl;

    cout << "Test Case 2: symmetry(5)" << endl;
    solution.symmetry(5);
    cout << endl;

    cout << "Test Case 3: symmetry(0)" << endl;
    solution.symmetry(0);
    cout << endl;

    cout << "Test Case 4: symmetry(-2)" << endl;
    solution.symmetry(-2);
    cout << endl;

    return 0;
}

/*
Original commented code:
    // for(int i=0; i<2*n; i++){
    //     if(i < 2*n / 2){
    //         for(int j=0; j<n-i; j++){
    //             cout << "* ";
    //         }
    //         for(int k=0; k<2*i; k++){
    //             cout << "  ";
    //         }
    //         for(int j=0; j<n-i; j++){
    //             cout << "* ";
    //         }

    //         cout << endl;
    //     } else {
    //         for(int j=n; j <= i; j++){
    //             cout << "* ";
    //         }
    //         for(int k=i; k< 2*n - 1; k++){
    //             cout << "  ";
    //         }
    //         for(int j=n; j <= i; j++){
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }
*/