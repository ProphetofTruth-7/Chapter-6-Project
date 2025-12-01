// This is the Main Branch! Select the sub-branches to grade this project

#include <iostream>
using namespace std;

void validateJudgeScore(double& x) {  //This function recieves and validates the user-entered values for the judge's score, then stores them for future use
    do {
        cout << "Enter the Judge's score: ";
        cin >> x;
    } while (x < 0.01 || x > 10);
}

int main()
{
    int judgeCounter = 1;
    int judge1Score, judge2Score, judge3Score, judge4Score, judge5Score;


    do {
        validateJudgeScore;
        ++judgeCounter;
    } while (judgeCounter != 5);
}
