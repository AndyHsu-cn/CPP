#include <iostream>
using namespace std;
double celsiumToFahrenheit(double celsius);

int main(void)
{
    double celsius;
    
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degerees Celsius is "
         << celsiumToFahrenheit(celsius)
         << " degrees Fahrenheit." << endl;

    return 0;
}

double celsiumToFahrenheit(double celsius)
{
    return (1.8 * celsius + 32.0);
}