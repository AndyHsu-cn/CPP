#include <iostream>
using namespace std;

int main(void)
{
    double miles, gallons;

    cout << "How many miles have you driven: ";
	cin >> miles;
	cout << "How many gallons of gasoline have you used: ";
	cin >> gallons;
    cout << "Your car has gotten " << miles / gallons << " gallons/miles." << endl;

    return 0;
}