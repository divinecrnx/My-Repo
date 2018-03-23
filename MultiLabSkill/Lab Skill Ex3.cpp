#include <iostream>
#include <iomanip>

using namespace std;

/*
Exericse 3
Made by: Zulhilmi Bin Abdul Rasheed
*/

int main()
{
    float interest, principal, rate, days;

    cout << "Enter your loan principal: " << endl;

    cin >> principal;

    cout << "Enter your interest rate: " << endl;

    cin >> rate;

    cout << "How long is the loan duration in days: " << endl;

    cin >> days;

    interest = principal * rate * (days/365);


    cout << endl;
    cout << "Loan principal: RM" << principal << endl;
    cout << "Interest rate: " << rate << endl;
    cout << "Loan duration (days): " << days << endl;
    cout << "\nThe interest charge is RM" << interest <<endl;

    return 0;
}