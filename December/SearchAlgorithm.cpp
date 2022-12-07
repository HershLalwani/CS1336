#include <iostream>
#include <cstdlib>

using namespace std;


int linearSearch(int arr[20], int value, int &linearComparisons) {

    for (int i = 0; i < (sizeof(int) * 20)/sizeof(int); i++) {
        linearComparisons += 1;
        if (value == arr[i]) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[20], int value, int binaryComparisons, int low, int high) {
    
}

int main() {

    int arr[20];
    int value;
    int linearComparisons = 0;
    int binaryComparisons = 0;

    srand(time(NULL));
    for (int i = 0; i < (sizeof(int) * 20)/sizeof(int); i++) {
        arr[i] = rand() % 50 + 1;
    }

    sort(arr, arr + 20);

    cin >> value;
    if (value > 50 || value < 1) {
        cout << "invalid value: " << value << endl;
        return 0;
    }
    
    int resultFromLinear = linearSearch(arr, value, linearComparisons);
    int resultFromBinary;

    if (resultFromLinear >= 0) {
        cout << "The value " << value << " was found in the array at the index " << resultFromLinear << " in " << linearComparisons << " comparisons" << endl;
    } else if (resultFromLinear == -1) {
        cout << "The value " << value << " was not found it the array";
    }
}