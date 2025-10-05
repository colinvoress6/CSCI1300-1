#include <iostream>
#include <string>
using namespace std;

// Function to return the smaller of two numbers
int findSmallest(int currentMin, int newNumber) {
    if (newNumber < currentMin) {
        return newNumber;
    }
    return currentMin;
}

// Function to return the larger of two numbers
int findLargest(int currentMax, int newNumber) {
    if (newNumber > currentMax) {
        return newNumber;
    }
    return currentMax;
}

// Function to compute average
double findAverage(int sum, int count) {
    return static_cast<double>(sum) / count;
}

int main() {
    string input;
    int number;
    int smallest;
    int largest;
    int sum = 0;
    int count = 0;

    cout << "Enter numbers (Q to quit): " << endl;

    while (true) {
        cin >> input;
        if (input == "Q" || input == "q") {
            break;
        }

        number = stoi(input);  // convert string to int

        if (count == 0) {
            // first number initializes smallest and largest
            smallest = number;
            largest = number;
        } else {
            smallest = findSmallest(smallest, number);
            largest = findLargest(largest, number);
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        cout << "Smallest number: " << smallest << endl;
        cout << "Largest number: " << largest << endl;
        cout << "Average: " << findAverage(sum, count) << endl;
    } else {
        cout << "No numbers entered." << endl;
    }

    return 0;
}
