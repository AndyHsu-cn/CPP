#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;

int main(void)
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has "
         << sue << " dollars deposited." << endl
         << "Add $1 to each count." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has "
         << sue << " dollars deposited." << endl
         << "Poor sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has "
         << sue << " dollars deposited." << endl
         << "Take $1 from each count." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has "
         << sue << " dollars deposited." << endl
         << "Luck Sue!" << endl;

    return 0;
}
