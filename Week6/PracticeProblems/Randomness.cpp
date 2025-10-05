#include <iostream>
#include <cstdlib>  // for rand, srand
#include <ctime>    // for time

using namespace std;

int main() {
    srand(time(0));  // seed random number generator

    int totalRolls = 100;
    int countSevens = 0;

    cout << "Rolling two dice " << totalRolls << " times..." << endl;

    for (int i = 0; i < totalRolls; i++) {
        int die1 = (rand() % 6) + 1;  // random number 1-6
        int die2 = (rand() % 6) + 1;  // random number 1-6
        int sum = die1 + die2;

        if (sum == 7) {
            countSevens++;
        }
    }

    cout << "Number of times sum was 7: " << countSevens << endl;

    double percentage = (countSevens / (double)totalRolls) * 100.0;
    cout << "That's " << percentage << "% of the time." << endl;

    return 0;
}
