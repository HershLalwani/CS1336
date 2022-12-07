/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 6 December 2022
Completed: 6 December 2022
Submitted: 7 December 2022
*/

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

int binarySearch(int arr[20], int value, int &binaryComparisons, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == value) {
            return mid;
        }
        if (arr[mid] < value) {
            low = mid + 1;
        }
        else {
            
            high = mid - 1;
        }
        binaryComparisons += 1;
    }
    return -1;
}

int main() {
    
    int larr[20];
    int barr[20];
    int value;
    int linearComparisons = 0;
    int binaryComparisons = 0;

    srand(time(NULL));
    for (int i = 0; i < (sizeof(int) * 20)/sizeof(int); i++) {
        barr[i] = rand() % 50 + 1;
        larr[i] = rand() % 50 + 1;
    }

    sort(barr, barr + 20);

    cout << "Enter a number between 1 and 50 to be found in the array: ";
    cin >> value;
    if (value > 50 || value < 1) {
        cout << "invalid value: " << value << endl;
        return 0;
    }

    cout << "---------------------------------------------------------------------------------------------" << endl;
    
    int resultFromLinear = linearSearch(larr, value, linearComparisons);
    int resultFromBinary = binarySearch(barr, value, binaryComparisons, 0, sizeof(barr)/sizeof(barr[0]));

    if (resultFromLinear >= 0) {
        cout << "The value " << value << " was found in the first array at the index " << resultFromLinear << " in " << linearComparisons << " linear comparisons" << endl;
    } else if (resultFromLinear == -1) {
        cout << "The value " << value << " was not found in the first array" << endl;
    }

    cout << "---------------------------------------------------------------------------------------------" << endl;

    if (resultFromBinary >= 0) {
        cout << "The value " << value << " was found in the second array at the index " << resultFromBinary << " in " << binaryComparisons << " binary comparisons" << endl;
    } else if (resultFromBinary == -1) {
        cout << "The value " << value << " was not found in the second array" << endl;
    }

    cout << "---------------------------------------------------------------------------------------------" << endl;
}