#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    // Example array
    // Teaching point: const (constant)
    // You cannot change it's value once it's set
    // You get an error if you try to change capacity later on
    // Arrays can't change in size. A const makes sure of this.
    // const is not in the textbook yet - not necessary for the exam
    const int capacity = 10;

    int a[capacity] = {5, 3, 9, 3, 12, 7}; // initial values
    int size = 6; // current size of array

    cout << "Initial array: ";
    for(int i = 0; i < size; i++) cout << a[i] << " ";
    cout << "\n\n";

    // // 1. Fill array with 0
    // for(int i = 0; i < size; i++) a[i] = 0;
    // cout << "After filling with 0: ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";

    // // 2. Copy array
    // int b[capacity];
    // int bSize = size;
    // for(int i = 0; i < size; i++) b[i] = a[i];
    // cout << "Copied array b: ";
    // for(int i = 0; i < bSize; i++) cout << b[i] << " ";
    // cout << "\n\n";

    // // 3. Sum and average
    // int sum = 0;
    // for(int i = 0; i < size; i++) sum += a[i];
    // double avg = static_cast<double>(sum) / size;
    // cout << "Sum: " << sum << ", Average: " << fixed << setprecision(2) << avg << "\n\n";

    // // 4. Maximum and minimum
    // int max = a[0];
    // int min = a[0];
    // for(int i = 1; i < size; i++) {
    //     if(a[i] > max) max = a[i];
    //     if(a[i] < min) min = a[i];
    // }
    // cout << "Max: " << max << ", Min: " << min << "\n\n";

    // // 5. Print array with '|' separators
    // for(int i = 0; i < size; i++) {
    //     cout << a[i];
    //     if(i < size - 1) cout << " | ";
    // }
    // cout << "\n\n";

    // // 6. Count number of matches (example: count how many 3's)
    // int target = 3;
    // int count = 0;
    // for(int i = 0; i < size; i++) {
    //     if(a[i] == target) count++;
    // }
    // cout << "Number of " << target << ": " << count << "\n\n";

    // // 7. Linear search (example: find first index of 12)
    // // Textbook example is a while loop with a counter
    // int searchVal = 12;
    // int index = -1;
    // for(int i = 0; i < size; i++) {
    //     if(a[i] == searchVal) {
    //         index = i;
    //         break;
    //     }
    // }
    // cout << "First index of " << searchVal << ": " << index << "\n\n";

    // // 8a. Remove element when order doesn't matter (swap with last)
    // int removeIndex = 1;
    // a[removeIndex] = a[size - 1];
    // size--;
    // cout << "After unordered removal: ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";
    // // Explain 8a with a partner

    // // 8b. Remove element (Order Matters)
    // int removeIndex = 1;
    // // Note we had to use a for loop to preserve positions
    // for(int i = removeIndex + 1; i < size; i++) a[i - 1] = a[i];
    // size--;
    // cout << "After ordered removal: ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";

    // // 9a. Insert element at end (if space)
    // int valueToInsert = 42;
    // // Explain line 95
    // if(size < capacity) a[size++] = valueToInsert;
    // cout << "After inserting at end: ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";

    // // 9b. Insert element at specific position
    // // Make a trace table for the following
    // int pos = 2;
    // int val = 99;
    // if(size < capacity) {
    //     size++;
    //     for(int i = size - 1; i > pos; i--) a[i] = a[i - 1];
    //     a[pos] = val;
    // }
    // cout << "After inserting " << val << " at position " << pos << ": ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";

    // // 10. Swap elements at indices i and j
    // int i = 0, j = 2;
    // int temp = a[i];
    // a[i] = a[j];
    // a[j] = temp;
    // cout << "After swapping indices " << i << " and " << j << ": ";
    // for(int k = 0; k < size; k++) cout << a[k] << " ";
    // cout << "\n\n";

    // // 11a. Read fixed number of inputs
    // cout << "Enter number of elements to input: ";
    // int N;
    // cin >> N;
    // for(int i = 0; i < N && i < capacity; i++) cin >> a[i];
    // size = N;
    // cout << "Array after fixed input: ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";

    // // 11b. Read inputs with capacity and stop with 'done'
    // // Textbook example modified to include sentinel value
    // size = 0;
    // string input;
    // cout << "Enter integers (type 'done' to stop):\n";
    // while(size < capacity) {
    //     cout << "Value #" << size + 1 << ": ";
    //     cin >> input;
    //     if(input == "done") break;
    //     // Consider adding additional input validation
    //     // This line would throw an error if type mismatch
    //     int val = stoi(input);
    //     a[size++] = val;
    // }
    // cout << "Array after capacity-based input: ";
    // for(int i = 0; i < size; i++) cout << a[i] << " ";
    // cout << "\n\n";

    return 0;
}
