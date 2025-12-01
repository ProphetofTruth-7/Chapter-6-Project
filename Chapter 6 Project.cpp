// This is the Paint Job Estimator Sub-branch

#include <iostream>
#include <cmath>
using namespace std;

void calcRoomNumber(int& x) {  //This function recieves and validates the user-entered values for the number of rooms, then stores them for future use
    do {
        cout << "Enter the number of Room(s): ";
        cin >> x;
    } while (x < 1);
}
void calcRoomSize(double& x) {  //This function recieves and validates the user-entered values for the wall size of a room, then stores them for future use
    do {
        cout << "Enter the square footage of a Room(use common sense): ";
        cin >> x;
    } while (x < 1);
}
void calcPaintCost(double& x) {  //This function recieves and validates the user-entered values for the cost of paint, then stores them for future use
    do {
        cout << "Enter the cost of paint per gallon in USD(above $9.99): ";
        cin >> x;
    } while (x < 10);
}


int main()
{

    int numberofRooms, roomCounter = 0;
    double wallSquareFootage, paintCost, totalSquareFootage = 0;

    calcRoomNumber(numberofRooms);
    calcPaintCost(paintCost);

    do {
        calcRoomSize(wallSquareFootage);
        totalSquareFootage += wallSquareFootage;
        ++roomCounter;
    } while (roomCounter != numberofRooms);

    int paintGallons = round(totalSquareFootage / 110);
    int totalPaintCost = paintGallons * paintCost;
    int laborHours = 8 * paintGallons;
    int laborCost = laborHours * 25;
    int totalCost = laborCost + totalPaintCost;

    cout << endl;

    cout << "To paint all these rooms, totalling " << totalSquareFootage << " square feet, you'll need roughly " << paintGallons << " gallon(s) of paint" << endl;
    cout << "You'll need to spend $" << totalPaintCost << " on paint, $" << laborCost << " on labor, and $" << totalCost << " in total" << endl;
}
