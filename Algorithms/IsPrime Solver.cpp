#include <iostream>
#include <math.h>

using namespace std;

/*
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
*/

/*
int main()
{
	int num1,num2,total;
	
	num1 = 0;
	num2 = 0;
	total = 0;
	
	cout<< "Enter A,B: \n" ;
	cin>> num1>>num2;
	total = num1 + num2;
	cout<< "The total of "<<num1 << " and " << num2 << " is: "<<total;
	
	return 0;
	
}
*/

bool isEven( int integer )
{

  if ( integer % 2 == 0 )
     return true;
  else
     return false;
}

int main(){
	
	int N, k, D, divStep4, divStep2;
	double _N;
	
	cout<< "Enter an integer to test for prime: \n" ;
	
		cin>>N;
		
	divStep2 = N % 2;
	_N = sqrt(N);
	k = _N;
	D = k;
	divStep4 = N % D;	
	
	
	if (isEven(D) == true){
		
		D--;
		
	}
	
	cout<< "\ndivStep2: " << divStep2 << "\n_N: " << _N << "\nk: " << k << "\nD: " << D << "\ndivStep4: " << divStep4;
	
	if (N == 2) {
		cout<< "\n\nStep 1 returned true...\n" ;
		cout<< "\n" << N << " is a prime number." ;
	}
	
	else if (divStep2 == 0){
		cout<< "\n\nStep 2 returned true...\n" ;
		cout<< "\n" << N << " is not a prime number." ;
	}
	
	else if (divStep4 == 0){
		cout<< "\n\nStep 4 possibility 1 has returned true." ;
		cout<< "\n" << N << " is not a prime number." ;
	}
	
	else {
		cout<< "\n\nStep 4 possibility 2 has returned true." ;
		cout<< "\n" << N << " is a prime number." ;
	}
	
	return 0;
}











