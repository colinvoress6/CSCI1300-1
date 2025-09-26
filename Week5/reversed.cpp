#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int result = 0;

    while (num > 0) {

        int digit = num % 10;
        result = result * 10 + digit;
        num = num / 10;
    }

    cout << "Result = " << result << endl; // ?
    return 0;

}



