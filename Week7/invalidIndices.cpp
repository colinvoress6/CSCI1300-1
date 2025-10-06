#include <iostream>
using namespace std;

int main() {
    double values[10]= {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    cout << "Let's try this " << values[0] << endl;
    values[1000] = 5.4;
    cout << "Oops";
}

// Undefined behavior happens when trying to assign values[10]
// Some OS will show you a segmentation error
// Others may try to access outside storage and print odd numbers
// My system tends to print 'Let's try this 0.1' then terminates
