#include <iostream>
using namespace std;

int main() {
    // Create a scanner object to read input
    int n;
    cout << "Enter an integer: ";
    cin >> n; // Read the integer input

    // Initialize the counter
    int i = 10;

    // Loop to print the first 10 multiples of the input number in reverse order
    while (i > 0) {
        cout << i * n << " "; // Print the multiple
        i--; // Decrement the counter
    }

    cout << endl; // Print a newline at the end
    return 0;
}

/*
Edge Cases:
1. If the input is 0, the output will be a series of zeros.
2. If the input is a negative number, the output will be negative multiples.
3. If the input is a very large number, ensure the program handles it without overflow (though C++ handles large integers better than some other languages).
*/