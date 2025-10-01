#include <iostream>
using namespace std;

int main() {
    int secret = 7;  // hard-coded secret number
    int guess;

    // do-while ensures at least one prompt
    do {
        cout << "Guess the secret number between 1 and 10: ";
        cin >> guess;

        if (guess != secret) {
            cout << "Wrong! Try again." << endl;
        }

    } while (guess != secret);

    cout << "Correct! The secret number is " << secret << "." << endl;

    return 0;
}
