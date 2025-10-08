#include <iostream>
using namespace std;

// Function to check if a number is even or odd
// Parameters: one integer (n)
// Output: prints "Even" if n is divisible by 2, otherwise prints "Odd"
// Return type: void (nothing is returned)
void checkEvenOdd(int n) {
    // The % operator (modulus) gives the remainder after division
    // If n % 2 == 0, that means n is divisible by 2 (so it's even)
    if (n % 2 == 0) {
        cout << "Even"; // print Even when divisible by 2
    } else {
        cout << "Odd"; // print Odd otherwise
    }
}

int main() {
    // Declare a variable we can save user input into
    int number;
    cout << "Enter a number: ";
    cin >> number; // get user input
    checkEvenOdd(number); // Calls function with argument 'number'
    cout << endl; // prints 'enter'

    return 0; // program ends successfully
}



