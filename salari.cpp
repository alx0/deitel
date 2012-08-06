#include <iostream>

using namespace std ;

int main ( int argc , char** argv ) {

	int hours , earnforhour , straordinary=0 ;
	int exceed = 0 ;
	while ( 1 ) {
		cout << "Enter hours worked (-1 to end) : " ;
		cin >> hours ;
		if ( hours == -1 ) return 0 ;

		cout << "Enter hourly rate of the worker : " ;
		cin >> earnforhour ;

		if (  ( hours - 40 ) == 0 || ( hours - 40 ) < 0 ) {

			cout << "Salary is $" << earnforhour * hours << endl ;

		}

		else {

			exceed = hours - 40 ;
			straordinary = exceed * ( earnforhour + earnforhour/2 ) ;
			straordinary += earnforhour * (hours-exceed) ;
			cout << "Salary is $" << straordinary << endl ;

		}

	}

	return 0 ;

}

