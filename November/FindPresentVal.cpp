#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double presentValue(double, double, double);

int main() {

    double futureValue, interestRate;
    bool isValidFuture = true;
    bool isValidRate = true;
    double currentValue;

    do {
        cout << "Enter the future value of the investment: ";
        cin >> futureValue;
        if (futureValue <= 0) {
            cout << "Error the future value must be greater than zero. " << endl;
            isValidFuture = false;
        } else {
            isValidFuture = true;
        }
    } while (!isValidFuture);

    do {
        cout << "Enter the annual interest rate: ";
        cin >> interestRate;
        if (interestRate <= 0) {
            cout << "Error the annual interest rate must be greater than zero. " << endl;
            isValidRate = false;
        } else {
            isValidRate = true;
        }
    } while (!isValidRate);
    interestRate = interestRate / 100;

    currentValue = presentValue(futureValue, interestRate, readYears());

}

int readYears() {

    int years;
    bool isValidYear = true;
    
    do{
        cout << "Enter the whole number of years of the investment: ";
        cin >> years;
        if (years <= 0) {
                cout << "Error the number of years must be greater than zero. " << endl;
                isValidYear= false;
            } else {
                isValidYear = true;
            }
    } while (!isValidYear);
    return years;
}

double presentValue(double futureValue, double interestRate, int numberYears) {

    double presentValue;

    presentValue = futureValue / (pow((1 + interestRate), numberYears));

    return presentValue;
}

void displayResults(double presentValue, double futureValue, double interestRate, int numberYears) {

    cout << setprecision(2) << fixed << "Present value: $" << presentValue << endl;
    cout << setprecision(0) << "Years: " << numberYears << endl;
    cout << setprecision(3) << fixed << "Annual interest rate: " << interestRate << endl;
    cout << setprecision(2) << fixed << "Future value: $" << futureValue << endl;

}
