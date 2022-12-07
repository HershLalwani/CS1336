#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    
    ifstream inputFile;
    ofstream outFile1;
    string fileName;

    double value, averageBeforeDiv = 0;
    int validCount = 0, invalidCount = 0, totalValues = 0;

    cout << "Enter the input file name: " << endl;
    cin >> fileName;

    inputFile.open(fileName);
    outFile1.open("badvalues.txt");

    if (inputFile.is_open()) {

        while (inputFile >> value) {
            if (value > 150 || value < 1) {
                outFile1.precision(3);
                outFile1 << fixed << value << endl;
                invalidCount++;
                
            } else {
                validCount++;
                averageBeforeDiv = averageBeforeDiv + value;
            }
            totalValues++;
        }

        cout << "Total number of values read: " << totalValues << endl;
        cout << "Valid values read: " << validCount << endl;
        cout << "Invalid values read: " << invalidCount << endl;
        cout.precision(2);
        if (validCount == 0) {
            cout << "The file did not contain any valid values." << endl;
        } else {
            cout << fixed << "The average of the valid numbers read = " << (double(averageBeforeDiv)/double(validCount)) << endl;
        }

    } else {
        cout << "The file \""<< fileName <<"\" could not be opened." << endl;
    }
    outFile1.close();
}