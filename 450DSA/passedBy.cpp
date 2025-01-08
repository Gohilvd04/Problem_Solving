#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // This function takes an integer 'a' and a reference to an integer 'b'
        // It returns a vector containing 'a + 1' and 'b + 2'
        
        vector<int> ans;
        ans.push_back(a + 1); // Increment 'a' by 1 and add to the vector
        ans.push_back(b + 2); // Increment 'b' by 2 and add to the vector
        
        return ans;
    }
};

int main() {
    Solution solution;
    int a, b;

    // Read input values for 'a' and 'b'
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Get the result from the passedBy function
    vector<int> result = solution.passedBy(a, b);

    // Print the result
    cout << "Result: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

/*
Edge Cases:
1. If 'a' or 'b' are negative numbers, the function should still correctly increment them.
2. If 'a' or 'b' are very large numbers, ensure the program handles potential overflow (though C++ handles large integers better than some other languages).
3. Ensure the program handles zero values correctly.
*/