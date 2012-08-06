#include <iostream>

using namespace std ;

double calculateCharges( double ore ) {

	double charges=0 ;

	if ( ore <= 3 ) {

		charges += 2.00 ;
		return charges ;

	}

	if ( ore == 24.00 ) {

		charges += 10.00 ;
		return charges ;

	}

	while ( ore > 3 ) {

		ore -= 3.00 ;
		charges += 2.00 ;

	}

	while ( ore > 0 ) {

		ore -= 1.00 ;
		charges += 0.50 ;

	}

	return charges ;

}

int main ( int argc , char** argv ) {

	double tot_ore=0 , tot_charges=0 ;
	double ore1 , ore2 , ore3 ;

	cin >> ore1 ;
	tot_ore += ore1 ;
	cout << calculateCharges(ore1) << endl ;
	tot_charges += calculateCharges(ore1) ;

	cin >> ore2 ;
	tot_ore += ore2 ;
	cout << calculateCharges(ore2) << endl ;
	tot_charges += calculateCharges(ore2) ;

	cin >> ore3 ;
	tot_ore += ore3 ;
	cout << calculateCharges(ore3) << endl ;
	tot_charges += calculateCharges(ore3) ;

	cout << "TOTAL : " << tot_ore << endl << tot_charges << endl ;

	return 0 ;

}

		
		
