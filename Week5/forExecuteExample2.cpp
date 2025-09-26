#include <iostream>
using namespace std;

int main() {
    int i;
    for (i = 10; i > 0; i -= 3) {
        cout << "i = " << i << endl;
    }
    cout << i;
    return 0;
}