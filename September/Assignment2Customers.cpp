/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 12 September 2022
Completed: 11 September 2022
Submitted: 11 September 2022
*/

#include <iostream>
using namespace std;

// Initialized variables
int customers;
int numBuyEnergy, numPrefCitrus;

int main() 
{
    // Gets the number of customers as an input
    cout << "Input the number of customers: ";
    cin >> customers;

    // Calculates and prints the number of customers that buy energy drinks
    numBuyEnergy = customers * 0.15;
    cout << "Number of customers that buy energy drinks is: " << numBuyEnergy << endl;

    // Calculates and prints the number of customers that prefer citrus drinks
    numPrefCitrus = numBuyEnergy * 0.58;
    cout << "Number of customers that prefer Citrus energy drinks is: " << numPrefCitrus << endl;

    return 0;
}