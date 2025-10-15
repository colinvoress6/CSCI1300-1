#include <iostream>
#include <fstream> /*?*/
#include <string>
using namespace std;

int main() {
    // Challenge: Choose and learn one of the C++ keywords or concepts you're unfamiliar with

    // TODO: Create an input file stream
    ifstream inFile;

    // TODO: Open the file "words.txt"
    inFile.open("words.txt");

    // TODO: Check if the file opened successfully
    if (!inFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string word;

    // TODO: Read and display each word in the file
    while (inFile >> word) {
        cout << word << endl;
    }

    // TODO: Close the file
    inFile.close();    

    return 0;
}
