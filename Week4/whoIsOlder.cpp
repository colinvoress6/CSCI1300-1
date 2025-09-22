#include<iostream>

using namespace std;

// Function Declaration
int WhoIsOlder(int month1, int day1, int year1, int month2, int day2, int year2);

int main(){
    int month1, day1, year1;
    int month2, day2, year2;

    // Input for Person 1
    cout << "Enter Person 1's birth month (MM): ";
    cin >> month1;
    cout << "Enter Person 1's birth day (DD): ";
    cin >> day1;
    cout << "Enter Person 1's birth year (YYYY): ";
    cin >> year1;

    // Input for Person 2
    cout << "Enter Person 2's birth month (MM): ";
    cin >> month2;
    cout << "Enter Person 2's birth day (DD): ";
    cin >> day2;
    cout << "Enter Person 2's birth year (YYYY): ";
    cin >> year2;

    int result = WhoIsOlder(month1, day1, year1, month2, day2, year2);

    if (result == 1){
        cout << "Person 1 is older." << endl;
    }
    else if (result == 2){
        cout << "Person 2 is older." << endl;
    }
    else {
        cout << "They are the same age." << endl;
    }

    // return 0;
}

// Initialize Function

// Section Programming Tip 5.1: Comment your function's behavior

// This function should take in two birthdays
// Return 0 if the two people are the same age
// Return 1 if the first person is older
// Return 2 if the second person is older
int WhoIsOlder(int month, int day1, int year1, int month2, int day2, int year2){
    if (year1 > year2){
        return 2;
    }
    else if (year1 < year2){
        return 1;
    }
    else{ // Born in the same year
        if (month > month2){
            return 2;
        }
        else if (month2 > month){
            return 1;
        }
        else{ // Born in the same month of the same year
            if (day1 > day2){
                return 2;
            }
            else if (day2 > day1){
                return 1;
            }
            else {// Born on the same day of the same month of the same year
                return 0;
            }
        }
    }
}