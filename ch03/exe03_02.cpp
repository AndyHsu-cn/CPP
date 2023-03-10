#include <iostream>
using namespace std;
const int FootToInches = 12;
const double InchesToMeters = 0.0254;
const double PoundsToKilograms = 2.2;

int main(void)
{
    double height, weight;
    int heightInFeet, heightInInches;
    int weightInPounds;

    cout << "Enter your height in feet and inches: _____\b\b\b\b";
    cin >> heightInFeet >> heightInInches;
    cout << "Enter your weight in pounds? ____\b\b\b\b";
    cin >> weightInPounds;

    height = (heightInFeet * FootToInches + heightInInches) * InchesToMeters;
    weight = weightInPounds / PoundsToKilograms;
    cout << "Your BMI is " << weight / height / height << endl;

    return 0;
}