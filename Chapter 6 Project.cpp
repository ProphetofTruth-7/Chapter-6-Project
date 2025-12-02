// This is the Celsius Table Subbranch!

#include <iostream>
#include <iomanip>
using namespace std;

double calcCelsius(double x) {   //This function calculates the Celsius formula and returns the value for use in the table
    return 0.5555 * (x-32);
}


int main()
{
    const int MINTEMP = 0, MAXTEMP = 20;  // This sets your range for the minimum and maximum Fahrenheit. Change these to make a larger range
    int fahrenheitValue;

    do {
        cout << "Enter the Fahrenheit(must be an integer between " << MINTEMP << " and " << MAXTEMP << "): ";
        cin >> fahrenheitValue;
        cout << "The Celsius value of that temperature is: " << calcCelsius(fahrenheitValue);
    } while (fahrenheitValue > MAXTEMP || fahrenheitValue < MINTEMP);


}
