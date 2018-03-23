#include <iostream>
#include <iomanip>

using namespace std;

/*

Made by: Zulhilmi Bin Abdul Rasheed
DO NOT COPY OR OTHERWISE PLAGIARISE

*/

int tester()
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


int salesCalculator()
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


int loanCalculator()
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


int ticketAggregate()
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


int gpaReader()
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


int wS()
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


int sbp()
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

int main()
{
    cout << "Which program would you like to run?\n" << endl;

    cout << "1. Test Score \n2. Salesperson Earning \n3. Calculating Interest \n4. Stadium Seating";
    cout << "\n5. Printing Transcript Message \n6. Wind Speed \n7. Systolic Blood Pressure\n" <<endl;

    int choice;

    cin >> choice;

    switch(choice)
    {
        case 1: cout << endl; tester(); break;
        case 2: cout << endl; salesCalculator(); break;
        case 3: cout << endl; loanCalculator(); break;
        case 4: cout << endl; ticketAggregate(); break;
        case 5: cout << endl; gpaReader(); break;
        case 6: cout << endl; wS(); break;
        case 7: cout << endl; sbp(); break;
		default: cout << "Invalid Choice.\n\n"; main();
    }

    return 0;
}
