#include <iostream>
using namespace std;

int main() {

    unsigned int lower, upper;
    int pCount = 1;

    cout << "Enter the ASCII code that is the lower bound [32 through 126]: ";
    cin >> lower;
    cout << "Enter the ASCII code that is the upper bound [" << lower << " through 126]: ";
    cin >> upper;
    
    if (lower < 32 || lower > 126) {
        cout << "Error: Lower bound entered is invalid" << endl;
        return 0;
    } else if (upper < lower || upper > 126) {
        cout << "Error: Upper bound entered is invalid" << endl;
        return 0;
    }
    
    cout << endl;
    cout << "The characters with ASCII values in range " << lower << " through " << upper << " are:" << endl << endl;


    for (int i = lower; i < upper + 1; i++) {
        if (pCount > 15) {
            cout << endl;
            pCount = 1;
        }
        cout << char(i);
        pCount++;
        
    }
    cout << endl;
    return 0;
}