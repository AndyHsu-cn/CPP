#include <iostream>
using namespace std;

void printThree(void);
void printSee(void);

int main(void)
{
    printThree();
    printThree();
    printSee();
    printSee();

    return 0;
}

void printThree(void)
{
    cout << "Three blind mice" << endl;
}

void printSee(void)
{
    cout << "See how they run" << endl;
}