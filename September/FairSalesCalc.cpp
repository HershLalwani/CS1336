/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 2 October 2022
Completed: 29 September 2022
Submitted: 29 September 2022
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int chiliDogNum, cornDogNum, chipsNum, drinksNum, waterNum;
    double taxable = 0, taxNum = 0, nonTax = 0, total = 0;
    double taxRate = 0.0825;

    // Takes the input of all orders and calculates Taxable/Non-Taxable values
    cout << "Input Chili Dogs amount:" << endl;
    cin >> chiliDogNum;
    taxable += (chiliDogNum * 8);

    cout << "Input Corn Dogs amount:" << endl;
    cin >> cornDogNum;
    taxable += (cornDogNum * 6);

    cout << "Input Bag of Chips Amount:" << endl;
    cin >> chipsNum;
    taxable += (chipsNum * 2);

    cout << "Input Soft Drinks Amount:" << endl;
    cin >> drinksNum;
    taxable += (drinksNum * 5);

    cout << "Input Water Bottle Amount:" << endl;
    cin >> waterNum;
    nonTax += (waterNum * 4);

    // Calculating Final Tax values and Total
    taxNum = taxable * taxRate;
    total = taxable + taxNum + nonTax;

    // Displaying all the values
    cout << setprecision(2) << fixed;
    cout << left << setw(13) << "Taxable:" << "$" << right << setw(8) << taxable << endl;
    cout << left << setw(13) << "Tax amount:" << "$" << right << setw(8) << taxNum << endl;
    cout << left << setw(13) << "Non-taxable:" << "$" << right << setw(8) << nonTax << endl;
    cout << left << setw(13) << "Total:" << "$" << right << setw(8) << total << endl;

    return 0;
}