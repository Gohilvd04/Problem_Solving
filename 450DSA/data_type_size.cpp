#include <iostream>
#include <string>

using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        // This function returns the size of the data type specified by the input string
        if (str == "Character") return sizeof(char);
        else if (str == "Integer") return sizeof(int);
        else if (str == "Long") return sizeof(long);
        else if (str == "Float") return sizeof(float);
        else if (str == "Double") return sizeof(double);
        else return -1; // Return -1 for invalid input
    }
};

int main() {
    Solution solution;
    string input;

    // Read the input data type from the user
    cout << "Enter the data type (Character, Integer, Long, Float, Double): ";
    cin >> input;

    // Get the size of the specified data type
    int size = solution.dataTypeSize(input);

    // Handle edge cases and print the result
    if (size == -1) {
        cout << "Invalid data type entered." << endl;
    } else {
        cout << "Size of " << input << " is: " << size << " bytes." << endl;
    }

    return 0;
}

/*
Edge Cases:
1. If the input string does not match any of the specified data types, the program should return -1 and print an error message.
2. The input string should be case-sensitive, meaning "character" or "CHARACTER" should be considered invalid.
3. Ensure the program handles unexpected input gracefully.
*/