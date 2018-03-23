#include <iostream>
#include <iomanip>

using namespace std;

/*
Exericse 4
Made by: Zulhilmi Bin Abdul Rasheed
*/

int main()
{
    float classA, classB, classC, classA_Sold, classB_Sold, classC_Sold, totalTicket_Sold;

    classA = 15.0;
    classB = 12.0;
    classC = 9.0;

    cout << "Class A Seats: RM" << classA << "\nClass B Seats: RM" << classB << "\nClass C Seats: RM" << classC << endl;
    cout << "How many tickets for each class of seats were sold? (A B C)" << endl;

    cin >> classA_Sold >> classB_Sold >> classC_Sold;

    cout << fixed << showpoint << setprecision(2);

    classA_Sold = classA_Sold * classA;
    classB_Sold = classB_Sold * classB;
    classC_Sold = classC_Sold * classC;

    cout << "\nClass A: RM" << classA_Sold << endl;
    cout << "Class B: RM" << classB_Sold << endl;
    cout << "Class C: RM" << classC_Sold << endl;

    totalTicket_Sold = classA_Sold + classB_Sold + classC_Sold;

    cout << "Total price of the tickets sold: RM" << totalTicket_Sold << endl;

    return 0;
}