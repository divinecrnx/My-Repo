#include <iostream>
#include <iomanip>

using namespace std;

/*
Exercise 1
Made by: Zulhilmi Bin Abdul Rasheed
*/

int main()
{
    int testScore;

    cout << "Enter your test score: " << endl;

    cin >> testScore;

    if (testScore > 50)
        cout << "Congratulations.. You did it!" << endl;
    else
        cout << "You Failed. Please try again." << endl;

    return 0;

}