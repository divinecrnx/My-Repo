// Even  and Odd solving program

#include <iostream>
using namespace std;

bool isEven(int integer);

int main ()
{	int integer;
	
// Prompt user for integer and obtain integer.

  cout << "Please enter an integer"

		<< endl;
  cin >> integer;


 // determine if integer is even or odd
     if(isEven(integer) == true)
         cout << integer << "is odd." << endl;
     else
         cout << integer << "is even." << endl;

     return 0;
}

bool isEven( int integer )
{

  if ( integer % 2== 0 )
     return true;
  else
     return false;
}
