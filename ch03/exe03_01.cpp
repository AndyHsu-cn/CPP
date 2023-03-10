#include <iostream>
using namespace std;

int main(void)
{
    const int ConversionFactor = 12;
    int height_in_inches;

    cout << "Enter your height in inches: __\b\b";
    cin >> height_in_inches;

    cout << "You height can also be " << height_in_inches / ConversionFactor
	     << " feet and " << height_in_inches % ConversionFactor
         << " inches.\n";
    return 0;
}