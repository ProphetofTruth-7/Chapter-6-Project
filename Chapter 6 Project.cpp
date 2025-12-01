// This is the Safe Driving Sub-branch!

#include <iostream>
#include <string>
using namespace std;

void getRegionInfo(int &x) {
    do {
        cout << "How many accidents did this region experience in the past year?: ";
        cin >> x;
    } while (x < 0);
}


int main()
{
    int northAcc = 0, southAcc = 0, eastAcc = 0, westAcc = 0, centralAcc = 0, regionCounter = 1;
    string currentRegion;

    do {
        cout << "What region's accidents are we storing?(North, South, East, West, or Central): ";
        cin >> currentRegion;

        if (currentRegion == "North") {
            getRegionInfo(northAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "South") {
            getRegionInfo(southAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "East") {
            getRegionInfo(eastAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "West") {
            getRegionInfo(westAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "Central") {
            getRegionInfo(centralAcc);
            ++regionCounter;
            cout << endl;
        }
        else {
            cout << "You entered an invalid region \n";
        }
    } while (regionCounter < 6);

    cout << northAcc;
    cout << centralAcc;
}
