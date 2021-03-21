//============================================================================
// Name        : Bubble.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using std::cout;
 using std::endl;

#include <iomanip>

using std::setw;

 int main()
 {
 const int SIZE = 10;
 int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
 int hold, numberOfComp = 0, comp;

 cout << "Data items in original order\n";
 for ( int i = 0; i < SIZE; ++i )
 cout << setw( 4 ) << a[ i ];

 cout << "\n\n";

 for ( int pass = 1; pass < SIZE; ++pass ) {
 cout << "After pass " << pass - 1 << ": ";
 	 	 	 for ( comp = 0; comp < SIZE - pass; ++comp ) {
 	 	 		 	 	 ++numberOfComp;

 	 	 		 	 	 	 if ( a[ comp ] > a[ comp + 1 ] ) {
 	 	 		 	 	 		 	 hold = a[ comp ];
 	 	 		 	 	 		 	 	 a[ comp ] = a[ comp + 1 ];
 	 	 		 	 	 		 	 	 a[ comp + 1 ] = hold;
 	 	 		 	 	 	 }

 	 	 		 	 	 	 cout << setw( 3 ) << a[ comp ];
 	 	 	 }

 	 	 	 cout << setw( 3 ) << a[ comp ] << '\n'; // print last array value
 }

 cout << "\nData items in ascending order\n";

 for ( int j = 0; j < SIZE; ++j )
 cout << setw( 4 ) << a[ j ];

 cout << "\nNumber of comparisons = " << numberOfComp << endl;

 return 0;
 }
