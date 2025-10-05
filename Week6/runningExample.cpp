#include<iostream>
#include<string>
using namespace std;

int main() {
    // // COMPUTE THE SUM
    // double total1 = 0;
    // double input1;
    // cout << "Enter various numbers. Enter Q when done: ";
    // while (cin >> input1) { // What does this return? When?
    //     // total1 = total1 + input1; //What is another way to write this?
    //     total1 += input1;
    // }
    // cout << "Here is your total: " << total1 << endl;



    // // COMPUTE THE AVERAGE
    // double total2 = 0;
    // int count = 0; // Added
    // double input2;
    // cout << endl << "Enter various numbers. Enter Q when done: ";
    // while (cin >> input2) {
    //     total2 =+ input2;
    //     count++; // Added
    // }
    // double average = 0; // Added
    // if (count > 0) average = total2 / count; // Added // Can remove {} if on one line
    // cout << "Here is your average: " << average; // Added



    // TEACHING POINT: Signed vs. Unsigned Integers
    // Run Counting the number of matches first. Observe error
        // with and without -Wall etc.
    // Signed Integers: Positive and Negative ints
    // Unsigned Integers: Only positive ints
    // Things like .length() and .size() use unsigned ints
    // Our warning shows up as an error with -Werror
    // To address this warning:
        // Introduce static_cast<int>(str.length()) making it a signed int



    // // COUNTING THE NUMBER OF MATCHES
    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str); // Recall getline

    // int spaces = 0;
    // // for (int i = 0; i < str.length(); i++) { // Introduce static casting
    // for (int i = 0; i < static_cast<int>(str.length()); i++) {
    //     // substr(position, count)
    //     string ch = str.substr(i, 1); // Review - What does this do?
    //     if (ch == " ") {
    //         spaces++;
    //     }
    // }
    // cout << "Here is the number of spaces: " << spaces << endl;



    // Continue lecture here

    // // COUNTING THE NUMBER OF MATCHES CONT.
    // int short_words = 0;
    // string input = "";
    // cout << "Enter various words (1 to exit): ";
    // while(cin >> input) {
    //     if (input == "1") { // Review sentinel values
    //         break;
    //     }
    //     if(input.length() <= 3){
    //         short_words++;
    //     }
    // }
    // cout << "Here is the number of short words: " << short_words << endl;



    // // FINDING THE FIRST MATCH
    // bool found = false;
    // int position = 0;
    // string str = "";
    // cout << "Enter a sentence: ";
    // getline(cin, str);
    // // while(!found && position < str.length()) {
    // while(!found && position < static_cast<int>(str.length())) {
    //     string ch = str.substr(position, 1);
    //     if(ch == " ") {
    //         found = true;
    //     }
    //     else {
    //         position++;
    //     }
    // }
    // cout << "Here is the position of your first space: " << position << endl;



    // // PROMPTING UNTIL A MATCH IS FOUND
    // bool valid = false;
    // double input3;
    // while(!valid) {
    //     cout << "Please enter a positive value < 100: ";
    //     cin >> input3;
    //     if(0 < input3 && input3 < 100) {
    //         valid = true;
    //     }
    //     else {
    //         cout << "Invalid input." << endl;
    //     }
    // }
    // cout << "You entered a valid input: " << input3 << endl;
    
    // double input; // Keep the same type // Show as string ("-"")
    // cout << "Is cin in a fail state? ";
    // if (cin >> input) cout << "No";
    // else cout << "Yes";



    // // MAXIMUM
    // double largest;
    // cout << "Enter a series of decimals (Q to quit): ";
    // cin >> largest;
    // double input4;
    // while(cin >> input4) {
    //     if(input4 > largest) {
    //         largest = input4;
    //     }
    // }
    // cout << "Here is the largest number: " << largest << endl;



    // // MINIMUM
    // double smallest;
    // cout << "Enter a series of decimals (Q to quit): ";
    // cin >> smallest;
    // double input5;
    // while(cin >> input5) {
    //     if(input5 < smallest){
    //         smallest = input5;
    //     }
    // }
    // cout << "Here is the smallest number: " << smallest << endl;



    // // COMPARING ADJACENT VALUES
    // double input;
    // double previous;
    // cout << "Enter a series of decimals (Q to quit): ";
    // cin >> previous;
    // while(cin >> input) {
    //     if(input == previous) {
    //         cout << "Duplicate input" << endl;
    //     }
    //     previous = input;
    // }



    // TEACHING POINT: Return value
    // What does return 0 mean?  Tells OS program was successful
    // Why might I use return -1? Non-zero some kind of error
    // How is this unique to main? Return value goes to OS
    // Other functions return to calling function not os
    // So return -1 inside a different function is just the (signed) int -1
    return 0;

    // Optional in C++: if main() reaches } without a return statement
    // Automatically assumes return 0;
}