// This is the Safe Driving Sub-branch!

#include <iostream>
using namespace std;

void regionInfo(int& x) {
    do {
        cout << "(How many accidents(0+) were in this region?): ";
        cin >> x;
        if (x < 0) {
            cout << "Invalid Value" << endl;
        }
    } while (x < 0);
}

int main()
{
    int northAcc, southAcc, eastAcc, westAcc, centralAcc;

    cout << "North";
    regionInfo(northAcc);
    cout << "South";
    regionInfo(southAcc);
    cout << "East";
    regionInfo(eastAcc);
    cout << "West";
    regionInfo(westAcc);
    cout << "Central";
    regionInfo(centralAcc);

    cout << northAcc;
    return 0;
}
