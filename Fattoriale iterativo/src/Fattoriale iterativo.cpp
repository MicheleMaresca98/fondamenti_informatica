//============================================================================
// Name        : Fattoriale.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int fattoriale(int);

int main() {
int n;

cout<<"inserisci n:";
cin>>n;
cout<<"fattoriale: "<<fattoriale(n);
	return 0;
}

int fattoriale(int n){
	int fattoriale={1};
	while(n>0){
		fattoriale=fattoriale*n;
		n--;
	}
	return fattoriale;
}
