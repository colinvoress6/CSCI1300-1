#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    int sum = 0;
    while(sum >= 0) {
        sum += num;
        cout << "Enter a number: (Negative number will terminate program)";
        cin >> sum;
    }

    cout << "The final sum is: " << sum << endl;
    
    return 0;
}