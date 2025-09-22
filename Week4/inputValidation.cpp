#include<iostream>
using namespace std;

int main() {
    int try1;
    cout << "Give me a letter" << endl;
    cin >> try1;

    int try2;
    cout << "Now actually enter a number" << endl;
    cin >> try2;

    cout << "You gave me this as a number:" << try2 << endl;

    return 0;
}









// cin tries to convert the letter into an int
// The conversion fails
// cin enters a fail state and stops processing input
// Any later cin calls are skipped
