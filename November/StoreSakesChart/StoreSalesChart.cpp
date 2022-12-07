#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    
    ifstream inputFile;
    ofstream outFile;
    string fileName;
    long long int sales;
    unsigned int storeNum;

    int num1, num2;

    cout << "Enter input file name: " << endl;
    cin >> fileName;

    inputFile.open(fileName);
    outFile.open("saleschart.txt");

    if (inputFile.is_open()) {

        if (inputFile >> num1 >> num2) {
            outFile << "SALES BAR CHART" << endl;
            outFile << "(Each * equals 5,000 dollars)" << endl;
            
            if (num1 < 1 || num1 > 99) {
                cout << "Error! The store number "<< num1 <<" is not valid." << endl;
            } else if (num1 < 1 || num1 > 99 || num2 < 0) {
                cout << "Error! The sales value for store " << num1 << " is negative." << endl;
            } else {
                outFile << "Store " << setw(2) << num1 << ": ";
                while (num2 >= 5000) {
                    outFile << "*";
                    num2 -= 5000;
                }
                outFile << endl;
            }

        } else {
            outFile.close();
        }

        while (inputFile >> storeNum >> sales) {
            
            if (storeNum < 1 || storeNum > 99) {
                cout << "Error! The store number "<< storeNum <<" is not valid." << endl;
            } else if (storeNum < 1 || storeNum > 99 || sales < 0) {
                cout << "Error! The sales value for store " << storeNum << " is negative." << endl;
            } else {
                outFile << "Store " << setw(2) << storeNum << ": ";
                while (sales >= 5000) {
                    outFile << "*";
                    sales -= 5000;
                }
                outFile << endl;
            }
        }
    } else {
        cout << "Error File \""<< fileName <<"\" could not be opened." << endl;
    }
    outFile.close();
}