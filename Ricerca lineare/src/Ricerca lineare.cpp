//============================================================================
// Name        : Ricerca.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using namespace std;
int linearSearch( const int [], int, int );

int main(){

   const int arraySize = 100;
   int a[ arraySize ], searchKey, element;

   for ( int x = 0; x < arraySize; x++ )  // create some data
      a[ x ] = 2 * x;

   cout << "Enter integer search key:" << endl;
   cin >> searchKey;
   element = linearSearch( a, searchKey, arraySize );

   if ( element != -1 )
      cout << "Found value in element " << element << endl;
   else
      cout << "Value not found" << endl;

   return 0;
}

int linearSearch( const int array[], int key, int sizeOfArray )
{
   for ( int n = 0; n < sizeOfArray; n++ )
      if ( array[ n ] == key )
         return n;

   return -1;
}
