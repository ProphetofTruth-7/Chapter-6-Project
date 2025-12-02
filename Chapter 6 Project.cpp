// This is the Celsius Table Subbranch!

#include <iostream>
#include <iomanip>
using namespace std;

double calcCelsius(double x) {   //This function calculates the Celsius formula and returns the value for use in the table. It only requires a fahrenheit value
    return 0.55555556 * (x-32);
}


int main()
{
    const int MINTEMP = 0, MAXTEMP = 20;  // This sets your range for the minimum and maximum Fahrenheit. Change these to make a larger range

    cout << "            Conversion Table" << endl;
    cout << "Fahrenheit" << setw(26) << "Celsius" << endl;

    int fahrenheitValue = MINTEMP;

    do {
        cout << fahrenheitValue << setw(35) << calcCelsius(fahrenheitValue) << endl;
        ++fahrenheitValue;
    } while (fahrenheitValue != MAXTEMP +1);

    return 0;
}
