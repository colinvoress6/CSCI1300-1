#include <iostream>
#include <fstream> // Part 1: For File I/O Streams
#include <string> // Part 1: For getline()
#include <cctype>// Part 2: For helper functions like isupper()
#include <iomanip>// Part 3: For stream manipulators like setw()

using namespace std;

void part1() {
    cout << "PART 1 - Review" << endl;
    cout << "---------------" << endl;

    // Step 1: Open the input file "input.txt"
    ifstream inFile("input.txt");

    // Step 2: Check if the file opened (Print an error if not)
    if(!inFile.fail()){
            cout<<"Error"<<endl;
        
    }

    // Step 3: Read and print each line from the file
    cout << "Printing lines from input.txt: " << endl;
    string line;
    while(getline(inFile, line)){
        cout << line << endl;
    }


    // Reset the file to read from the beginning again (Completed)
    inFile.close();
    inFile.open("input.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input.txt!" << endl;
        return;
    }


    // Step 4: Read and print each word from the file (Not each line)
    cout << endl << "Printing individual words from input.txt: " << endl;
    string word;
    while(inFile >> word){
        cout << word << endl;
    }

    // Step 5: Close the file
    inFile.close();


    cout << endl;
}

void part2() {
    cout << "PART 2 - Reading Input" << endl;
    cout << "----------------------" << endl;

    // Step 1: Open the input file input2.txt
    ifstream inFile("input2.txt");

    // Step 2: Read and print each character individually
    cout << "Read each character from input2.txt: " << endl;
    char ch;
    while(inFile.get(ch)){
        cout << ch << endl;    
    }

    // Reset the file to read from the beginning again (Completed)
    inFile.close();
    inFile.open("input2.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input2.txt!" << endl;
        return;
    }


    // Step 3: Count and print all uppercase letters
    cout << endl << "Count uppercase letters: " << endl;
    char character;
    int upperCount = 0;
    /*Loop*/
    while(inFile >> character){
        if (isupper(character)){
            cout << character << " ";
            upperCount ++;
        }
    }
    cout << endl << "Total uppercase letters: " << upperCount << endl;


    // Reset the file to read from the beginning again (Completed)
    inFile.close();
    inFile.open("input2.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input2.txt!" << endl;
        return;
    }


    // Step 4: Read using a delimiter (comma) and print each section
    cout << endl << "Read with a comma delimiter: " << endl;
    string line;
    char delimiter = ',';
    while (getline(inFile, line, delimiter)){
        cout << line << endl;
    }
}

 void part3() {
     cout << "PART 3 - Writing Output" << endl;
    cout << "-----------------------" << endl;

    // Step 1: Open output.txt for writing (Without appending)
    ofstream outFile("output.txt");
    if (!outFile.is_open()){
        cout << "error" << endl;
    }

    // Step 2: Write a line to the file
    outFile << "This will be overwritten" << endl;

    // Step 3: Close the file
    outFile.close();

    // Step 4: Open output.txt again (Without appending)
    // This is to show we can overwrite
     outFile.open("output.txt");
    if (!outFile.is_open()){
        cout << "error" << endl;
    }

    // Step 5: Write a line to the file (This will overwrite your original line)
    outFile << "Hi Y'all!" << endl;

    // Step 6: Close the file again
    outFile.close();

    // Step 7: Open output.txt in append mode and add more lines
    outFile.open("output.txt");
    if (!outFile.is_open()){
        cout << "error" << endl;
    }
    outFile << "New line!"<< endl;
    outFile << "Another new line!" << endl;

    // Step 8: Demonstrate string manipulator with setw
    outFile << setw(25) << "Set the width" << endl;

    // Step 9: Don't forget to close the file
    outFile.close();
} 

int main() {
    cout << "The start of the script: " << endl;

    part1(); // Calling func part1 to execute

    cout << "Part 1 executed and we returned to main" << endl << endl;

    part2(); // Calling func part2 to execute

    cout << "Part 2 executed and we returned to main" << endl << endl;

    part3(); // Calling func part3 to execute 

    cout << "Part 3 executed and we returned to main" << endl << endl;
}