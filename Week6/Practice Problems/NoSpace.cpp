#include <iostream>
using namespace std;

string removeSpaces(const string& input) {
    string result = "";
    for (char c : input) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    string text = "Hello, world! Hello CSCI 1300!";
    string noSpaces = removeSpaces(text);

    cout << noSpaces << endl;

    return 0;
}
