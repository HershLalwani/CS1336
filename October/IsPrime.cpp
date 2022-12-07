#include <iostream>

using namespace std;

int main() {

    bool isPrime = false;
    unsigned int value;
    int firstElP[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

    cout << "Enter a positive whole number in the range 2 through 1000" << endl;
    cin >> value;
    if (value < 2 || value > 1000) {
        cout << "number is not in the range 2 through 1000";
        return 0;
    }
    for (int i = 0; i<sizeof(firstElP)/sizeof(int); i++) {
        if (value < 32) {
            if (value == firstElP[i]) {
                cout << value << " is prime." << endl;
                return 0;
            }
        } else if (value >= 32 && value <= 1000) {
            if (value % firstElP[i] == 0) {
                cout << value << " is divisible by:" << endl;
                for (int i = 0; i<sizeof(firstElP)/sizeof(int); i++) {
                    if (value % firstElP[i] == 0) {
                        cout << firstElP[i] << endl;
                    }
                }
                return 0;
            } else {
                isPrime = true;
            }
        }
    }
    if (isPrime) {
        cout << value << " is prime." << endl;
        return 0;
    }
    return 0;
}
