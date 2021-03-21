//============================================================================
// Name        : Fattoriale.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;
unsigned long factorial( unsigned long );
int main()
{
   for ( int i = 0; i <= 10; i++ )
      cout << setw( 2 ) << i << "! = " << factorial( i ) << endl;


   return 0;
}
// Recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
   if ( number <= 1 )  // base case
      return 1;
   else                // recursive case
      return number * factorial( number - 1 );
}
