#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    *  This program calculates the Nth Fibonacci number.
    *  It reads an integer n from the input and prints the Nth Fibonacci number.
    */

    int n;
    cin >> n; // Read the input value n

    // Handle edge cases where n is 0 or a negative number
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer.";
        return 0;
    }

    // Initialize the first two Fibonacci numbers
    int first = 1, second = 1;
    int third;

    // Handle the base cases where n is 1 or 2
    if (n == 1 || n == 2) {
        cout << 1; // The first and second Fibonacci numbers are both 1
        return 0;
    }

    // Use a loop to calculate the Fibonacci numbers iteratively
    for (int i = 2; i < n; i++) {
        third = first + second; // Calculate the next Fibonacci number
        first = second; // Update first to the previous second
        second = third; // Update second to the newly calculated third
    }

    // Print the Nth Fibonacci number
    cout << third;
    return 0;
}

/*
Edge Cases:
1. If n is 1 or 2, the output should be 1.
2. If n is a large number, ensure the program handles it efficiently.
3. If n is 0 or a negative number, the program should handle it gracefully by printing an error message.
*/