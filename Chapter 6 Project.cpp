// This is the Safe Driving Sub-branch!

#include <iostream>
using namespace std;

void regionInfo(int& x) {  // This functions validates that the accidents in the region are above 0
    do {
        cout << "(How many accidents(0+) were in this region?): ";
        cin >> x;
        if (x < 0) {
            cout << "Invalid Value" << endl;
        }
    } while (x < 0);
}
bool checkForLeast(int x, int y) {  //This function checks the newest value and sees if it's smaller than the current Least Value, then returns a true if so
    return (x > y);
}
void revealLeast(int a, int b, int c, int d, int e, int z) {  //This function attaches the name of the region to the accident via using all Accident variables and the least accidents
    if (a == z) {
        cout << "The city sector with the least accidents is the North, with " << a << " accidents";
    } else if (b == z) {
        cout << "The city sector with the least accidents is the South, with " << b << " accidents";
    } else if (c == z) {
        cout << "The city sector with the least accidents is the East, with " << c << " accidents";
    } else if (d == z) {
        cout << "The city sector with the least accidents is the West, with " << d << " accidents";
    } else {
        cout << "The city sector with the least accidents is the Central, with " << e << " accidents";
    }

}

int main()
{
    int northAcc, southAcc, eastAcc, westAcc, centralAcc;

    cout << "North";
    regionInfo(northAcc);

    int leastAcc = northAcc;

    cout << "South";
    regionInfo(southAcc);
    if (checkForLeast(leastAcc, southAcc)) {
        leastAcc = southAcc;
    }
    else {

    }

    cout << "East";
    regionInfo(eastAcc);
    if (checkForLeast(leastAcc, eastAcc)) {
        leastAcc = eastAcc;
    }
    else {

    }

    cout << "West";
    regionInfo(westAcc);
    if (checkForLeast(leastAcc, westAcc)) {
        leastAcc = westAcc;
    }
    else {

    }

    cout << "Central";
    regionInfo(centralAcc);
    if (checkForLeast(leastAcc, centralAcc)) {
        leastAcc = centralAcc;
    }
    else {

    }
    
    revealLeast(northAcc, southAcc, eastAcc, westAcc, centralAcc, leastAcc);
    cout << endl;

    return 0;
}
