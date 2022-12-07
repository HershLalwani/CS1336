/*
Lalwani Hersh, Boyle Nathan
Programming Fundamentals
CS1336
0L2
Due 27 October 2022
Completed: 27 October 2022
Submitted: 27 October 2022
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Void function to print out the table
void printTable(int row, int column) {

    // Time set to NULL to randomize numbers everytime
    srand(time(NULL));
    
    // Extra Printing for beauty
    cout << endl << setw(23) << "Random Number Table" << endl;
    cout << "___________________________" << endl;
    cout << "|                         |" << endl;

    // Nested for loops to iterate thru rows and columns
    for(int i = 0; i < row; i++) {
        cout << "|";
        for(int i = 0; i < column; i++) {
            // Random number generator
            int num = rand() % 100 + 1;
            cout << setw(4) << num;
        }
        cout << " |";
        // New line to start a new row
        cout << endl;
    }
    cout << "|_________________________|";
}

int main() {
    
    // Calls the void function with number of rows and columns
    printTable(5, 6);

}