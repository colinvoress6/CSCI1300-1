#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num >= 0) {
        sum += num;  // add the number to the total
        cout << "Enter another number (negative number to stop): ";
        cin >> num;
    }

    cout << "Final sum = " << sum << endl;
    return 0;
}
