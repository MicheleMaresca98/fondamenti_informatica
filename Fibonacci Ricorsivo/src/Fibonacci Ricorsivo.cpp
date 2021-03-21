//============================================================================
// Name        : Fibonacci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
unsigned long fibonacci( unsigned long );
int main()
{
    unsigned long result, number;

    cout << "Enter an integer: ";
    cin >> number;
    result = fibonacci( number );
    cout << "Fibonacci(" << number << ") = " << result << endl;

    return 0;
}
// Recursive definition of function fibonacci
unsigned long fibonacci( unsigned long n )
{
   if ( n == 0 || n == 1 )  // base case
      return n;
   else                     // recursive case
      return fibonacci( n - 1 ) + fibonacci( n - 2 );
}
