/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 20 October 2022
Completed: 18 October 2022
Submitted: 18 October 2022
*/

#include <iostream>

using namespace std;

int store1, store2, store3, store4, store5;


string printAsterisks(int sales)
{
    
    string finalString;
    do
    {
        finalString += "*";
        sales -= 100;
    } while (sales > 0);
    return finalString;
}

int main()
{
    cout << "Enter today's sales for store 1: ";
    cin >> store1;

    cout << "Enter today's sales for store 2: ";
    cin >> store2;

    cout << "Enter today's sales for store 3: ";
    cin >> store3;

    cout << "Enter today's sales for store 4: ";
    cin >> store4;

    cout << "Enter today's sales for store 5: ";
    cin >> store5;
    cout << endl << endl << endl;
    cout << "SALES BAR CHART" << endl << endl << "(Each * = $100)" << endl << endl;

    cout << "Store 1: " << printAsterisks(store1) << endl;
    cout << "Store 2: " << printAsterisks(store2) << endl;
    cout << "Store 3: " << printAsterisks(store3) << endl;
    cout << "Store 4: " << printAsterisks(store4) << endl;
    cout << "Store 5: " << printAsterisks(store5) << endl;
}