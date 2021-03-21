//============================================================================
// Name        : Sort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>
using namespace std;
using std::setw;

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int i, hold;

   cout << "Data items in original order\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

   for ( int pass = 0; pass < arraySize - 1; pass++ ) // passes

      for ( i = 0; i < arraySize - 1; i++ )      // one pass

         if ( a[ i ] > a[ i + 1 ] ) {      // one comparison
            hold = a[ i ];                 // one swap
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
         }

   cout << "\nData items in ascending order\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

   cout << endl;
   return 0;
}
