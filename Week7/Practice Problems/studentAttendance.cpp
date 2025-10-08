#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int attendance[7] = {20, 18, 22, 20, 19, 22, 18};
    int size = 7;

    // 1. Print attendance separated by '|'
    cout << "Attendance for the week: ";
    for(int i = 0; i < size; i++) {
        cout << attendance[i];
        if(i < size - 1) cout << " | ";
    }
    cout << endl;

    // 2. Compute total attendance
    int total = 0;
    for(int i = 0; i < size; i++) total += attendance[i];
    cout << "Total attendance: " << total << endl;

    // 3. Compute average attendance
    double average = static_cast<double>(total) / size;
    cout << fixed << setprecision(2);
    cout << "Average attendance: " << average << endl;

    // 4. Find maximum and minimum attendance
    int maxVal = attendance[0];
    int minVal = attendance[0];
    for(int i = 1; i < size; i++) {
        if(attendance[i] > maxVal) maxVal = attendance[i];
        if(attendance[i] < minVal) minVal = attendance[i];
    }
    cout << "Maximum attendance: " << maxVal << endl;
    cout << "Minimum attendance: " << minVal << endl;

    // 5. Count how many days had exactly 20 students
    int count20 = 0;
    for(int i = 0; i < size; i++) {
        if(attendance[i] == 20) count20++;
    }
    cout << "Number of days with exactly 20 students: " << count20 << endl;

    // 6. Check if any day had 25 students and print index
    int searchValue = 25;
    int index = -1;
    for(int i = 0; i < size; i++) {
        if(attendance[i] == searchValue) {
            index = i;
            break; // first occurrence
        }
    }
    cout << "Index of day with 25 students: " << index << endl;

    return 0;
}
