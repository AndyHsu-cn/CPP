#include <iostream>
using namespace std;

int main(void)
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (decimal for 42)" << endl;

    cout << hex;
    cout << "waist = " << waist << " (hex for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}