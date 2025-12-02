// This is the Main Branch! Select the sub-branches to grade this project

#include <iostream>
using namespace std;

void judgeNumberVerification(int& x) {  //This function recieves and validates the user-entered values for the number of rooms, then stores them for future use
    do {
        cout << "Enter the number of Judge(s): ";
        cin >> x;
        if (x < 0) {
            cout << "\nInvalid number of Judges(must be greater than 0) \n";
        }
        else {

        }
    } while (x < 0);
}

int main()
{
    double leastScore, greatestScore, judgeScore, scoreTotal = 0, scoreAvg;
    int numberOfJudges;

    judgeNumberVerification(numberofJudges);
    cout << "How many judges are there?: " << endl;
    cin >> numberOfJudges;

    return 0;
}
