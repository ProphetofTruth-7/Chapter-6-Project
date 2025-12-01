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
    int northAcc = -1, southAcc = -1, eastAcc = -1, westAcc = -1, centralAcc = -1;
    int regionCounter = 1;
    string currentRegion;

    do {
        cout << "What region's accidents are we storing?(North, South, East, West, or Central): ";
        cin >> currentRegion;

        if (currentRegion == "North" && northAcc > -1) {
            getRegionInfo(northAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "South" && southAcc > -1) {
            getRegionInfo(southAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "East" && eastAcc > -1) {
            getRegionInfo(eastAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "West" && westAcc > -1) {
            getRegionInfo(westAcc);
            ++regionCounter;
            cout << endl;
        }
        else if (currentRegion == "Central" && centralAcc > -1) {
            getRegionInfo(centralAcc);
            ++regionCounter;
            cout << endl;
        }
        else {
            cout << "You entered an invalid region or one you already did \n";
        }
    } while (regionCounter < 6);

    cout << northAcc;
    cout << centralAcc;
}
