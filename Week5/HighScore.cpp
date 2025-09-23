#include <iostream>
using namespace std;

void updateStats(int newScore, int& highest, int& lowest) {
    if (newScore > highest) {
        highest = newScore;
    }
    if (newScore < lowest) {
        lowest = newScore;
    }
}

int main() {
    int highest = 0;
    int lowest = 100;

    updateStats(85, highest, lowest);
    updateStats(92, highest, lowest);
    updateStats(70, highest, lowest);

    cout << "Highest score: " << highest << endl;  // 92
    cout << "Lowest score: " << lowest << endl; // 70
}


