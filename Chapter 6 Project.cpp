// This is the Main Branch! Select the sub-branches to grade this project

#include <iostream>
using namespace std;

void judgeNumberVerification(int& x) {  //This function recieves and validates the user-entered values for the number of judges, then stores them for future use
    do {
        cout << "Enter the number of Judge(s): ";
        cin >> x;
        if (x < 1) {
            cout << "\nInvalid number of Judges(must be greater than 0) \n";
        }
        else {

        }
    } while (x < 1);
}
void judgeScoreVerification(double& x) {  //This function recieves and validates the user-entered values for the Judge's Score, then stores them for future use
    do {
        cout << "Enter the Judge's Score: ";
        cin >> x;
        if (x < 0 || x > 10) {
            cout << "\nInvalid Judge score(must be greater than 0 and less than 10) \n";
        }
        else {

        }
    } while (x < 0 || x > 10);
}
bool checkForLeast(double x, double y) {  //This function checks the newest value and sees if it's smaller than the current Least Value, then returns a true if so
        return (x > y);
}
bool checkForGreatest(double x, double y) {  //This function checks the newest value and sees if it's larger than the current Greatest Value, then returns a true if so
    return (x < y);
}
void calcAverage(double w, double x, double y, int z, double& a) { //This function calculates the average by taking the total, subtracting from it the least and greatest, and dividing by the total judges-2
    a = (w - (x+y))/(z-2);
    
} 



int main()
{
    double leastScore, greatestScore, judgeScore, scoreTotal = 0, scoreAvg = 0;
    int numberOfJudges, loopIncrement = 1;

    judgeNumberVerification(numberOfJudges);
    
    judgeScoreVerification(judgeScore);
    scoreTotal += judgeScore;
    leastScore = judgeScore;
    greatestScore = judgeScore;

    do {
        judgeScoreVerification(judgeScore);
        scoreTotal += judgeScore;

        if (checkForLeast(leastScore, judgeScore)) {
            leastScore = judgeScore;
        }
        else {

        }

        if (checkForGreatest(greatestScore, judgeScore)) {
            greatestScore = judgeScore;
        }
        else {

        }
        ++loopIncrement;
    } while (loopIncrement != numberOfJudges);

    calcAverage(scoreTotal, leastScore, greatestScore, numberOfJudges, scoreAvg);

    cout << "The Average Judge score is " << scoreAvg << " Points!";

    return 0;
}
