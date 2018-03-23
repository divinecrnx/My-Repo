#include <iostream>
#include <iomanip>

using namespace std;

/*
Exericse 5
Made by: Zulhilmi Bin Abdul Rasheed
*/

int main()
{
    float gpa;

    cout << "Enter your GPA to determine your outcome for the semester: ";
    cout << fixed << showpoint << setprecision(2) << endl;

    cin >> gpa;

    cout << endl;

    if (gpa >= 0.0 && gpa <= 4.0)
    {
        if (gpa <= 0.99)
            cout << "Failed semester - registration suspended" << endl;
        else if (gpa <= 1.99)
            cout << "On probation for next semester" << endl;
        else if (gpa <= 2.99)
            cout << "" << endl;
        else if (gpa <= 3.49)
            cout << "Dean's List for semester" << endl;
        else
            cout << "Highest Honors for semester" << endl;
    }
    else
        cout << "GPA out of range..." << endl;

    return 0;
}