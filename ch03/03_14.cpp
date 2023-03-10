#include <iostream>
using namespace std;

int main(void)
{
    int auks, bats, coots;
    char ch = 'Z';

    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << endl;
    cout << "bats = " << bats << endl;
    cout << "coots = " << coots << endl;

    cout << "The code for " << ch << " is " << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl; 

    return 0;
}