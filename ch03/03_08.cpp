#include <iostream>
using namespace std;

int main(void)
{
    const float million = 1.0e6;
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ", and ten million tubs = " << 10 * million * tub << endl;

    cout << "mint = " << mint;
    cout << ", a million mints = " << million * mint;
    cout << ", and ten million mints = " << 10 * million * mint << endl;


    return 0;
}