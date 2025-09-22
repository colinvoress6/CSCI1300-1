#include<iostream>
#include <string>

using namespace std;

int WhoIsOlder(int month1, int day1, int year1, int month2, int day2, int year2);
bool validDate(string input);

int main(){
    // Changed the input to a string
    string birth1, birth2;
    int month1, day1, year1;
    int month2, day2, year2;

    // Input for Person 1 -- Demonstrated the expected format
    cout << "Enter Person 1's birthdate (MM/DD/YYYY): ";
    cin >> birth1;
    
    // Introduction to While -- We will learn about next week
    while (!validDate(birth1)) { // Eqivalent to (validDate(birth1) == false)
        // If it was not valid, asked for the user to re-enter
        cout << "Invalid format. Please enter Person 1's birthdate (MM/DD/YYYY): ";
        cin >> birth1;
    }

    // Used stoi and .substr to separate the string into separate ints
    month1 = stoi(birth1.substr(0,2));
    day1   = stoi(birth1.substr(3,2));
    year1  = stoi(birth1.substr(6,4));

    // Input for Person 2
    cout << "Enter Person 2's birthdate (MM/DD/YYYY): ";
    cin >> birth2;
    while (!validDate(birth2)) { 
        cout << "Invalid format. Please enter Person 2's birthdate (MM/DD/YYYY): ";
        cin >> birth2;
    }
    month2 = stoi(birth2.substr(0,2));
    day2   = stoi(birth2.substr(3,2));
    year2  = stoi(birth2.substr(6,4));

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

    return 0;
}

// This function should take in two birthdays
// Return 0 if the two people are the same age
// Return 1 if the first person is older
// Return 2 if the second person is older
int WhoIsOlder(int month1, int day1, int year1, int month2, int day2, int year2){
    if (year1 > year2){
        return 2;
    }
    else if (year1 < year2){
        return 1;
    }
    else{ // Born in the same year
        if (month1 > month2){
            return 2;
        }
        else if (month2 > month1){
            return 1;
        }
        else{ // Born in the same month of the same year
            if (day1 > day2){
                return 2;
            }
            else if (day2 > day1){
                return 1;
            }
            else { // Born on the same day of the same month of the same year
                return 0;
            }
        }
    }
}

// This function should take in a string and check if it is a valid birthdate
// following the MM/DD/YYYY format.
bool validDate(string input){
    if (input.length() != 10){ // Make sure the string is 10 characters long
        return false;
    }
    if (input.at(2) != '/' || input.at(5) != '/'){ // Make sure the slashes are in the right place
        return false;
    }
    if (!isdigit(input.at(0)) || !isdigit(input.at(1)) || !isdigit(input.at(3)) || !isdigit(input.at(4))){ // Check the month and days are digits
        return false;
    }
    if (!isdigit(input.at(6)) || !isdigit(input.at(7)) || !isdigit(input.at(8)) || !isdigit(input.at(9))){ // Check the year is made of digits
        return false;
    }
    if (0 >= stoi(input.substr(0,2)) || 12 < stoi(input.substr(0,2))){ // Make sure the month is between 01 and 12
        return false;
    }
    if (0 >= stoi(input.substr(3,2)) || 31 < stoi(input.substr(3,2))){ // Make sure the day is between 01 and 31
        return false;
    }

    // Since none of the if statements were entered, true returns indicating a valid input
    return true;
}
