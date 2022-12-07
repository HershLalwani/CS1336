#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>


using namespace std;

void createFile() {
    ofstream outFile;
    srand(time(NULL));

    outFile.open("numbers.txt");
    int fileSize = rand() % 10 + 40;

    for (int i = 0; i <= fileSize; i++) {
        int num;
        num = rand() % 400 + 100;
        outFile << num << endl;
    }
}

int countArray(int numArray[]) {
    int arrayCount = sizeof(numArray)/sizeof(numArray[0]);
    return arrayCount;
}

int getLowestNumber(int numArray[]) {
    int currentLowestNum = 0;
    for (int i = 0; i <= countArray(numArray); i++) {
        if (currentLowestNum > numArray[i]) {
            currentLowestNum = numArray[1];
        }
    }
    return currentLowestNum;
}

int getHighestNumber(int numArray[]) {
    int currentHighestNum = 0;
    for (int i = 0; i <= countArray(numArray); i++) {
        if (currentHighestNum < numArray[i]) {
            currentHighestNum = numArray[1];
        }
    }
    return currentHighestNum;
}

int getTotal(int numArray[]) {
    int total = 0;
    for (int i = 0; i <= countArray(numArray); i++) {
        total = total + numArray[i];
    }
    return total;
}

int getAverage(int numArray[]) {
    double average = double(getTotal(numArray))/double(countArray(numArray));
    return average;
}

int main() {
    
    string fileName;
    
    ifstream inputFile;
    int num;
    int numArr [5000];

    cout << "Input a file name: ";
    cin >> fileName;
    
    createFile();

    inputFile.open(fileName);

    if (inputFile.is_open()){
        int i = 0;
        while(inputFile >> num) {
            numArr[i] = num;
            i++;
        }

    } else {
        cout << "Error File \""<< fileName <<"\" could not be opened." << endl;
    }

    cout << "The total count of numbers in the Array: " << countArray(numArr) << endl;
    cout << "The lowest number in the array: " << getLowestNumber(numArr) << endl;
    cout << "The highest number in the array: " << getHighestNumber(numArr) << endl;
    cout << "The total of the numbers in the array: " << getTotal(numArr) << endl;
    cout << "The average of the numbers in the array: " << getAverage(numArr) << endl;
}