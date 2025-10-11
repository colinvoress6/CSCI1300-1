#include <iostream>
#include <fstream>   // for file input/output
#include <string>
using namespace std;

int main() {
    // 1. Create an input file stream
    ifstream inFile;

    // 2. Open the file "words.txt"
    inFile.open("words.txt");

    // 3. Check if the file opened successfully
    if (!inFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // 4. Read and display each word in the file
    string word;
    while (inFile >> word) {
        cout << word << endl;
    }

    // 5. Close the file
    inFile.close();

    return 0;
}
