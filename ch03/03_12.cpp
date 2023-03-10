#include <iostream>
using namespace std;

int main(void)
{
    const int LBS_PER_STN = 14;
    int lbs;
    int stone, pounds;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    stone = lbs / LBS_PER_STN;
    pounds = lbs % LBS_PER_STN;
    cout << lbs << " pounds are " << stone << " stone, "
         << pounds << " pound(s)" << endl;

    return 0;
}