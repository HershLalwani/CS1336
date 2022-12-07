/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 2 October 2022
Completed: 27 September 2022
Submitted: 27 September 2022
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Creating the variables
    double dollars, pesos, euros, yen;

    // Taking Input of Dollars
    cout << "Input amount: " << endl;
    cin >> dollars;

    pesos = dollars * 20.06;
    euros = dollars * 0.99;
    yen = dollars * 143.08;
    
    cout << setprecision(2) << fixed;
    cout << setw(10) << "Dollars" << "\t" << setw(10) << "Pesos" << "\t" << setw(10) << "Euros" << "\t" << setw(10) << "Yen" << endl;
    cout << setw(10) << dollars << "\t" << setw(10) << pesos << "\t" << setw(10) << euros << "\t" << setw(10) << yen << endl;

    return 0;
}