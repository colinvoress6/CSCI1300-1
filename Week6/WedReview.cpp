#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "balloon";

    cout << "Consecutive character pairs:" << endl;

    int length = text.length();

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < i + 2; j++) {
            cout << text[i] << " and " << text[j] << endl;
        }
    }

    return 0;
}



