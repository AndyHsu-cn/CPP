#include <iostream>
using namespace std;
const int HoursMinutesSecondsCF = 60;
const int HoursToDays = 24;

int main(void)
{
    long long secondsInput;
	int days, hours, minutes, seconds;

    cout << "Enter the number of seconds: ";
    cin >> secondsInput;
    days = secondsInput / HoursMinutesSecondsCF / HoursMinutesSecondsCF / HoursToDays;
    hours = secondsInput / HoursMinutesSecondsCF / HoursMinutesSecondsCF - days * HoursToDays;
    minutes = secondsInput / 60 - days * HoursToDays * HoursMinutesSecondsCF - hours * HoursMinutesSecondsCF;
    seconds = secondsInput - days * HoursToDays * HoursMinutesSecondsCF * HoursMinutesSecondsCF  - hours * HoursMinutesSecondsCF * HoursMinutesSecondsCF - minutes * HoursMinutesSecondsCF;

    cout << secondsInput << " seconds = " << days << " days, "
         << hours << " hours, " << minutes << " minutes, "
         << seconds << " seconds" << endl;

    return 0;
}