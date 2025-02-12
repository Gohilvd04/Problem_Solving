#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    // Function to calculate LCM and GCD of two numbers
    vector<int> lcmAndGcd(int a, int b)
    {
        vector<int> ans;
        ans.push_back(lcm(a, b)); // Calculate LCM
        ans.push_back(gcd(a, b)); // Calculate GCD
        return ans;
    }

    // Function to calculate GCD using the Euclidean algorithm
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    // Function to calculate LCM using the relationship between LCM and GCD
    int lcm(int a, int b)
    {
        return (a * b) / gcd(a, b);
    }
};

int main()
{
    Solution solution;

    // Example test cases for lcmAndGcd
    cout << "Test Case 1: lcmAndGcd(12, 18)" << endl;
    vector<int> result1 = solution.lcmAndGcd(12, 18);
    cout << "LCM: " << result1[0] << ", GCD: " << result1[1] << endl; // Expected output: LCM: 36, GCD: 6
    cout << endl;

    cout << "Test Case 2: lcmAndGcd(5, 10)" << endl;
    vector<int> result2 = solution.lcmAndGcd(5, 10);
    cout << "LCM: " << result2[0] << ", GCD: " << result2[1] << endl; // Expected output: LCM: 10, GCD: 5
    cout << endl;

    cout << "Test Case 3: lcmAndGcd(7, 13)" << endl;
    vector<int> result3 = solution.lcmAndGcd(7, 13);
    cout << "LCM: " << result3[0] << ", GCD: " << result3[1] << endl; // Expected output: LCM: 91, GCD: 1
    cout << endl;

    cout << "Test Case 4: lcmAndGcd(0, 5)" << endl;
    vector<int> result4 = solution.lcmAndGcd(0, 5);
    cout << "LCM: " << result4[0] << ", GCD: " << result4[1] << endl; // Expected output: LCM: 0, GCD: 5
    cout << endl;

    cout << "Test Case 5: lcmAndGcd(15, 0)" << endl;
    vector<int> result5 = solution.lcmAndGcd(15, 0);
    cout << "LCM: " << result5[0] << ", GCD: " << result5[1] << endl; // Expected output: LCM: 0, GCD: 15
    cout << endl;

    return 0;
}