#include <iostream>
#include <string> // Required to use getline()
using namespace std;

int main() {
    string input;
    int capitalCount = 0;

    cout << "What is your string? ";
    getline(cin, input); // Recall getline to read a string with spaces

    int length = static_cast<int>(input.length()); // Convert size_type to int safely

    for (int i = 0; i < length; i++) { // For loop
        char c = input.at(i);
        if (c >= 'A' && c <= 'Z') {
            capitalCount++;
        }
    }

    cout << "That string has " << capitalCount << " capital letters." << endl;

    return 0;
}


