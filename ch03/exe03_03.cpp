#include <iostream>
using namespace std;
const double ConversionFactor = 60.0;

int main(void)
{
    double degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes, seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    
    cout << degrees << " degress, " << minutes << " minutes, " << seconds << " seconds = "
         << (degrees + minutes / ConversionFactor + seconds / ConversionFactor / ConversionFactor)
         << " degress" << endl; 

    return 0;
}