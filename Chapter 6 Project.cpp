// This is the Rectangle SubBranch!

#include <iostream>
using namespace std;

void getRectParameters(double &x, double &y) {  //This function recieves and validates the user-entered values for the Rectangle's length/width, then stores them for future use
    do {
        cout << "Enter the Rectangle's Length(must be greater than 0): ";
        cin >> x;
    } while (x < 0.01);
    do {
        cout << "Enter the Rectangle's Width(must be greater than 0): ";
        cin >> y;
    } while (y < 0.01);
}

int main()
{
    double rectLength = 0;
    double rectWidth = 0;

    getRectParameters(rectLength, rectWidth);

    cout << rectLength;
    cout << rectWidth;
}
