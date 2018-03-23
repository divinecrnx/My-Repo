#include <iostream>
#include <iomanip>

using namespace std;

/*
Exericse 2
Made by: Zulhilmi Bin Abdul Rasheed
*/

int main()
{
    double grossPercentage, weeklyPay, weeklySales, salesEarnings;

    weeklyPay = 200;

    cout << "Enter your gross sales for the former week to be calculated for your total earnings." << endl;

    cin >> weeklySales;

    grossPercentage = 0.09 * weeklySales;

    salesEarnings = grossPercentage + weeklyPay + weeklySales;

    cout << "Your total earnings for the former week is RM " << salesEarnings;
    cout << " with a 9% bonus of RM " << grossPercentage << " and complementary RM " << weeklyPay << "." << endl;

    return 0;
}