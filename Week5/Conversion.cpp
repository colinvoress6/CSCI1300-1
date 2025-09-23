#include <iostream>
using namespace std;

int main() {
    int teaspoons;
    cin >> teaspoons;

    int cups, tablespoons, remaining;

    // Convert teaspoons to cups first
    cups = teaspoons / (16 * 3);

    // Find leftover teaspoons after cups conversion
    remaining = teaspoons % (16 * 3);

    // Convert leftover teaspoons to tablespoons
    tablespoons = remaining / 3;

    // Find remaining teaspoons after tablespoons conversion
    remaining = remaining % 3;

    cout << cups << " cups, " 
         << tablespoons << " tablespoons, " 
         << remaining << " teaspoons" << endl;

    return 0;
}


