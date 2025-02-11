#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n)
    {
        int temp = n;
        int count = 0;

        // Loop to process each digit of n
        while (temp > 0)
        {
            int d = temp % 10; // Get the last digit
            if (d != 0)
            { // Check if the digit is not zero
                if (n % d == 0)
                    count++; // Check if the digit evenly divides n
            }
            temp /= 10; // Remove the last digit
        }
        return count;
    }
};

int main()
{
    Solution solution;

    // Example test cases for evenlyDivides
    cout << "Test Case 1: evenlyDivides(12)" << endl;
    cout << "Result: " << solution.evenlyDivides(12) << endl; // Expected output: 2
    cout << endl;

    cout << "Test Case 2: evenlyDivides(1012)" << endl;
    cout << "Result: " << solution.evenlyDivides(1012) << endl; // Expected output: 3
    cout << endl;

    cout << "Test Case 3: evenlyDivides(123456)" << endl;
    cout << "Result: " << solution.evenlyDivides(123456) << endl; // Expected output: 3
    cout << endl;

    cout << "Test Case 4: evenlyDivides(0)" << endl;
    cout << "Result: " << solution.evenlyDivides(0) << endl; // Expected output: 0
    cout << endl;

    cout << "Test Case 5: evenlyDivides(111)" << endl;
    cout << "Result: " << solution.evenlyDivides(111) << endl; // Expected output: 3
    cout << endl;

    return 0;
}