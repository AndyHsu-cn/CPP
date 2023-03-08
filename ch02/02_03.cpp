#include <iostream>

int main(void)
{
    using namespace std;
    int carrots;

    cout << "How many carrtos do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrtos." << endl;

    return 0;
}