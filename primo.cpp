#include <iostream>

using namespace std ;

bool primo ( int i , int n ) {

	if ( i == 1 ) return true ;
	if ( n % i == 0 ) return false ;

	primo( --i , n ) ;

}

int main ( int argc , char** argv ) {

	cout << primo( 30031/2 , 30031 ) << endl ;

	return 0 ;

}


