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
 int a[ SIZE ] = { 6, 4, 2, 8, 10, 12, 37, 45, 68, 89 };
 int hold, numberOfComp = 0, comp;
 bool swapCheck = true;

 cout << "Data items in original order\n";
for ( int i = 0; i < SIZE; ++i )
 cout << setw( 4 ) << a[ i ];

 cout << "\n\n";

 for ( int pass = 1; pass < SIZE - 1 && swapCheck == true; ++pass ) {
 cout << "After pass " << pass - 1 << ": ";
 swapCheck = false; // assume no swaps will be made

 	 	 	 for ( comp = 0; comp < SIZE - pass; ++comp ) {
 	 	 		 	 ++numberOfComp;

 	 	 		 	 	 if ( a[ comp ] > a[ comp + 1 ] ) {
 	 	 		 	 		 hold = a[ comp ];
 	 	 		 	 		 a[ comp ] = a[ comp + 1 ];
 	 	 		 	 		 a[ comp + 1 ] = hold;
 	 	 		 	 		 swapCheck = true; // a swap has been made
 	 	 		 	 	 	 	 	 	 	 	 	 	 	 	 	 	 }

 	 	 		 	 	 cout << setw( 3 ) << a[ comp ];
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 }

 	 	 	 	 cout << setw( 3 ) << a[ comp ] << '\n'; // print last array value
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 }

 cout << "\nData items in ascending order\n";

 for ( int q = 0; q < SIZE; ++q )
 cout << setw( 4 ) << a[ q ];

 cout << "\nNumber of comparisons = " << numberOfComp << endl;

 return 0;
}
