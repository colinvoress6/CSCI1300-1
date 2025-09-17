#include<iostream>

using namespace std;

int main() {
    int digit;
    cout << "Please enter a digit 1 to 4: ";
    cin >> digit;
    string digit_name;

    switch(digit) {
        case 4: 
            digit_name = "four";
            cout << "four" << endl;
            break;
        case 2: 
            digit_name = "two";
            cout << "two" << endl;
            break;
        case 3: 
            digit_name = "three";
            cout << "three" << endl;
            break;
        case 1: 
            digit_name = "one";
            cout << "one" << endl;
            break;
        default: 
            digit_name = "default";
            cout << "default" << endl;
            break;
    }

    cout << "This is your digit name: " << digit_name << endl;
    return 0;
}

// Switch statements can take ints and chars. Not float, double, or strings