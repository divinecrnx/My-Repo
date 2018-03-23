#include <iostream>
#include <iomanip>

using namespace std;

/*
Exericse 6
Made by: Zulhilmi Bin Abdul Rasheed
*/

int main()
{
    int windSpeed;

    cout << "Enter the current wind speed for your surrounding: " << endl;

    cin >> windSpeed;

    cout << endl;

    if (windSpeed <= 25)
        cout << "Not a strong wind" << endl;
    else if (windSpeed <= 38)
        cout << "Strong wind" << endl;
    else if (windSpeed <= 54)
        cout << "Gale" << endl;
    else if (windSpeed <= 72)
        cout << "Whole Gale" << endl;
    else
        cout << "Hurricane" << endl;

    return 0;
}