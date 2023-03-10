#include <iostream>
using namespace std;
const double km_per_miles = 0.6214;
const double gallon_per_liters = 3.875;

int main(void)
{
    double european, us;

    cout << "How many liters per 100 kilometers? ";
	cin >> european;
    us = 100.0 * km_per_miles / european * gallon_per_liters;
    cout << "It is equivalent to " << (int)us << " mpg.\n";

    return 0;
}