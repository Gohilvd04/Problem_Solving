#include <iostream>
#include <climits> // For INT_MAX and INT_MIN

using namespace std;

class Solution
{
public:
    // Function to reverse an integer
    int reverse(int x)
    {
        long long ans = 0;

        // Loop to reverse the digits of x
        while (x != 0)
        {
            int digit = x % 10;     // Get the last digit
            ans = ans * 10 + digit; // Append the digit to the reversed number
            x /= 10;                // Remove the last digit
        }

        // Check for overflow
        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};

int main()
{
    Solution solution;

    // Example test cases for reverse
    cout << "Test Case 1: reverse(123)" << endl;
    cout << "Result: " << solution.reverse(123) << endl; // Expected output: 321
    cout << endl;

    cout << "Test Case 2: reverse(-123)" << endl;
    cout << "Result: " << solution.reverse(-123) << endl; // Expected output: -321
    cout << endl;

    cout << "Test Case 3: reverse(120)" << endl;
    cout << "Result: " << solution.reverse(120) << endl; // Expected output: 21
    cout << endl;

    cout << "Test Case 4: reverse(0)" << endl;
    cout << "Result: " << solution.reverse(0) << endl; // Expected output: 0
    cout << endl;

    cout << "Test Case 5: reverse(1534236469)" << endl;
    cout << "Result: " << solution.reverse(1534236469) << endl; // Expected output: 0 (overflow)
    cout << endl;

    return 0;
}