#include <iostream>
using namespace std;

int main() {
    // Example #1
    cout << "Printing: " << endl;
    int i = 5;
    cout << "Post Increment: " << i++ << endl;
    
    i = 5;
    cout << "Pre-Increment: " << ++i << endl;


    // Example #2
    cout << endl << "Printing Assignments: " << endl;
    int j = 10;
    int a = j++;
    cout << "Value of a: " << a << endl;
    int b = ++j;
    cout << "Value of b: " << b << endl;


    // Example #3
    cout << endl << "Expressions: " << endl;
    int k = 3;
    int result = k++ + 5;   
    cout << "Post-Increment: " << result << endl;
    int result2 = ++k + 5;
    cout << "Pre-Increment: " << result2 << endl;


    // Example #4
    cout << endl << "Loop Conditions: " << endl;
    int value = 0;
    while (value++ < 5) { 
        cout << "Post: Value is " << value << endl;
    }

    value = 0;
    while (++value < 5) {
        cout << "Pre: Value is " << value << endl;
    }


    // Example #5
    cout << endl << "For Loop Post-Increment: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }

    cout << endl << "For Loop Pre-Increment: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }
}


