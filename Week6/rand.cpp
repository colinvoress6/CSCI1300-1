#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));

    int randBetween0And9 = rand()%10;
    int randBetween1And10 = rand()%10+1;
    int randBetween20And100 = rand()%(100-20+1)+20;
   
    double randBetween0and3p0 = (rand()%(3*10+1))/10.0;

    cout << "Random number between 0 and 9: " << randBetween0And9 << endl;
    cout << "Random number between 1 and 10: " << randBetween1And10 << endl;
    cout << "Random number between 20 and 100: " << randBetween20And100 << endl;
    cout << "Random number with one decimal between 0 and 3: " << randBetween0and3p0 << endl;
}




