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
    double averageScore;
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

    double leastScore = judge1Score;
    double greatestScore = judge1Score;

    if (leastScore <= judge5Score) {       // This nest assigns the leastScore for future use
        if (leastScore <= judge4Score) {
            if (leastScore <= judge3Score) {
                if (leastScore <= judge2Score) {
                    if (leastScore <= judge1Score) {
                        leastScore = judge1Score;
                    }
                }
                else {
                    leastScore = judge2Score;
                }
            }
            else {
                leastScore = judge3Score;
            }
        }
        else {
            leastScore = judge4Score;
        }
    }
    else {
        leastScore = judge5Score;
    }

    if (greatestScore >= judge5Score) {     // This nest assigns the greatestScore for future use
        if (greatestScore >= judge4Score) {
            if (greatestScore >= judge3Score) {
                if (greatestScore >= judge2Score) {
                    if (greatestScore >= judge1Score) {
                        greatestScore = judge1Score;
                    }
                }
                else {
                    greatestScore = judge2Score;
                }
            }
            else {
                greatestScore = judge3Score;
            }
        }
        else {
            greatestScore = judge4Score;
        }
    }
    else {
        greatestScore = judge5Score;
    }

    averageScore = ((judge1Score + judge2Score + judge3Score + judge4Score + judge5Score) - (leastScore + greatestScore)) / 3;

    cout << leastScore << endl;
    cout << greatestScore << endl;
    cout << averageScore << endl;
    
    return 0;
}
