/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 20 September 2022
Completed: 14 September 2022
Submitted: 14 September 2022
*/

#include <iostream>
using namespace std;

// Initializing variables
int operationChoice;
double radius, length, width, tBase, tHeight;
double pi = 3.14159;

// Main function
int main() 
{
    // Prints the Main menu
    cout << "Geometry Calculator" << endl << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl << endl;
    cout << "Enter your Choice(1-4):" << endl;
    cin >> operationChoice;
    
    // Switch case statement for Operation Choices
    if (operationChoice == 1) {
        // Case for Circle
        cout << "Enter the radius of the circle:" << endl;
        
        // Takes value and makes sure it is positive
        cin >> radius;
        if (radius < 0)
        {
            throw invalid_argument("Radius must be positive");
        }

        // Final output
        cout << "Area: " << pi * (radius * radius) << endl;
    }
    else if (operationChoice == 2) {
        // Case for Rectangle
        cout << "Enter the length of the rectangle:" << endl;
        
        // Takes value and makes sure it is positive
        cin >> length;
        if (length < 0) 
        {
            throw invalid_argument("Length must be positive");
        }

        cout << "Enter the width of the rectangle:" << endl;
        
        // Takes value and makes sure it is positive
        cin >> width;
        if (width < 0) 
        {
            throw invalid_argument("Width must be positive");
        }

        // Final output
        cout << "Area: " << length * width << endl;
    }
    else if (operationChoice == 3) {
        // Case for Triangle
        cout << "Enter the length of the base of the triangle:" << endl;
        
        // Takes value and makes sure it is positive
        cin >> tBase;
        if (tBase < 0) 
        {
            throw invalid_argument("Length of the Base must be positive");
        }

        cout << "Enter the height of the triangle:" << endl;
        
        // Takes value and makes sure it is positive
        cin >> tHeight;
        if (tHeight < 0)
        {
            throw invalid_argument("Height must be positive");
        }

        // Final output
        cout << "Area:" << tBase * tHeight * 0.5 << endl; 
    }

    else if (operationChoice == 4) {
        // Quits program
        return 0;
    }
    else if ((operationChoice < 0) || (operationChoice > 4)) {
        // Error when a number outside 1-4 is entered
        throw invalid_argument("Must input numbers 1-4 only");
    }
    return 0;
}