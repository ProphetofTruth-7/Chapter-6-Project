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
double calcLeastScore(double& a, double& b, double& c, double& d, double& f) {    // I don't understand. Why isn't it changing?
    double leastScore = 99;
    int loopIncrement = 1;

    if (leastScore > a) {
        leastScore = a;
        cout << "The least score is A: " << leastScore << endl;
    }
    if (leastScore > b) {
        leastScore = b;
        cout << "The least score is B: " << leastScore << endl;
    }
    if (leastScore > c) {
        leastScore = c;
        cout << "The least score is C: " << leastScore << endl;
    }
    if (leastScore > d) {
        leastScore = d;
        cout << "The least score is D: " << leastScore << endl;
    }
    if (leastScore > f) {
        leastScore = f;
        cout << "The least score is F: " << leastScore << endl;
    }

    return leastScore; //It goes through the entire lot, correctly assigning leastScore along the way, but somehow always returns 'a' at the end. No matter where the if statement for a actually is
}

double calcGreatestScore(double& a, double& b, double& c, double& d, double& f) {
    int greatestScore = a;

    if (greatestScore > f) {     // This nest is a complete useless mess. Ignore
        if (greatestScore >= d) {
            if (greatestScore >= c) {
                if (greatestScore >= b) {
                    if (greatestScore >= a) {
                        greatestScore = a;
                    }
                }
                else {
                    greatestScore = b;
                }
            }
            else {
                greatestScore = c;
            }
        }
        else {
            greatestScore = d;
        }
    }
    else {
        greatestScore = f;
    }
    return greatestScore;
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

    calcLeastScore(judge1Score, judge2Score, judge3Score, judge4Score, judge5Score);
    calcGreatestScore(judge1Score, judge2Score, judge3Score, judge4Score, judge5Score);

    averageScore = ((judge1Score + judge2Score + judge3Score + judge4Score + judge5Score) - (leastScore + greatestScore)) / 3;

    cout << leastScore << endl;
    cout << greatestScore << endl;
    cout << averageScore << endl;

    cout << "\n \n \n TESTING";
    cout << judge1Score << judge2Score << judge3Score << judge4Score << judge5Score << endl;   //It properly stores the Judge values
    



    return 0;
}
