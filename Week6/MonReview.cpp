#include <iostream>
using namespace std;

int main() {
    cout << "Part 1: Counting loop" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << endl;
    }

    // What is the output from part 1?

    cout << endl << "Part 2: Iterating through a string" << endl;

    string word = "Hello";
    int length = word.length();

    for (int i = 0; i < length; i++) {
        cout << "Character " << i << ": " << word[i] << endl;
    }

    // What is the output from part 2?

    return 0;
}


