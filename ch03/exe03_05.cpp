#include <iostream>
using namespace std;

int main(void)
{
    long long world_population;
	long long us_population;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of US: ";
    cin >> us_population;
    cout << "The pupulation of the US is " << 100.0 * us_population / world_population << "% of the world population." << endl; 

    return 0;
}