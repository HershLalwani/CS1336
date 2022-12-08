#include <iostream>
#include <fstream>
#include <cstdlib>
#include <array>

using namespace std;

int main() {

    ifstream answers;
    ifstream key;
    string responseName;
    string keyName;

    char answerChoice;
    char answerArr[50];
    char keyChoice;
    char keyArr[50];
    
    int questions = 0;
    int correct;
    int incorrect;

    cout << "Enter the name of the file containing the key." << endl;
    cin >> keyName;

    cout << "Enter the name of the file containing the student's responses." << endl;
    cin >> responseName;

    answers.open(responseName);
    key.open(keyName);

    // Moves file data into 
    if (answers.is_open()) {
        int i = 0;
        while (answers >> answerChoice) {
            questions++;
            answerArr[i] = answerChoice;
            i++;
        }
    } else {
        cout << responseName << " could not be opened." << endl;
        return 0;
    }
    if (key.is_open()) {
        int i = 0;
        while (key >> keyChoice) {
            keyArr[i] = keyChoice;
            i++;
        }
    } else {
        cout << keyName << " could not be opened." << endl;
        return 0;
    }

    int currentQuestion = 1;
    for (int i = 0; i < questions; i++) {
        if (answerArr[i] == keyArr[i]) {
            correct++;
        }
        else if(answerArr[i] != keyArr[i]) {
            incorrect++;
            cout << "Question " << currentQuestion << " has incorrect answer '" << answerArr[i] << "', the correct answer is '" << keyArr[i] << "'." << endl;
        }
        currentQuestion++;
    }
    cout << incorrect << " questions were missed out of " << incorrect + correct << "." << endl;
    double score = (double(correct)/(correct+incorrect))*100;
    cout.precision(2);
    cout << fixed << "The student's grade is " << score << "%" << endl;
    if (score < 70.00) {
        cout << "The student has failed the quiz." << endl;
    } else if (score > 70.00) {
        cout << "The student has passed the quiz." << endl;
    }
}
