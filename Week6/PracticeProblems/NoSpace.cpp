#include <iostream>
#include <string>
using namespace std;

string removeSpaces(string input) {
    string result = "";
    int length = input.length();

    for (int i = 0; i < length; i++) {
        // A second inner loop here isn't really necessary.
        // There can be fun ways to build one if you want to
        // But using an if statement provides a simple direct method
        if (input[i] != ' ') {
            result += input[i];
        }
    }
    return result;
}

int main() {
    string text = "Hello, world! Hello CSCI 1300!";
    cout << removeSpaces(text) << endl;
    return 0;
}
