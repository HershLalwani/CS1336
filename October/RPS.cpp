/*
Hersh Lalwani
Programming Fundamentals
CS1336
0L2
Due 11 October 2022
Completed: 10 October 2022
Submitted: 10 October 2022
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int compChoice;
int userChoice;

void getCompChoice()
{
    // Resets the time to get a new rand value and gets the computer's choice
    srand(time(NULL));
    compChoice = rand() % 3 + 1;
}

void getUserChoice() 
{
    cin >> userChoice;
    if (userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        throw invalid_argument("Must choose from given options");
    }
}

string choiceToString(int choice)
{
    switch (choice)
    {
        case 1: 
        return "Rock";
        case 2: 
        return "Paper";
        case 3:
        return "Scissors";
        default:
        return "";
    }
}

void game()
{
    cout << endl << "WELCOME TO ROCK, PAPER, SCISSORS!" << endl;
    cout << "Chose your weapon" << endl << "1 -> Rock" << endl << "2 -> Paper" << endl << "3 -> Scissors" << endl;
    getCompChoice();
    getUserChoice();
    cout << "The Computer chose: " << choiceToString(compChoice) << endl;
    cout << "You chose: " << choiceToString(userChoice) << endl;
    if (userChoice == compChoice)
    {
        cout << endl << "Game is a tie, Play again!" << endl << "==============================================" << endl;
        game();
    }
    else if (userChoice == 1 && compChoice == 3)
    {
        cout << "YOU WIN!!" << endl;
    }
    else if (userChoice == 2 && compChoice == 1)
    {
        cout << "YOU WIN!!" << endl;
    }
    else if (userChoice == 3 && compChoice == 2)
    {
        cout << "YOU WIN!!" << endl;
    }
    else 
    {
        cout << "YOU LOSE :(" << endl;
    }
}

int main()
{
    game();
    return 0;
}