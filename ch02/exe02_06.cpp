#include <iostream>
using namespace std;

int main(void)
{
    double numLightYear;

    cout << "Enter the number of light year: ";
    cin >> numLightYear;
    cout << numLightYear << " light years = " << 4.2 * 63240 
         << "astronomical units." << endl;

    return 0;
}