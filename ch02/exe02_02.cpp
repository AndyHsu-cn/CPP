#include <iostream>
using namespace std;

int main(void)
{
    double furlongs;

    cout << "Enter distance in furlongs: ";
    cin >> furlongs;
    cout << "It's equivalent to " << furlongs * 220 << " yard." << endl;

    return 0;
}