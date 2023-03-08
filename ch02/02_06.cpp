#include <iostream>
int stonetolb(int sts);

int main(void)
{
    using namespace std;
    int stone;
    int pounds;

    cout << "Enter the weight in stone: ";
    cin >> stone;
    pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}