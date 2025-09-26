#include<iostream>
using namespace std;

int main() {
    double value;
    do{
        cout << "Enter a number <= 0: ";
        cin >> value;
    }while (value > 0); //will keep re-asking until user provides a valid input
}


