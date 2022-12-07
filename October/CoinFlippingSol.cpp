#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    unsigned int seed;
    cin >> seed;
    srand(seed);

    bool playAgain;
    int totalFlips = 0, numHeads = 0, numTails = 0;

    do {

        bool inputValid;
        int flip;
        flip = rand() % 2 + 1;

        if (flip == 1) {
            cout << "Flip = Heads" << endl;
            numHeads++;
            totalFlips++;
        } else {
            cout << "Flip = Tails" << endl;
            numTails++;
            totalFlips++;
        }

        do {
            string input;
            cout << "Play again? Y for Yes, N for No" << endl;
            cin >> input;
            if (input == "Y" || input == "y") {
                playAgain = true;
                inputValid = true;
            } else if (input == "N" || input == "n") {
                playAgain = false;
                inputValid = true;
            } else {
                cout << "input invalid" << endl;
                inputValid = false;
            }
        } while(!inputValid);

    } while(playAgain);
    cout.precision(1);
    cout << fixed << numHeads << " of the " << totalFlips << " flips were Heads or " << ((double(numHeads) / double(totalFlips)) * 100) << "% were Heads." << endl;
    cout << numTails << " of the " << totalFlips << " flips were Tails or " << ((double(numTails) / double(totalFlips)) * 100) << "% were Tails." << endl;
}