#include <iostream>
#include <iomanip>

using namespace std;

/*
Exericse 7
Made by: Zulhilmi Bin Abdul Rasheed
*/


int main()
{
    int sbpReading;

    cout << "Enter your Systolic Blood Pressure Reading (SBP) to be examined: " << endl;

    cin >> sbpReading;

    cout << endl;

    if (sbpReading <= 120)
        cout << "Normal" << endl;
    else if (sbpReading <= 139)
        cout << "Pre-Hypertension" << endl;
    else
        cout << "Hypertension" << endl;

    return 0;
}