// This is the Rectangle SubBranch!

#include <iostream>
using namespace std;

void getRectParameters(double &x, double &y) {  //This function recieves and validates the user-entered values for the Rectangle's length/width, then stores them for future use
    do {
        cout << "Enter the Rectangle's Length(must be greater than 0): ";
        cin >> x;
        if (x < 0.01) {
            cout << "\nInvalid length \n";
        }
        else {

        }
    } while (x < 0.01);
    do {
        cout << "Enter the Rectangle's Width(must be greater than 0): ";
        cin >> y;
        if (y < 0.01) {
            cout << "\nInvalid width \n";
        }
        else {

        }
    } while (y < 0.01);
}
void calcRectPerimeter(double x, double y) { //This function calculates the Perimeter(without changing rectLength or rectWidth) and displays the value
    cout << "The Perimeter of this Rectangle is: " << 2 * (x + y) << " Units";
}
void calcRectArea(double x, double y) { //This function calculates the Area(without changing rectLength or rectWidth) and displays the value
    cout << "The Area of this Rectangle is: " << x * y << " Units";
}


int main()   //This is the main function, which establishes the variables and ticks through each function as many times as requested
{
    int programInitialization = 0;
    double rectLength = 0, rectWidth = 0;

    do {
        cout << "\nInitialize Program?(0 = No, 1 = Yes): ";
        cin >> programInitialization;
        if (programInitialization == 1) {

            getRectParameters(rectLength, rectWidth);

            cout << endl;

            calcRectPerimeter(rectLength, rectWidth);

            cout << endl;

            calcRectArea(rectLength, rectWidth);

            cout << endl;
        }
    } while (programInitialization != 0);
    cout << "Program Terminated";
    return 0;
}
