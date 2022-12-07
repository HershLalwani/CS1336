#include <iostream>

using namespace std;

int main() {

    unsigned int medium;
    double distance;
    double airSpeed = 1133.2, waterSpeed = 4871.0, steelSpeed = 16400.0;

    cout << "\t" << "Time for Sound to Travel through a Medium given Distance" << endl << endl;
    cout << "1 - Air" << endl;
    cout << "2 - Water" << endl;
    cout << "3 - Steel" << endl << endl;
    cout << "Enter the number of the medium: " << endl;

    cin >> medium;
    if (medium < 1 || medium > 4) {
        cout << "The entry is invalid, run the program again.";
        return 0;
    }
    cout << "distance to travel: ";
    cin >> distance;
    if (distance < 0) {
        cout << "The distance must be greater than zero";
        return 0;
    }

    cout.precision(4);
    cout << fixed;
    switch(medium) {
        case 1:
            cout << "In air it will take " << distance/airSpeed << " seconds to travel " << distance << " feet." << endl;
            break;
        case 2:
            cout << "In water it will take " << distance/waterSpeed << " seconds to travel " << distance << " feet." << endl;
            break;
        case 3:
            cout << "In steel it will take " << distance/steelSpeed << " seconds to travel " << distance << " feet." << endl;
            break;
    }
    return 0;
}