#include <iostream>
using namespace std;

int main() {
    // Example #1
    cout << "Printing: " << endl;
    int i = 5;
    cout << "Post Increment: " << i++ << endl; // i = 6
    
    i = 5;
    cout << "Pre-Increment: " << ++i << endl; // i = 6 then it is printed


    // // Example #2
    // cout << endl << "Printing Assignments: " << endl;
    // int j = 10;
    // int a = j++; // a= 10 -->  j = 11
    // cout << "Value of a: " << a << endl; // a = 10
    // int b = ++j; // j = 11 --> j = 12 --> b = 12
    // cout << "Value of b: " << b << endl; // 12


    // // Example #3
    // cout << endl << "Expressions: " << endl;
    // int k = 3;
    // int result = k++ + 5;   // k = 4
    // cout << "Post-Increment: " << result << endl; // 8 
    // int result2 = ++k + 5; // k =4 ; 4 + 1 = 5; 10
    // cout << "Pre-Increment: " << result2 << endl; // 9; 10


    // // Example #4
    // cout << endl << "Loop Conditions: " << endl;
    // int value = 0;
    // while (value++ < 5) {  // iterations? 5 = value = 1
    //     cout << "Post: Value is " << value << endl; // 1
    // }

    // value = 0;
    // while (++value < 5) {
    //     cout << "Pre: Value is " << value << endl;
    // }


    // // Example #5.1
    // cout << endl << "For Loop Post-Increment: " << endl;
    // for (int i = 0; i < 5; i++) { // Recall update comes at the end of the loop
    //     cout << i << " ";
    // }

    // int i = 0; // initialization
    // while (i < 5) { // condition
    //     cout << i << " ";
    //     i++; // update (post-increment) // Happens after the loop body
    // }


    // // Example #5.2
    // cout << endl << "For Loop Pre-Increment: " << endl;
    // for (int i = 0; i < 5; ++i) { // Recall update comes at the end of the loop
    //     cout << i << " ";
    // }

    // int j = 0; // initialization
    // while (j < 5) { // condition
    //     cout << j << " ";
    //     ++j; // update (pre-increment) // update isn't directly being used; it just updates the value
    // }

}


