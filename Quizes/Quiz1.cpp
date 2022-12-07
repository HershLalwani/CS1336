/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 22 September 2022
Completed: 22 September 2022
Submitted: 22 September 2022
*/

#include <iostream>
using namespace std;

int main()
{
    char packageSelection;

    int hours;
    double ammountDue;

    // Asks for package input
    cout << "Input the selected package:" << endl;
    cin >> packageSelection;
    
    // Asks for hours input and checks if hours are valid inputs
    cout << "input the number of hours:" << endl;
    cin >> hours;
    if (hours < 0)
    {
        cout << "Number of hours must be positive";
        return 0;
    } else if (hours > 744) 
    {
        cout << "Number of hours must be below 744";
        return 0;
    }
    
    // All package claculations with outputs
    if (packageSelection == 'A')
    {
        if (hours > 10)
        {
            ammountDue = 29.99 + (1.5 * (hours - 10));
            cout << ammountDue;
        } else if (hours < 10)
        {
            ammountDue = 29.99;
            cout << ammountDue;
        }
    } else if (packageSelection == 'B')
    {
        if (hours > 20)
        {
            ammountDue = 39.99 + (hours - 20);
            cout << ammountDue;
        } else if (hours < 20)
        {
            ammountDue = 39.99;
            cout << ammountDue;
        }
    } else if (packageSelection == 'C')
    {
        ammountDue = 59.99;
        cout << ammountDue;
    } else 
    {
        cout << "Invalid package" << endl;
        return 0; 

    }
}