#include <iostream>
using namespace std;

int main() {
    int current, previous;
    bool first = true;  // to skip comparison for very first input

    cout << "Enter numbers (-1 to exit):" << endl;

    while (true) {
        cin >> current;

        if (current == -1) {
            break; // stop input when -1 is entered
        }

        if (!first) {
            if (current == previous) {
                cout << current << " is the same as " << previous << endl;
            } else if (current > previous) {
                cout << current << " is greater than " << previous << endl;
            } else {
                cout << current << " is less than " << previous << endl;
            }
        } else {
            first = false; // after first input, comparisons can start
        }

        previous = current; // update for next loop
    }

    return 0;
}
