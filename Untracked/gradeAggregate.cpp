#include <iostream>

using namespace std;


int ifGrade()
{
	int testScore;

	cout << "Enter your test score to be graded: " << endl;

	cin >> testScore;

	if (testScore < 60)

		cout << "Your grade is an F." << endl;

	else if (testScore < 70)

		cout << "Your grade is a D." << endl;

	else if (testScore < 80)

		cout << "Your grade is a C." << endl;

	else if (testScore < 90)

		cout << "Your grade is a B." << endl;

	else

		cout << "Your grade is an A." << endl;


	return 0;
}


int switchGrade()
{
	// int testScore, testF, testD, testC, testB;

	int testScore;

	cout << "Enter your test score to be graded: " << endl;

	cin >> testScore;

	switch (testScore / 10)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6: cout << "Your grade is an F." << endl; break;

		case 7: cout << "Your grade is a D." << endl; break;

		case 8: cout << "Your grade is a C." << endl; break;

		case 9: cout << "Your grade is a B." << endl; break;

		case 10: cout << "Your grade is an A." << endl; break;

		default: cout << "Your grade is not in the expected range..." << endl;
	}

	return 0;
}

int main()
{
	int choice;

	cout << "Which program would you like to run?" << endl;
	cout << endl;
	cout << "1. If styled grade aggregate.\n\n2. Switch styled grade aggregate.\n\n" << endl;

	cin >> choice;

	switch (choice)
	{
		case 1: ifGrade(); break;
		case 2: switchGrade(); break;
		default: cout << "\nInvalid choice." << endl;
	}

	return 0;

}
