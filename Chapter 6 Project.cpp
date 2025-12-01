// This is the Main Branch! Select the sub-branches to grade this project

#include <iostream>
using namespace std;

void validateJudgeScore(double& x) {  //This function recieves and validates the user-entered values for the judge's score, then stores them for future use
    do {
        cout << "Enter the Judge's score: ";
        cin >> x;
        if (x < 0.01 || x > 10) {
            cout << "\nInvalid Score. Enter a valid score between 0 and 10: ";
        }
        else {
            
        }
    } while (x < 0.01 || x > 10);
}

int main()
{
    int judgeCounter = 1;
    double judge1Score, judge2Score, judge3Score, judge4Score, judge5Score;


    do {
        if (judgeCounter == 1) {
            validateJudgeScore(judge1Score);
        }
        else if (judgeCounter == 2) {
            validateJudgeScore(judge2Score);
        }
        else if (judgeCounter == 3) {
            validateJudgeScore(judge3Score);
        }
        else if (judgeCounter == 4) {
            validateJudgeScore(judge4Score);
        }
        else {
            validateJudgeScore(judge5Score);
        }
        ++judgeCounter;
    } while (judgeCounter != 6);
}
