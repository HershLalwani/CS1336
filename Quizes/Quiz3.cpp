/*
Lalwani Hersh, Boyle Nathan
Programming Fundamentals
CS1336
0L2
Due 17 November 2022
Completed: 17 November 2022
Submitted: 17 November 2022
*/

#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Gets the input from the user for the size of the rows
void getInput(int &startNum, int &endNum) {

    cout << "Input the starting number for the table: ";
    cin >> startNum;
    cout << "Input the end number for the table: ";
    cin >> endNum;
    
}

// Prints the array in the console and outputs to a file
void printTwoDArray(int start, int end) {
    int column = 10;
    ofstream outFile;
    string input;

    // creating the file
    outFile.open("data.txt");

    // creating the 2D array by using the difference of the inputs
    int multiPlicationTable1[end - start + 1][end - start + 1];
    // for loop to iterate through the 2D array's columns
    for (int i = 0; i < end - start + 1; i++) {
        // for loop to iterate through the 2D array's rows
        for (int j = 0; j < end - start + 1; j++) {
            // adding the number based on the start and end numbers, and multiplying as required by the column number
            multiPlicationTable1[i][j] = (start + j) * (i + 1);
            // outputs
            cout << multiPlicationTable1[i][j] << '\t';
            outFile << setw(10) << multiPlicationTable1[i][j] << '\t';
        }
        cout << endl;
        outFile << endl;
    }
    outFile.close();
}

// main function to run other functions
int main() {

    int startNum, endNum;
    getInput(startNum, endNum);
    printTwoDArray(startNum, endNum);
    
}