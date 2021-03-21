//============================================================================
// Name        : Potenza.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int potenza(int a,int b);

int main() {
int a,b ;
do{
cout<<"inserisci due numeri interi positivi: "<<endl;
	cin>>a>>b;
}while(a<0||b<0);
cout<<"il risultato è "<<potenza(a,b)<<endl;
	return 0;
}

int  potenza(int a,int b){
	if (a==0){
		return 0;
	}
	if (b==0){
		return 1;
	}
	if(b==1){
		return a;
	}
	return a*potenza(a,--b);
}





