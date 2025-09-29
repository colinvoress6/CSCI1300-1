#include <iostream>
using namespace std;

int main() {
    // Rectangle boundaries
    int leftX = 0;
    int rightX = 2;
    int bottomY = 1;
    int topY = 3;

    // Loop over all integer points
    for (int x = leftX; x <= rightX; x++) {   // X goes from left to right
        for (int y = bottomY; y <= topY; y++) { // Y goes from bottom to top
            cout << "(" << x << "," << y << ") ";
        }
        cout << endl; // new line for each column of X
    }

    return 0;
}
