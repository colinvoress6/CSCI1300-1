#include <iostream>
using namespace std;

void printClockTimes() {
    for (int hour = 1; hour <= 12; hour++) {         // hours 1 to 12
        for (int minute = 0; minute < 60; minute++) { // minutes 0 to 59
            if (minute < 10) {
                cout << hour << ":0" << minute << endl; // add leading 0 for single-digit minutes
            } else {
                cout << hour << ":" << minute << endl;
            }
        }
    }
}

int main() {
    printClockTimes();
    return 0;
}
