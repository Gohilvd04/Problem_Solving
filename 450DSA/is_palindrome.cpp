#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to check if an integer is a palindrome
    bool isPalindrome(int x)
    {
        // Negative numbers are not palindromes
        if (x < 0)
            return false;

        int n = x;
        int rev = 0;

        // Loop to reverse the digits of x
        while (n > 0)
        {
            int last = n % 10;     // Get the last digit
            rev = rev * 10 + last; // Append the digit to the reversed number
            n /= 10;               // Remove the last digit
        }

        // Check if the reversed number is equal to the original number
        return rev == x;
    }
};

int main()
{
    Solution solution;

    // Example test cases for isPalindrome
    cout << "Test Case 1: isPalindrome(121)" << endl;
    cout << "Result: " << (solution.isPalindrome(121) ? "true" : "false") << endl; // Expected output: true
    cout << endl;

    cout << "Test Case 2: isPalindrome(-121)" << endl;
    cout << "Result: " << (solution.isPalindrome(-121) ? "true" : "false") << endl; // Expected output: false
    cout << endl;

    cout << "Test Case 3: isPalindrome(10)" << endl;
    cout << "Result: " << (solution.isPalindrome(10) ? "true" : "false") << endl; // Expected output: false
    cout << endl;

    cout << "Test Case 4: isPalindrome(0)" << endl;
    cout << "Result: " << (solution.isPalindrome(0) ? "true" : "false") << endl; // Expected output: true
    cout << endl;

    cout << "Test Case 5: isPalindrome(12321)" << endl;
    cout << "Result: " << (solution.isPalindrome(12321) ? "true" : "false") << endl; // Expected output: true
    cout << endl;

    return 0;
}